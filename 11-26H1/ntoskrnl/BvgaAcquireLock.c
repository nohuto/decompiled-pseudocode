/*
 * XREFs of BvgaAcquireLock @ 0x1405C8340
 * Callers:
 *     BvgaBitBlt @ 0x1405C83B0 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405C8430 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1405C84A0 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1405C85C0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1405C8810 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1405C88E0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140441C80 (KeTestSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  int v1; // edx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( !KeTestSpinLock(&BootDriverLock) )
      ;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v1) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v1);
    }
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
