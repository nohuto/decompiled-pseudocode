/*
 * XREFs of UsbhSetPdo_FailIo @ 0x140048260
 * Callers:
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x140051684 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005D810 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005DAE0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_FailIo(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)PdoExt(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 152);
  *((_DWORD *)v1 + 196) = 2;
  KeReleaseSpinLock(v1 + 152, v2);
}
