/*
 * XREFs of UsbhSshPropagateResume @ 0x14002E46C
 * Callers:
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x14002E664 (UsbhSendSynchronousUsbIoctlRequest.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  KIRQL v12; // dl
  int v13; // ebx
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  int v17; // [rsp+20h] [rbp-28h]
  int v18; // [rsp+28h] [rbp-20h]

  v6 = 0;
  v7 = PdoExt((__int64)a3);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 1381004115;
        *(_QWORD *)(v9 + 16) = a1;
        *(_QWORD *)(v9 + 24) = a3;
      }
    }
  }
  if ( (v7[355] & 4) != 0 )
  {
    v18 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 2232227LL);
    v17 = *((unsigned __int16 *)v7 + 714);
    v6 = v18;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE, v17, v18);
    UsbhAcquirePdoStateLock(v10, a2, 26LL);
    v11 = PdoExt((__int64)a3)[281];
    *(_DWORD *)(a2 + 136) = 0;
    qword_14006F5A0 = 0LL;
    v12 = *(_BYTE *)(a2 + 132);
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v12);
    v13 = v11 - 1;
    if ( !v13 || (unsigned int)(v13 - 1) <= 1 )
    {
      PdoExt((__int64)a3)[197] = 1;
      PoSetPowerState(a3, DevicePowerState, (POWER_STATE)1);
      v14 = PdoExt((__int64)a3);
      v15 = PdoExt((__int64)a3);
      UsbhSshSetPortsBusyState(*((_QWORD *)v15 + 148), *((_WORD *)v14 + 714), 2, 0);
    }
  }
  return v6;
}
