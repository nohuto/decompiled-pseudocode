/*
 * XREFs of ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180243660
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180242878 (--$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBU_D3D.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetColorValue(
        DataSourceProxy *this,
        unsigned int a2,
        float a3,
        float a4,
        unsigned int a5,
        __int32 a6)
{
  int v8; // eax
  __m128i v10; // [rsp+20h] [rbp-18h] BYREF

  v10.m128i_i32[3] = a6;
  *(float *)v10.m128i_i32 = a3;
  *(__int64 *)((char *)v10.m128i_i64 + 4) = __PAIR64__(a5, LODWORD(a4));
  v8 = DataSourcePropertySet::SetProperty<_D3DCOLORVALUE>((__int64)this + 64, a2, &v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
