/*
 * XREFs of MiReturnSystemVa @ 0x1402A4238
 * Callers:
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiGetPageTablesForLargeMap @ 0x1402A30D4 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1402A36A0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A38D8 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReturnSystemPtes @ 0x1402A3A58 (MiReturnSystemPtes.c)
 *     MiReleasePteMappings @ 0x1402A3B00 (MiReleasePteMappings.c)
 *     MmFreePoolMemory @ 0x14035029C (MmFreePoolMemory.c)
 *     MiExpandPtes @ 0x14035ED90 (MiExpandPtes.c)
 *     MiUnmapLargePages @ 0x14050B984 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x1406E35D0 (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x1406FBDE8 (MmFreeSecurePoolMemory.c)
 *     MiReleaseDriverPtes @ 0x140A80038 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 * Callees:
 *     MiMakeSystemRangeAvailable @ 0x1402A4448 (MiMakeSystemRangeAvailable.c)
 *     MiDecommitSystemPageTables @ 0x1402A46B8 (MiDecommitSystemPageTables.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // rbx

  v2 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v4 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v2 < v4 )
  {
    v5 = (__int64)(v2 << 25) >> 16;
    v6 = (__int64)(v4 << 25) >> 16;
    MiDecommitSystemPageTables(v5, v6);
    return MiMakeSystemRangeAvailable(v5, v6 - v5);
  }
  return result;
}
