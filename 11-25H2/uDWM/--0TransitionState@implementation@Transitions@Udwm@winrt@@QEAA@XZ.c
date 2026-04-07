/*
 * XREFs of ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x180061874
 * Callers:
 *     ??$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUTransitionState@implementation@Transitions@Udwm@1@XZ @ 0x180061810 (--$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@.c)
 * Callees:
 *     ??$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@@winrt@@YAPEAUITransitionAnimationVisualNative@@PEBU?$producer_convert@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITransitionAnimationVisualNative@@X@impl@0@@Z @ 0x180007758 (--$to_abi@UITransitionAnimationVisualNative@@UTopLevelWindow3DWrapper@implementation@Transitions.c)
 *     ??0?$producers_base@UTransitionState@implementation@Transitions@Udwm@winrt@@V?$tuple@UTransitionState@Transitions@Udwm@winrt@@UITransitionStateNative@@UITransitionStateNativePrivate@@@std@@@impl@winrt@@QEAA@XZ @ 0x180095BF8 (--0-$producers_base@UTransitionState@implementation@Transitions@Udwm@winrt@@V-$tuple@UTransition.c)
 */

__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionState::TransitionState(
        winrt::Udwm::Transitions::implementation::TransitionState *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r9

  winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>::producers_base<winrt::Udwm::Transitions::implementation::TransitionState,std::tuple<winrt::Udwm::Transitions::TransitionState,ITransitionStateNative,ITransitionStateNativePrivate>>(
    this,
    a2,
    a3,
    this);
  _InterlockedIncrement((volatile signed __int32 *)winrt::to_abi<ITransitionAnimationVisualNative,winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper>((__int64)&`winrt::get_module_lock'::`2'::s_lock));
  *(_QWORD *)(v3 + 32) = 1LL;
  *(_QWORD *)v3 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  *(_QWORD *)(v3 + 8) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNativePrivate,void>'};
  *(_QWORD *)(v3 + 24) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_QWORD *)(v3 + 48) = 0LL;
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_BYTE *)(v3 + 120) = 0;
  return v3;
}
