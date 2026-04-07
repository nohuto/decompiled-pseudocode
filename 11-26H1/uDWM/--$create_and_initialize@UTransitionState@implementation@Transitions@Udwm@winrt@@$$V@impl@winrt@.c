/*
 * XREFs of ??$create_and_initialize@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@impl@winrt@@YAPEAUTransitionState@implementation@Transitions@Udwm@1@XZ @ 0x18002F840
 * Callers:
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18002F80C (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18002F8A4 (--0TransitionState@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

winrt::Udwm::Transitions::implementation::TransitionState *winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::TransitionState,>()
{
  winrt::Udwm::Transitions::implementation::TransitionState *v0; // rax
  winrt::Udwm::Transitions::implementation::TransitionState *v1; // rbx

  v0 = (winrt::Udwm::Transitions::implementation::TransitionState *)operator new(0x80uLL);
  v1 = v0;
  if ( !v0 )
    return 0LL;
  memset_0(v0, 0, 0x80uLL);
  winrt::Udwm::Transitions::implementation::TransitionState::TransitionState(v1);
  *((_QWORD *)v1 + 1) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNativePrivate,void>'};
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable'{for `winrt::impl::producer_convert<winrt::Udwm::Transitions::implementation::TransitionState,ITransitionStateNative,void>'};
  *((_QWORD *)v1 + 3) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vftable';
  return v1;
}
