/*
 * XREFs of ?Asin@CExpressionValueStack@@QEAAJXZ @ 0x180210A08
 * Callers:
 *     ?CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180109990 (-CalculateValueWorkerImpl@CExpression@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     asinf_0 @ 0x1802B96A8 (asinf_0.c)
 */

__int64 __fastcall CExpressionValueStack::Asin(CExpressionValueStack *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  float v4; // xmm6_4
  unsigned int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *((_DWORD *)this + 24);
  if ( v1 )
  {
    v2 = 0;
    v3 = *(_QWORD *)this + 72LL * (unsigned int)(v1 - 1);
    if ( *(_DWORD *)(v3 + 64) == 18 )
    {
      v4 = *(float *)v3;
      if ( *(float *)v3 >= -1.0 && v4 <= 1.0 )
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)(*(_QWORD *)this + 72LL * (unsigned int)(v1 - 1)));
        *(_DWORD *)(v3 + 64) = 18;
        *(float *)v3 = asinf_0(v4);
        return v2;
      }
      v6 = 3202;
    }
    else
    {
      v6 = 3217;
    }
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147467259,
      v6,
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
    0xC70u,
    0LL);
  return v2;
}
