/*
 * XREFs of ??_EScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800D5720
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D56A8 (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *__fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::`vector deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::~ScreenRotationTransition(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
