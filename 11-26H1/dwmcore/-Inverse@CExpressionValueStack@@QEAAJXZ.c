/*
 * XREFs of ?Inverse@CExpressionValueStack@@QEAAJXZ @ 0x18020D194
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z @ 0x1801AF7C4 (-D2DMatrixInverse@@YAPEAUD2DMatrix@@PEAU1@PEAMPEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Inverse(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // edi
  __int64 v3; // rbx
  const struct D2DMatrix *v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // xmm1_8
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  unsigned int v12; // [rsp+20h] [rbp-29h]
  float v13[4]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v14[4]; // [rsp+40h] [rbp-9h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+80h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 64) == 104 )
    {
      v8 = *(_QWORD *)(v3 + 16);
      *(_OWORD *)&matrix.m11 = *(_OWORD *)v3;
      *(_QWORD *)&matrix.m[2][0] = v8;
      if ( D2D1InvertMatrix(&matrix) )
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        v9 = *(_OWORD *)&matrix.m11;
        *(_DWORD *)(v3 + 64) = 104;
        v10 = *(_QWORD *)&matrix.m[2][0];
        *(_OWORD *)v3 = v9;
        *(_QWORD *)(v3 + 16) = v10;
        return v2;
      }
      v12 = 2140;
    }
    else if ( *(_DWORD *)(v3 + 64) == 265 )
    {
      v4 = (const struct D2DMatrix *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1));
      v13[0] = 0.0;
      D2DMatrixInverse((struct D2DMatrix *)v14, v13, v4);
      if ( v13[0] != 0.0 )
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)v3);
        v5 = v14[1];
        *(_OWORD *)v3 = v14[0];
        *(_DWORD *)(v3 + 64) = 265;
        v6 = v14[2];
        *(_OWORD *)(v3 + 16) = v5;
        v7 = v14[3];
        *(_OWORD *)(v3 + 32) = v6;
        *(_OWORD *)(v3 + 48) = v7;
        return v2;
      }
      v12 = 2164;
    }
    else
    {
      v12 = 2179;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v2;
  }
  v2 = -2147483637;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
    (const char *)0x8000000BLL);
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147483637,
    0x84Bu,
    0LL);
  return v2;
}
