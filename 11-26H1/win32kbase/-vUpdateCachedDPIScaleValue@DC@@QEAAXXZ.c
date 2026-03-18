/*
 * XREFs of ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140012F1C
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x140037DB8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039390 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039640 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140039928 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::vUpdateCachedDPIScaleValue(DC *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  DC *v3; // r10
  int v4; // r9d
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax

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
      v2 = (v7 + 0x80000000LL) >> 32;
      if ( v4 < 0 )
        LODWORD(v2) = -(int)v2;
    }
  }
  DC::SetCachedDpiScaleValue(v3, v2);
}
