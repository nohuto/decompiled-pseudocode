/*
 * XREFs of ?ColorLerpRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801E38BC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorLerpRgb(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  float v6; // xmm0_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  unsigned int v12; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v3 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    v5 = *(_DWORD *)(v4 + 64);
    if ( *(_DWORD *)(v4 + 208) == 18 && v5 == *(_DWORD *)(v4 + 136) )
    {
      if ( v5 == 70 )
      {
        v6 = fmaxf(0.0, fminf(*(float *)(v4 + 144), 1.0));
        v7 = (float)((float)(*(float *)(v4 + 72) - *(float *)v4) * v6) + *(float *)v4;
        v8 = (float)((float)(*(float *)(v4 + 76) - *(float *)(v4 + 4)) * v6) + *(float *)(v4 + 4);
        v9 = (float)((float)(*(float *)(v4 + 80) - *(float *)(v4 + 8)) * v6) + *(float *)(v4 + 8);
        v10 = (float)((float)(*(float *)(v4 + 84) - *(float *)(v4 + 12)) * v6) + *(float *)(v4 + 12);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        *(_DWORD *)(v4 + 64) = 70;
        *(float *)v4 = v7;
        *(float *)(v4 + 4) = v8;
        *(float *)(v4 + 8) = v9;
        *(float *)(v4 + 12) = v10;
        return v2;
      }
      v12 = 2527;
    }
    else
    {
      v12 = 2496;
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
    0x9AEu,
    0LL);
  return v2;
}
