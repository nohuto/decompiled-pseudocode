/*
 * XREFs of ?EnsureAvailablePushSpace@CExpressionValueStack@@AEAAXXZ @ 0x1802882B8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CExpressionValueStack::EnsureAvailablePushSpace(
        CExpressionValueStack *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)~*((_DWORD *)this + 24) < 5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x44,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
      a4);
  detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
    (__int64)this,
    (unsigned int)(*((_DWORD *)this + 24) + 5));
}
