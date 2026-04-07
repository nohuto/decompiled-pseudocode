/*
 * XREFs of ??_G?$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18003FF34
 * Callers:
 *     ??_E?$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800D0C00 (--_E-$heap_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@@i.c)
 * Callees:
 *     ??1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x180040048 (--1AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::~AnimatedTransitionVisualWrapper(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x40uLL);
  return a1;
}
