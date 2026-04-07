/*
 * XREFs of ??_G?$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800D6F90
 * Callers:
 *     ??_E?$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@@impl@winrt@@WBA@EAAPEAXI@Z @ 0x1800D6F80 (--_E-$heap_implements@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ??1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800D6DB4 (--1WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 */

winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *__fastcall winrt::impl::heap_implements<winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition>::`scalar deleting destructor'(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *a1,
        char a2)
{
  winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::~WindowJointResizeTransition(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xB8);
  return a1;
}
