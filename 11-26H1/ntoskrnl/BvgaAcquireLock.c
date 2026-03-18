/*
 * XREFs of BvgaAcquireLock @ 0x1405C5AD0
 * Callers:
 *     BvgaBitBlt @ 0x1405C5B40 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1405C5BC0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1405C5C30 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1405C5D50 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1405C5FA0 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1405C6070 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeTestSpinLock @ 0x140449B50 (KeTestSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
