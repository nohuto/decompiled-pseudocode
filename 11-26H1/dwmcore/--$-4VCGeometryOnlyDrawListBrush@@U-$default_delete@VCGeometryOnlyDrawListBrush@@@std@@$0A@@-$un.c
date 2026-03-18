/*
 * XREFs of ??$?4VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@1@@Z @ 0x1801DACE0
 * Callers:
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180198E90 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 */

__int64 (__fastcall ****__fastcall std::unique_ptr<CDrawListBrush>::operator=<CGeometryOnlyDrawListBrush,std::default_delete<CGeometryOnlyDrawListBrush>,0>(
        __int64 (__fastcall ****a1)(_QWORD, __int64),
        __int64 (__fastcall ****a2)(_QWORD, __int64)))(_QWORD, __int64)
{
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  v4 = *a2;
  *a2 = 0LL;
  std::unique_ptr<CShape>::reset(a1, v4);
  return a1;
}
