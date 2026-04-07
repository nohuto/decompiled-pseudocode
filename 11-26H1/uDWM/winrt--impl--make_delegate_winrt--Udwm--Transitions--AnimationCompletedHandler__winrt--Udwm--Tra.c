/*
 * XREFs of winrt::impl::make_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___ @ 0x1800860A8
 * Callers:
 *     winrt::Udwm::Transitions::AnimationCompletedHandler::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___ @ 0x180085AB8 (winrt--Udwm--Transitions--AnimationCompletedHandler--AnimationCompletedHandler__winrt--Udwm--Tra.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x1800056CC (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180086164 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__winrt::Udwm::Transitions::Private::implementation::WindowMoveResizeCrossfadeTransition::PostTransition_::_5_::_lambda_1___(
        _QWORD *a1,
        __int64 *a2)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // r9

  v4 = (char *)operator new(0x18uLL);
  if ( v4 )
  {
    winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v4 + 8));
    v5 = *a2;
    *a2 = 0LL;
    *(_QWORD *)(v6 + 16) = v5;
    _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
    *v7 = off_1800ED500;
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7;
  return a1;
}
