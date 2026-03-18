/*
 * XREFs of ?ColorHsl@CExpressionValueStack@@QEAAJXZ @ 0x18020F458
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801A9AD4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     fmodf_0 @ 0x1802B9720 (fmodf_0.c)
 */

__int64 __fastcall CExpressionValueStack::ColorHsl(CExpressionValueStack *this)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  __int64 v4; // rdi
  float v5; // xmm8_4
  float v6; // xmm6_4
  ColorSpaceHelpers *v7; // rcx
  __int128 v8; // xmm0
  float *v10[2]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 >= 3 )
  {
    v3 = v1 - 2;
    v2 = 0;
    *((_DWORD *)this + 24) = v3;
    v4 = *(_QWORD *)this + 72LL * (v3 - 1);
    if ( *(_DWORD *)(v4 + 64) == 18 && *(_DWORD *)(v4 + 136) == 18 && *(_DWORD *)(v4 + 208) == 18 )
    {
      v5 = *(float *)(v4 + 144);
      v6 = *(float *)(v4 + 72);
      *(_OWORD *)v10 = 0LL;
      fmodf_0(*(float *)v4, 6.2831855);
      ColorSpaceHelpers::Color_RGBAfromHSLA(
        v7,
        fmaxf(fminf(v6, 1.0), 0.0),
        fmaxf(fminf(v5, 1.0), 0.0),
        1.0,
        (float *)v10,
        (float *)v10 + 1,
        (float *)&v10[1],
        (float *)&v10[1] + 1);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
      v8 = *(_OWORD *)v10;
      *(_DWORD *)(v4 + 64) = 70;
      *(_OWORD *)v4 = v8;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x108Cu,
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
      0x107Cu,
      0LL);
  }
  return v2;
}
