/*
 * XREFs of ?Conditional@CExpressionValueStack@@QEAAJPEBUExpressionConditionalNode@@PEA_N@Z @ 0x180108A9C
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Conditional(
        CExpressionValueStack *this,
        const struct ExpressionConditionalNode *a2,
        bool *a3)
{
  int v3; // eax
  unsigned int v5; // ebx
  __int64 v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_DWORD *)this + 24);
  if ( v3 )
  {
    v6 = (unsigned int)(v3 - 1);
    v5 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 72 * v6 + 64) == 17 )
    {
      *a3 = *(_BYTE *)(*(_QWORD *)this + 72 * v6);
      *((_DWORD *)this + 24) = v6;
    }
    else
    {
      v5 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0x195Au,
        0LL);
    }
  }
  else
  {
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
      0x1949u,
      0LL);
  }
  return v5;
}
