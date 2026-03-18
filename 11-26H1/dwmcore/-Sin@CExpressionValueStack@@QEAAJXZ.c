/*
 * XREFs of ?Sin@CExpressionValueStack@@QEAAJXZ @ 0x18019F9CC
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sinf_0 @ 0x1802B9774 (sinf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Sin(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  float v6; // xmm0_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v4 = *(_QWORD *)this;
    v5 = (unsigned int)(v1 - 1);
    v2 = 0;
    if ( *(_DWORD *)(*(_QWORD *)this + 72 * v5 + 64) == 18 )
    {
      v6 = *(float *)(v4 + 72 * v5);
      *(_DWORD *)(v4 + 72 * v5 + 64) = 18;
      *(float *)(v4 + 72 * v5) = sinf_0(v6);
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(
        20,
        &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
        1u,
        -2147467259,
        0xC54u,
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
      0xC44u,
      0LL);
  }
  return v2;
}
