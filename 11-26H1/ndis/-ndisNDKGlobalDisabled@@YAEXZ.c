/*
 * XREFs of ?ndisNDKGlobalDisabled@@YAEXZ @ 0x140143374
 * Callers:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 * Callees:
 *     ??$ReadNoFence@EX@mem@@YAEPEDE@Z @ 0x14008F640 (--$ReadNoFence@EX@mem@@YAEPEDE@Z.c)
 */

__int64 ndisNDKGlobalDisabled(void)
{
  return mem::ReadNoFence<unsigned char,void>(byte_14011EF7C);
}
