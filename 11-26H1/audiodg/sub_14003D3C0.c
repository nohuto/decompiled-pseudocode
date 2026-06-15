/*
 * XREFs of sub_14003D3C0 @ 0x14003D3C0
 * Callers:
 *     sub_14004A829 @ 0x14004A829 (sub_14004A829.c)
 *     sub_14004A8FC @ 0x14004A8FC (sub_14004A8FC.c)
 *     sub_14004A987 @ 0x14004A987 (sub_14004A987.c)
 *     sub_14004AA12 @ 0x14004AA12 (sub_14004AA12.c)
 *     sub_14004AA9D @ 0x14004AA9D (sub_14004AA9D.c)
 *     sub_14004AB3A @ 0x14004AB3A (sub_14004AB3A.c)
 *     sub_14004AC79 @ 0x14004AC79 (sub_14004AC79.c)
 *     sub_14004AD94 @ 0x14004AD94 (sub_14004AD94.c)
 *     sub_14004B70D @ 0x14004B70D (sub_14004B70D.c)
 *     sub_14004B85E @ 0x14004B85E (sub_14004B85E.c)
 *     sub_14004B96A @ 0x14004B96A (sub_14004B96A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003D3C0(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
