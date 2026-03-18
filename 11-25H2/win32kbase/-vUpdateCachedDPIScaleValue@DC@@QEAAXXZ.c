/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140075604
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1400754F8 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400755B4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x14008F050 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x14008F280 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140075690 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14008FFF0 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  __int64 v1; // rcx
  int v2; // r8d
  DC *v3; // r9
  int v4; // r10d
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( (unsigned int)DC::bDpiScaleTransform(this) )
  {
    v4 = *(_DWORD *)(v1 + 524);
    v5 = (unsigned __int8)(v4 >> 23);
    if ( v5 <= 0x9E )
    {
      v6 = v4 & 0x7FFFFF | 0x800000LL;
      if ( v5 < 0x76 )
        v7 = v6 >> (118 - (unsigned __int8)v5);
      else
        v7 = v6 << ((unsigned __int8)v5 - 118);
      v8 = (v7 + 0x80000000LL) >> 32;
      v2 = -(int)v8;
      if ( v4 >= 0 )
        v2 = v8;
    }
  }
  DC::SetCachedDpiScaleValue(v3, v2);
}
