/*
 * XREFs of ?Ceil@CExpressionValueStack@@QEAAJXZ @ 0x1801D3FE0
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Ceil(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rdi
  float v5; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v4 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v4 + 64) == 18 )
    {
      v5 = ceilf_0(*(float *)v4);
      CExpressionValue::DestroyCurrent((CExpressionValue *)v4);
      *(float *)v4 = v5;
      *(_DWORD *)(v4 + 64) = 18;
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0xD99u,
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
      0xD86u,
      0LL);
  }
  return v2;
}
