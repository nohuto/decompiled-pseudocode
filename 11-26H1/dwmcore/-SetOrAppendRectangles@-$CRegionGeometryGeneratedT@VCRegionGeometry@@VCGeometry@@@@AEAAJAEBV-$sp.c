/*
 * XREFs of ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@_N@Z @ 0x1801B66D0
 * Callers:
 *     ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1801B66C0 (-SetRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$CBV.c)
 * Callees:
 *     ?OnRectanglesChanged@CRegionGeometry@@QEAAXXZ @ 0x1800E625C (-OnRectanglesChanged@CRegionGeometry@@QEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@PEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@_K@Z @ 0x1801B678C (--$_Insert_counted_range@PEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRect.c)
 */

__int64 __fastcall CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::SetOrAppendRectangles(
        CRegionGeometry *this,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( !a3 )
  {
    v4 = *((_QWORD *)this + 17);
    if ( v4 != *((_QWORD *)this + 18) )
      *((_QWORD *)this + 18) = v4;
  }
  std::vector<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>>::_Insert_counted_range<TMilRect_<int,tagRECT,Mil3DRectL,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_> const *>(
    (char *)this + 136,
    *((_QWORD *)this + 18),
    a2[1],
    (16LL * *a2) >> 4);
  CRegionGeometry::OnRectanglesChanged(this, v5, v6);
  return 0LL;
}
