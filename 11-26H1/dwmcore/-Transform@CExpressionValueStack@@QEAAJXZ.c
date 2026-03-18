/*
 * XREFs of ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x18020C2E0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1801A2C48 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CExpressionValueStack::Transform(CExpressionValueStack *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int128 v8; // xmm0
  float v9; // xmm6_4
  float v10; // xmm7_4
  unsigned int v12; // [rsp+20h] [rbp-58h]
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = *((_DWORD *)this + 24);
  if ( v4 >= 2 )
  {
    v6 = v4 - 1;
    v5 = 0;
    *((_DWORD *)this + 24) = v6;
    v7 = *(_QWORD *)this + 72LL * (v6 - 1);
    if ( *(_DWORD *)(v7 + 64) == 35 )
    {
      if ( *(_DWORD *)(v7 + 136) == 104 )
      {
        v9 = (float)((float)(*(float *)(v7 + 4) * *(float *)(v7 + 80)) + (float)(*(float *)v7 * *(float *)(v7 + 72)))
           + *(float *)(v7 + 88);
        v10 = (float)((float)(*(float *)(v7 + 4) * *(float *)(v7 + 84)) + (float)(*(float *)v7 * *(float *)(v7 + 76)))
            + *(float *)(v7 + 92);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
        *(float *)v7 = v9;
        *(float *)(v7 + 4) = v10;
        *(_DWORD *)(v7 + 64) = 35;
        return v5;
      }
      v12 = 2082;
    }
    else
    {
      if ( *(_DWORD *)(v7 + 64) != 69 )
        return v5;
      if ( *(_DWORD *)(v7 + 136) == 265 )
      {
        v13 = 0LL;
        D3DXVec4TransformArray(
          (struct D2DVector4 *)&v13,
          9LL * (v6 - 1),
          (const struct D2DVector4 *)v7,
          a4,
          (const struct D2DMatrix *)(v7 + 72));
        CExpressionValue::DestroyCurrent((CExpressionValue *)v7);
        v8 = v13;
        *(_DWORD *)(v7 + 64) = 69;
        *(_OWORD *)v7 = v8;
        return v5;
      }
      v12 = 2052;
    }
    v5 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v12,
      0LL);
    return v5;
  }
  v5 = -2147483637;
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
    0x7F1u,
    0LL);
  return v5;
}
