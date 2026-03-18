/*
 * XREFs of BvgaReleaseLock @ 0x1405C5DC0
 * Callers:
 *     BvgaBitBlt @ 0x1405C5B40 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405C5BC0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1405C5C30 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1405C5D50 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1405C5FA0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1405C6070 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
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
