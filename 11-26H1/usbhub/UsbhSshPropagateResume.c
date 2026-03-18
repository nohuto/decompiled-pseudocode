/*
 * XREFs of UsbhSshPropagateResume @ 0x1400341AC
 * Callers:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhSendSynchronousUsbIoctlRequest @ 0x140034344 (UsbhSendSynchronousUsbIoctlRequest.c)
 */

__int64 __fastcall UsbhSshPropagateResume(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3)
{
  unsigned int v6; // esi
  _DWORD *v7; // rbp
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  KIRQL v15; // dl
  int v16; // ebx
  unsigned __int16 v17; // bx
  _DWORD *v18; // rax

  v6 = 0;
  v7 = PdoExt((__int64)a3);
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 1381004115;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a1;
        *(_QWORD *)(v12 + v11 + 24) = a3;
      }
    }
  }
  if ( (v7[355] & 4) != 0 )
  {
    v6 = UsbhSendSynchronousUsbIoctlRequest(a1, a3, 2232227LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_PROPAGATE);
    UsbhAcquirePdoStateLock(v13, a2, 26);
    v14 = PdoExt((__int64)a3)[281];
    *(_DWORD *)(a2 + 136) = 0;
    qword_140070600 = 0LL;
    v15 = *(_BYTE *)(a2 + 132);
    *(_DWORD *)(a2 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v15);
    v16 = v14 - 1;
    if ( !v16 || (unsigned int)(v16 - 1) <= 1 )
    {
      PdoExt((__int64)a3)[197] = 1;
      PoSetPowerState(a3, DevicePowerState, (POWER_STATE)1);
      v17 = *((_WORD *)PdoExt((__int64)a3) + 714);
      v18 = PdoExt((__int64)a3);
      UsbhSshSetPortsBusyState(*((_QWORD *)v18 + 148), v17, 2LL, 0LL);
    }
  }
  return v6;
}
