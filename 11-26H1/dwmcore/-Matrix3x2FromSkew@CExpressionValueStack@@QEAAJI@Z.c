/*
 * XREFs of ?Matrix3x2FromSkew@CExpressionValueStack@@QEAAJI@Z @ 0x18018C588
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z @ 0x18018CAD0 (-ConsumeStackValues@CExpressionValueStack@@AEAAJIPEAPEAVCExpressionValue@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix3x2FromSkew(CExpressionValueStack *this, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  CExpressionValue *v5; // rbx
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  CExpressionValue *v9; // [rsp+30h] [rbp-38h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+38h] [rbp-30h] BYREF

  v9 = 0LL;
  v3 = CExpressionValueStack::ConsumeStackValues(this, a2, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      v3,
      0x125Du,
      0LL);
    return v4;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v5 = v9;
      if ( *((_DWORD *)v9 + 16) == 18 && *((_DWORD *)v9 + 34) == 18 && *((_DWORD *)v9 + 52) == 35 )
      {
        v6 = (__m128)*((unsigned int *)v9 + 37);
        v7 = (__m128)*((unsigned int *)v9 + 36);
        goto LABEL_11;
      }
    }
LABEL_12:
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      0x128Du,
      0LL);
    return v4;
  }
  v5 = v9;
  if ( *((_DWORD *)v9 + 16) != 18 || *((_DWORD *)v9 + 34) != 18 )
    goto LABEL_12;
  v6 = 0LL;
  v7 = 0LL;
LABEL_11:
  D2D1MakeSkewMatrix(
    *(float *)v5 * 57.295776,
    *((float *)v5 + 18) * 57.295776,
    (D2D1_POINT_2F)*(_OWORD *)&_mm_unpacklo_ps(v7, v6),
    &matrix);
  CExpressionValue::DestroyCurrent(v5);
  *((_DWORD *)v5 + 16) = 104;
  *(D2D1_MATRIX_3X2_F *)v5 = matrix;
  return v4;
}
