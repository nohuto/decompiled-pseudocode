/*
 * XREFs of ?SetScalarValue@DataSourceProxy@@MEAAJIM@Z @ 0x180243800
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802421D0 (--$SetProperty@M@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBMW4DCOMPOSITION_EXPRE.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetScalarValue(DataSourceProxy *this, unsigned int a2, float a3)
{
  int v5; // eax
  float v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v5 = DataSourcePropertySet::SetProperty<float>((__int64)this + 64, a2, (int *)&v7);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v5) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
