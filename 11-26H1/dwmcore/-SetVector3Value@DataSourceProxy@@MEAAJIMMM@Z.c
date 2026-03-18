/*
 * XREFs of ?SetVector3Value@DataSourceProxy@@MEAAJIMMM@Z @ 0x1802438B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector3@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802425A8 (--$SetProperty@UD2DVector3@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector3Value(
        DataSourceProxy *this,
        unsigned int a2,
        float a3,
        float a4,
        float a5)
{
  int v7; // eax
  _DWORD v9[6]; // [rsp+20h] [rbp-18h] BYREF

  *(float *)&v9[2] = a5;
  *(float *)v9 = a3;
  *(float *)&v9[1] = a4;
  v7 = DataSourcePropertySet::SetProperty<D2DVector3>((__int64)this + 64, a2, (__int64)v9);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v7) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
