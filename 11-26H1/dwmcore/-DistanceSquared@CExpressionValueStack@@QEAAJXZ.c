/*
 * XREFs of ?DistanceSquared@CExpressionValueStack@@QEAAJXZ @ 0x18020C668
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::DistanceSquared(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v3; // eax
  __int64 v4; // rbx
  int v5; // eax
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm9_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm6_4
  float v14; // xmm9_4
  float v15; // xmm9_4
  float v16; // xmm9_4
  unsigned int v18; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 2 )
  {
    v3 = v1 - 1;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    v5 = *(_DWORD *)(v4 + 64);
    if ( v5 != *(_DWORD *)(v4 + 136) )
    {
      v18 = 2827;
LABEL_5:
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        v18,
        0LL);
      return v2;
    }
    switch ( v5 )
    {
      case 18:
        v16 = *(float *)v4 - *(float *)(v4 + 72);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        v10 = v16 * v16;
        goto LABEL_17;
      case 35:
        v13 = *(float *)v4 - *(float *)(v4 + 72);
        v15 = *(float *)(v4 + 4) - *(float *)(v4 + 76);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        v14 = v15 * v15;
        break;
      case 52:
        v11 = *(float *)v4 - *(float *)(v4 + 72);
        v12 = *(float *)(v4 + 4) - *(float *)(v4 + 76);
        v13 = *(float *)(v4 + 8) - *(float *)(v4 + 80);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        v14 = (float)(v12 * v12) + (float)(v11 * v11);
        break;
      case 69:
        v6 = *(float *)v4 - *(float *)(v4 + 72);
        v7 = *(float *)(v4 + 4) - *(float *)(v4 + 76);
        v8 = *(float *)(v4 + 8) - *(float *)(v4 + 80);
        v9 = *(float *)(v4 + 12) - *(float *)(v4 + 84);
        CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
        v10 = (float)((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8)) + (float)(v9 * v9);
LABEL_17:
        *(_DWORD *)(v4 + 64) = 18;
        *(float *)v4 = v10;
        return v2;
      default:
        v18 = 2887;
        goto LABEL_5;
    }
    v10 = v14 + (float)(v13 * v13);
    goto LABEL_17;
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
    0xAFCu,
    0LL);
  return v2;
}
