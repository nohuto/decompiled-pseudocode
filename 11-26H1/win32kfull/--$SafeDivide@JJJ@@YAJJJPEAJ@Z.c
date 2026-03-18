/*
 * XREFs of ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1401DD484
 * Callers:
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x14010C710 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1401C4E90 (-bTextExtent@RFONTOBJ@@QEAAHAEAVDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SafeDivide<long,long,long>(int a1, int a2, int *a3)
{
  if ( !a2 || a1 == 0x80000000 && a2 == -1 )
    return 2147500037LL;
  *a3 = a1 / a2;
  return 0LL;
}
