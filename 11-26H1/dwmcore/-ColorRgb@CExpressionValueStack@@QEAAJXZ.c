/*
 * XREFs of ?ColorRgb@CExpressionValueStack@@QEAAJXZ @ 0x1801B3F5C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ColorRgb(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // edi
  unsigned int v4; // eax
  __int64 v5; // rbx
  float v6; // xmm9_4
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 4 )
  {
    v4 = v1 - 3;
    v2 = 0;
    *((_DWORD *)this + 24) = v4;
    v5 = *(_QWORD *)this + 72LL * (v4 - 1);
    if ( *(_DWORD *)(v5 + 64) == 18
      && *(_DWORD *)(v5 + 136) == 18
      && *(_DWORD *)(v5 + 208) == 18
      && *(_DWORD *)(v5 + 280) == 18 )
    {
      v6 = fmaxf(fminf(*(float *)(v5 + 72), 255.0), 0.0) / 255.0;
      v7 = fmaxf(fminf(*(float *)(v5 + 144), 255.0), 0.0) / 255.0;
      v8 = fmaxf(fminf(*(float *)(v5 + 216), 255.0), 0.0) / 255.0;
      v9 = fmaxf(fminf(*(float *)v5, 255.0), 0.0) / 255.0;
      CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (v4 - 1)));
      *(_DWORD *)(v5 + 64) = 70;
      *(float *)v5 = v6;
      *(float *)(v5 + 4) = v7;
      *(float *)(v5 + 8) = v8;
      *(float *)(v5 + 12) = v9;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x1045u,
        0LL);
    }
  }
  else
  {
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
      0x1033u,
      0LL);
  }
  return v2;
}
