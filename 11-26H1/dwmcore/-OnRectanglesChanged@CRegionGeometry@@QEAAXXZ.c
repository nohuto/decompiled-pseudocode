/*
 * XREFs of ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800E625C
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@_N@Z @ 0x1801B66D0 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 *     ?AppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18021AE88 (-AppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800E69E8 (-IsEmpty@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CRegionGeometry::OnRectanglesChanged(CRegionGeometry *this, __int64 a2, __int64 a3)
{
  CRegionGeometry *v3; // r9
  __int64 i; // rcx
  __int64 v5; // rcx

  v3 = this;
  *((_BYTE *)this + 160) = 1;
  for ( i = *((_QWORD *)this + 17); i != *((_QWORD *)v3 + 18); i = v5 + 16 )
  {
    if ( !(unsigned __int8)TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IsEmpty(i, a2, a3, v3) )
    {
      *((_BYTE *)v3 + 160) = 0;
      break;
    }
  }
  (*(void (__fastcall **)(CRegionGeometry *, _QWORD, _QWORD))(*(_QWORD *)v3 + 80LL))(v3, 0LL, 0LL);
}
