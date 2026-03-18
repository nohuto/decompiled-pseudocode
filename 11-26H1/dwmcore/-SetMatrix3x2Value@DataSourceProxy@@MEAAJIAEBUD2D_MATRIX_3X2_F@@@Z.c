/*
 * XREFs of ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802436D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242778 (--$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix3x2Value(
        DataSourceProxy *this,
        unsigned int a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v5; // eax

  v5 = DataSourcePropertySet::SetProperty<D2D_MATRIX_3X2_F>((__int64)this + 64, a2, (__int64)a3);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
