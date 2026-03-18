/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1400088C8
 * Callers:
 *     UsbhResetPortData @ 0x1400087E4 (UsbhResetPortData.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x1400499D8 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v6; // ebp
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // si
  __int64 v9; // rax

  v4 = a3;
  v6 = a1;
  v7 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 5168);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  if ( a2 && *(_QWORD *)(PdoExt(a2) + 864) )
  {
    *(_DWORD *)(PdoExt(a2) + 872) = v4;
    Log(v6, 4, 1936287557, a2, 0LL);
    v9 = PdoExt(a2);
    KeSetEvent(*(PRKEVENT *)(v9 + 864), 0, 0);
  }
  KeReleaseSpinLock(v7, v8);
}
