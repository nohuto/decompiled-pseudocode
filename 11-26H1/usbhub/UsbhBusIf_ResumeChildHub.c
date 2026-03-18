/*
 * XREFs of UsbhBusIf_ResumeChildHub @ 0x1400362D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x140008460 (UsbhSshSetPortsBusyState.c)
 *     UsbhSyncResumePort @ 0x140010E74 (UsbhSyncResumePort.c)
 *     UsbhClearPdoIdleReady @ 0x140011788 (UsbhClearPdoIdleReady.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhSshPropagateResume @ 0x1400341AC (UsbhSshPropagateResume.c)
 */

__int64 __fastcall UsbhBusIf_ResumeChildHub(__int64 a1)
{
  _DWORD *v2; // rsi
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  _DWORD *v6; // rbx
  _QWORD *v7; // r15
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  struct _DEVICE_OBJECT *v11; // rbp
  unsigned __int16 v12; // bx
  _DWORD *v13; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rax

  v2 = PdoExt(a1);
  v3 = *((_QWORD *)v2 + 148);
  v4 = FdoExt(v3);
  if ( (v2[355] & 4) == 0 )
    return 3221225473LL;
  v6 = FdoExt(v3) + 478;
  v7 = (_QWORD *)UsbhIncHubBusy(v3, (__int64)v6, v3, 1129476712, 0);
  v8 = Usbh_SSH_Event(v3, 5u, (__int64)v6);
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    v9 = FdoExt(v3);
    Usbh_SSH_Event(v3, 6u, (__int64)(v9 + 478));
  }
  if ( v8 < 0 && !*((_BYTE *)v4 + 3416) )
    goto LABEL_12;
  v11 = (struct _DEVICE_OBJECT *)UsbhLatchPdo(v3, *((_WORD *)v2 + 714), 0LL, 0x48536942u);
  if ( v11 )
  {
    v12 = *((_WORD *)v2 + 714);
    v13 = FdoExt(v3);
    if ( (int)UsbhSyncResumePort(v3, (__int64)(v13 + 478), v12) >= 0 )
      UsbhSshSetPortsBusyState(v3, *((unsigned __int16 *)v2 + 714), 2LL, 1LL);
    v14 = FdoExt(v3);
    v8 = UsbhSshPropagateResume(v3, (__int64)(v14 + 478), v11);
    UsbhUnlatchPdo(v3, (__int64)v11, 0LL, 0x48536942u);
LABEL_12:
    v15 = FdoExt(v3);
    UsbhClearPdoIdleReady(v3, a1, (__int64)(v15 + 478));
    goto LABEL_13;
  }
  v8 = -1073741661;
LABEL_13:
  UsbhDecHubBusy(v3, v10, v7);
  return (unsigned int)v8;
}
