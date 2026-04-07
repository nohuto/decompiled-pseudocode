/*
 * XREFs of winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___ @ 0x1800D6D50
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::Release @ 0x1800D75C0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__winrt--U_ea_1800D75C0.c)
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x18002FBE8 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___::_implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1___(
        __int64 a1)
{
  winrt::impl::atomic_ref_count::operator--((__int64)&`winrt::get_module_lock'::`2'::s_lock);
  return winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PostTransition_::_9_::_lambda_1_::__lambda_1_((__int64 *)(a1 + 16));
}
