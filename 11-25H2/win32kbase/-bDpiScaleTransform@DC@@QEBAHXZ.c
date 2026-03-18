/*
 * XREFs of ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14008FFF0
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140075604 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x14008F4E0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaleTransform(DC *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 130);
  result = 1LL;
  if ( (v1 & 1) == 0 || (v1 & 2) != 0 )
    return 0LL;
  return result;
}
