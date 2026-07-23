/*
 * XREFs of BvgaReleaseLock @ 0x1405C8630
 * Callers:
 *     BvgaBitBlt @ 0x1405C83B0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405C8430 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1405C84A0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1405C85C0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1405C8810 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1405C88E0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int8)BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( (unsigned __int8)v0 <= 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v0);
    __writecr8(v0);
  }
}
