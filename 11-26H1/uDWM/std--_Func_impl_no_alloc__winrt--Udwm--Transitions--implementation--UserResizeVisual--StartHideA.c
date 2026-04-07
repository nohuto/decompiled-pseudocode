/*
 * XREFs of std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1__void_::_Delete_this @ 0x1800D8610
 * Callers:
 *     <none>
 * Callees:
 *     _winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_ @ 0x18002FE78 (_winrt--Udwm--Transitions--implementation--UserResizeVisual--StartHideAnimation_--_2_--_lambda_1.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation_::_2_::_lambda_1_::__lambda_1_(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
