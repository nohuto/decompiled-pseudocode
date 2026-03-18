/*
 * XREFs of ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68
 * Callers:
 *     ?SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z @ 0x180243530 (-SetBooleanValue@DataSourceProxy@@MEAAJI_N@Z.c)
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180243660 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802436D0 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180243720 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 *     ?SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180243790 (-SetQuaternionValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 *     ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180243800 (-SetScalarValue@DataSourceProxy@@MEAAJIM@Z.c)
 *     ?SetVector2Value@DataSourceProxy@@MEAAJIMM@Z @ 0x180243850 (-SetVector2Value@DataSourceProxy@@MEAAJIMM@Z.c)
 *     ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1802438B0 (-SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z.c)
 *     ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180243910 (-SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     ?GetTargetResource@?$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ @ 0x18004C1C0 (-GetTargetResource@-$CWeakReference@VCGdiSpriteBitmap@@@@QEBAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180266B3C (-InvalidateAnimationSources@CDataSourceReader@@QEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

void __fastcall DataSourceProxy::InvalidateReadersAnimationSources(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rdi
  __int64 TargetResource; // rax

  v2 = *(__int64 **)(a1 + 208);
  for ( i = *(__int64 **)(a1 + 200); i != v2; ++i )
  {
    TargetResource = CWeakReference<CGdiSpriteBitmap>::GetTargetResource(*i);
    if ( TargetResource )
      CDataSourceReader::InvalidateAnimationSources(TargetResource, a2);
  }
}
