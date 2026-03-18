/*
 * XREFs of UsbhLinkPdoDeviceHandle @ 0x14005CE80
 * Callers:
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_HubRefDeviceHandle @ 0x140032A10 (Usbh_HubRefDeviceHandle.c)
 */

__int64 __fastcall UsbhLinkPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v6; // r15
  _DWORD *v7; // rbp
  KIRQL v8; // r12
  int v9; // ebx

  v6 = (KSPIN_LOCK *)FdoExt(a1);
  v7 = PdoExt(a2);
  v8 = KeAcquireSpinLockRaiseToDpc(v6 + 465);
  Log(a1, 256, 1819168836, a3, a2);
  v9 = Usbh_HubRefDeviceHandle(a1, a3, a2, 0x48446470u);
  Log(a1, 256, 1819168817, v9, a2);
  if ( v9 >= 0 )
  {
    v7[288] = 2;
    *((_QWORD *)v7 + 145) = a3;
  }
  KeReleaseSpinLock(v6 + 465, v8);
  return (unsigned int)v9;
}
