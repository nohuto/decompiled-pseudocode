/*
 * XREFs of ??0?$producers_base@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@V?$tuple@UScreenRotationTransition@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@2345@@std@@@impl@winrt@@QEAA@XZ @ 0x180086254
 * Callers:
 *     ??0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ @ 0x1800861CC (--0ScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??0?$producer_convert@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@UIScreenRotationTransition@3456@X@impl@winrt@@QEAA@XZ @ 0x180086278 (--0-$producer_convert@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U.c)
 *     ??0?$producer_convert@UScreenRotationTransition@implementation@Private@Transitions@Udwm@winrt@@U13456@X@impl@winrt@@QEAA@XZ @ 0x1800862A8 (--0-$producer_convert@UScreenRotationTransition@implementation@Private@Transitions@_ea_1800862A8.c)
 */

__int64 __fastcall winrt::impl::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>::producers_base<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,std::tuple<winrt::Udwm::Transitions::Private::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  winrt::impl::producer_convert<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::ScreenRotationTransition,void>::producer_convert<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::ScreenRotationTransition,void>(
    a1,
    a2,
    a1);
  winrt::impl::producer_convert<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition,void>::producer_convert<winrt::Udwm::Transitions::Private::implementation::ScreenRotationTransition,winrt::Udwm::Transitions::Private::IScreenRotationTransition,void>(v2 + 8);
  return v3;
}
