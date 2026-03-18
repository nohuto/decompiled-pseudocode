/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x140037F80
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     UsbhSshSetPortsBusyState @ 0x14000FDA0 (UsbhSshSetPortsBusyState.c)
 *     UsbhClearPdoIdleReady @ 0x140017A4C (UsbhClearPdoIdleReady.c)
 *     UsbhSshPropagateResume @ 0x14002E46C (UsbhSshPropagateResume.c)
 *     UsbhSyncResumePort @ 0x1400358D0 (UsbhSyncResumePort.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1)
{
  _DWORD *v2; // rsi
  struct _DEVICE_OBJECT *v3; // rdi
  _DWORD *v4; // rbp
  _DWORD *v6; // rbx
  _QWORD *v7; // r15
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  struct _DEVICE_OBJECT *v11; // rbp
  _DWORD *v12; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rax

  v2 = PdoExt(a1);
  v3 = (struct _DEVICE_OBJECT *)*((_QWORD *)v2 + 148);
  v4 = FdoExt((__int64)v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v6 = FdoExt((__int64)v3) + 478;
  v7 = (_QWORD *)UsbhIncHubBusy((__int64)v3, (__int64)v6, (__int64)v3, 1129476712, 0);
  v8 = Usbh_SSH_Event(v3, 5u, (__int64)v6);
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    v9 = FdoExt((__int64)v3);
    Usbh_SSH_Event(v3, 6u, (__int64)(v9 + 478));
  }
  if ( v8 < 0 && !*((_BYTE *)v4 + 3416) )
    goto LABEL_12;
  v11 = (struct _DEVICE_OBJECT *)UsbhLatchPdo((__int64)v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( v11 )
  {
    v12 = FdoExt((__int64)v3);
    if ( (int)UsbhSyncResumePort((__int64)v3, (__int64)(v12 + 478), *((_WORD *)v2 + 714)) >= 0 )
      UsbhSshSetPortsBusyState((__int64)v3, *((_WORD *)v2 + 714), 2, 1u);
    v13 = FdoExt((__int64)v3);
    v8 = UsbhSshPropagateResume((__int64)v3, (__int64)(v13 + 478), v11);
    UsbhUnlatchPdo((__int64)v3, (__int64)v11, 0LL, 0x48536942u);
LABEL_12:
    v14 = FdoExt((__int64)v3);
    UsbhClearPdoIdleReady((__int64)v3, a1, (__int64)(v14 + 478));
    goto LABEL_13;
  }
  v8 = -1073741661;
LABEL_13:
  UsbhDecHubBusy((__int64)v3, v10, v7);
  return (unsigned int)v8;
}
