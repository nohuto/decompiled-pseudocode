/*
 * XREFs of MiReturnSystemVa @ 0x1402A3788
 * Callers:
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiGetPageTablesForLargeMap @ 0x1402A2624 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1402A2BF0 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MiReturnSystemPtes @ 0x1402A2FA8 (MiReturnSystemPtes.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     MiExpandPtes @ 0x140360B30 (MiExpandPtes.c)
 *     MiUnmapLargePages @ 0x1405053F4 (MiUnmapLargePages.c)
 *     MiDeleteBootRange @ 0x1406E827C (MiDeleteBootRange.c)
 *     MmFreeSecurePoolMemory @ 0x140700AB8 (MmFreeSecurePoolMemory.c)
 *     MiReleaseDriverPtes @ 0x140A85EA8 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 * Callees:
 *     MiMakeSystemRangeAvailable @ 0x1402A3998 (MiMakeSystemRangeAvailable.c)
 *     MiDecommitSystemPageTables @ 0x1402A3C08 (MiDecommitSystemPageTables.c)
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
