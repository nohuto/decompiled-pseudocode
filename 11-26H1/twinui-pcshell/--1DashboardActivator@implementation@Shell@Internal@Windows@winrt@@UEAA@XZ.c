/*
 * XREFs of ??1DashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1800E5AB0
 * Callers:
 *     ??1?$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1800E5A64 (--1-$module_count_wrapper@UDashboardActivator@implementation@Shell@Internal@Windows@winrt@@@deta.c)
 *     ??_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805CE098 (--_EDashboardActivator@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardActivator___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::DashboardActivator____::_1_::dtor$1 @ 0x1806D8645 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1806D8645.c)
 * Callees:
 *     ?DashboardActivatorDestroyed@DashboardManagerTelemetry@@SAXXZ @ 0x1802C6584 (-DashboardActivatorDestroyed@DashboardManagerTelemetry@@SAXXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardActivator::~DashboardActivator(
        winrt::Windows::Internal::Shell::implementation::DashboardActivator *this)
{
  char *v1; // rbx

  *(_QWORD *)this = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardActivator>::`vftable'{for `winrt::impl::producers_base<winrt::Windows::Internal::Shell::implementation::DashboardActivator,std::tuple<winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>>'};
  v1 = (char *)this + 16;
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::Shell::implementation::DashboardActivator::`vftable'{for `winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::DashboardActivator,winrt::Windows::Internal::Shell::DashboardActivator,IClassFactory>'};
  DashboardManagerTelemetry::DashboardActivatorDestroyed();
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)v1);
}
