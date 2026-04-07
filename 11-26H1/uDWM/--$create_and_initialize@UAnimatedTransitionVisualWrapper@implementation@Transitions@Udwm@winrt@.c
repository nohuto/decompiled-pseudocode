/*
 * XREFs of ??$create_and_initialize@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@impl@winrt@@YAPEAUAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@1@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180085B84
 * Callers:
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180085B4C (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 * Callees:
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x18002F98C (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::impl::create_and_initialize<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
        struct CTopLevelWindow3D **a1)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v2; // rax
  __int64 v3; // r8
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v4; // rbx

  v2 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)operator new(0x40uLL);
  v4 = v2;
  if ( !v2 )
    return 0LL;
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(
    v2,
    *a1,
    v3);
  *(_QWORD *)v4 = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>>'};
  *((_QWORD *)v4 + 2) = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>'};
  *((_QWORD *)v4 + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  return v4;
}
