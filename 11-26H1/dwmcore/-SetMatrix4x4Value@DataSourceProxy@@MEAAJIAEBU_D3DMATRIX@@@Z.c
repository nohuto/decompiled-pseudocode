/*
 * XREFs of ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x180243720
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndReportError@DataSourceProxy@@AEAAJJ@Z @ 0x1801D812C (-CheckAndReportError@DataSourceProxy@@AEAAJJ@Z.c)
 *     ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1802422AC (--$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJUDCOMPOSITION_PROPERTY_ID@@PEBUD2DMatrix.c)
 *     ?InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180242E68 (-InvalidateReadersAnimationSources@DataSourceProxy@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::SetMatrix4x4Value(
        DataSourceProxy *this,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  __int128 v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_OWORD *)&a3->_21;
  v10[0] = *(_OWORD *)&a3->_11;
  v6 = *(_OWORD *)&a3->_31;
  v10[1] = v4;
  v7 = *(_OWORD *)&a3->_41;
  v10[2] = v6;
  v10[3] = v7;
  v8 = DataSourcePropertySet::SetProperty<D2DMatrix>((__int64)this + 64, a2, v10);
  if ( (int)DataSourceProxy::CheckAndReportError(this, v8) >= 0 )
    DataSourceProxy::InvalidateReadersAnimationSources((__int64)this, a2);
  return 0LL;
}
