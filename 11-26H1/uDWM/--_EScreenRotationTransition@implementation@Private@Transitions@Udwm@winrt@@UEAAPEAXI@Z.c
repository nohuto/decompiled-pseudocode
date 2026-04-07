/*
 * XREFs of ??_EScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAPEAXI@Z @ 0x1800D2A60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D29EC (--1ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *__fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::`vector deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition *this,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition::~ScreenRotationTransition(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x78);
  return this;
}
