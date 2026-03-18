/*
 * XREFs of UsbhSignalSyncDeviceResetPdo @ 0x1400101F4
 * Callers:
 *     UsbhResetPortData @ 0x140010110 (UsbhResetPortData.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140049E24 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 */

void __fastcall UsbhSignalSyncDeviceResetPdo(__int64 a1, __int64 a2, int a3)
{
  int v5; // ebp
  KSPIN_LOCK *v6; // rdi
  KIRQL v7; // si
  PRKEVENT *v8; // rax

  v5 = a1;
  v6 = (KSPIN_LOCK *)(FdoExt(a1) + 1292);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  if ( a2 && *((_QWORD *)PdoExt(a2) + 108) )
  {
    PdoExt(a2)[218] = a3;
    Log(v5, 4, 1936287557, a2, 0LL);
    v8 = (PRKEVENT *)PdoExt(a2);
    KeSetEvent(v8[108], 0, 0);
  }
  KeReleaseSpinLock(v6, v7);
}
