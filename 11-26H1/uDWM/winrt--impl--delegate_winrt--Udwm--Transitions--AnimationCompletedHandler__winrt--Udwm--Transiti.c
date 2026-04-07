/*
 * XREFs of winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___::Invoke @ 0x1800D6000
 * Callers:
 *     <none>
 * Callees:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator() @ 0x180087744 (_winrt--Udwm--Transitions--Private--implementation--WindowMoveResizeCrossfadeTransition--PostTra.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___::Invoke(
        __int64 a1,
        struct IUnknown *a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition **v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition **)(a1 + 16);
  try
  {
    winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1_::operator()(
      v2,
      a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
