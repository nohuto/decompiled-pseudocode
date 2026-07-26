/*
 * XREFs of ?ndisReadNDKGlobalFlags@@YAKXZ @ 0x140143750
 * Callers:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 */

__int64 ndisReadNDKGlobalFlags(void)
{
  return mem::ReadNoFence<unsigned long,void>(&dword_14011EF78);
}
