/*
 * XREFs of ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x14002F1A0 (vDynamicConvertNewSurfaceDCs.c)
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x140038360 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x14003DEF0 (GreCreateDisplayDC.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1400C9FCC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x140037DB8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140039928 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x140039950 (-SetCachedDpiScaleValue@DC@@QEAAXJ@Z.c)
 */

void __fastcall DC::pSurface(DC *this, struct SURFACE *a2)
{
  int v2; // eax
  __int64 v3; // r8
  DC *v4; // r9
  int v5; // r10d
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax

  *((_QWORD *)this + 62) = a2;
  if ( a2 && (*((_DWORD *)a2 + 29) & 0x800) != 0 )
  {
    DC::vSetDpiScaling(
      (__int64)this,
      _mm_unpacklo_ps((__m128)*((unsigned int *)a2 + 165), (__m128)*((unsigned int *)a2 + 166)).m128_i64[0]);
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
      if ( (unsigned int)DC::bDpiScaleTransform(this) )
      {
        v5 = _mm_cvtsi128_si32((__m128i)0LL);
        v6 = (unsigned __int8)(v5 >> 23);
        if ( v6 <= 0x9E )
        {
          v7 = v5 & 0x7FFFFF | 0x800000LL;
          if ( v6 < 0x76 )
            v8 = v7 >> (118 - (unsigned __int8)v6);
          else
            v8 = v7 << ((unsigned __int8)v6 - 118);
          v3 = (v8 + 0x80000000LL) >> 32;
          if ( v5 < 0 )
            LODWORD(v3) = -(int)v3;
        }
      }
      DC::SetCachedDpiScaleValue(v4, v3);
    }
  }
}
