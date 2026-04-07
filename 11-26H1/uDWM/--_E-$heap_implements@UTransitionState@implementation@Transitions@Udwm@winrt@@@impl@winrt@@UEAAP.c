/*
 * XREFs of ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18002E830
 * Callers:
 *     ??_E?$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@EAAPEAXI@Z @ 0x1800D8B70 (--_E-$heap_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@@impl@winrt@@WBI@E.c)
 * Callees:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002E86C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 */

winrt::Udwm::Transitions::implementation::TransitionState *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::TransitionState>::`vector deleting destructor'(
        winrt::Udwm::Transitions::implementation::TransitionState *a1,
        char a2)
{
  winrt::Udwm::Transitions::implementation::TransitionState::~TransitionState(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x80uLL);
  return a1;
}
