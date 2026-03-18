/*
 * XREFs of ?SetVector4Value@DataSourceProxy@@MEAAJIMMMM@Z @ 0x180243910
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVector4@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18024269C (--$SetProperty@UD2DVector4@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DVecto.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetVector4Value(
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
  v8 = DataSourcePropertySet::SetProperty<D2DVector4>((__int64)this + 64, a2, &v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
