/*
 * XREFs of MiFlushCacheRange @ 0x14070D474
 * Callers:
 *     MiHotRemoveHugeRange @ 0x1406EBF04 (MiHotRemoveHugeRange.c)
 *     MiRemovePhysicalMemory @ 0x140866D5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushCacheForAttributeChange @ 0x14024FAF0 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14024FCE0 (KeInvalidateAllCaches.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140E2D734 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    MiFlushCacheForAttributeChange(a1, a2, 3, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140E2D72C;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
