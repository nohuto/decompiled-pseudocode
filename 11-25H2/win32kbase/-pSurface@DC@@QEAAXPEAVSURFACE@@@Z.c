/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x14007553C
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140075390 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x140093688 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1400755B4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x140075604 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  int v2; // eax

  *((_QWORD *)this + 62) = a2;
  if ( a2 && (*((_DWORD *)a2 + 29) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(
      this,
      _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 165), (__m128)*((unsigned int *)a2 + 166)).m128_u64[0]);
  }
  else
  {
    v2 = *((_DWORD *)this + 130);
    if ( (v2 & 1) != 0 )
    {
      *((_DWORD *)this + 9) |= 0x10u;
      *(_QWORD *)((char *)this + 524) = 0LL;
      *((_DWORD *)this + 130) = v2 & 0xFFFFFFF8 | 4;
      *(_QWORD *)((char *)this + 532) = 0LL;
      DC::vUpdateCachedDPIScaleValue(this);
    }
  }
}
