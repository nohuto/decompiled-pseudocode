/*
 * XREFs of ??0?$produce@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@@impl@winrt@@QEAA@XZ @ 0x1801BEAE0
 * Callers:
 *     ??0?$producer@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppActivatedEventArgs2@3456@X@impl@winrt@@QEAA@XZ @ 0x1801BEAC8 (--0-$producer@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@UISearchApp.c)
 * Callees:
 *     ??0?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@X@impl@winrt@@QEAA@XZ @ 0x1802D0198 (--0-$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh_ea_1802D0198.c)
 */

_QWORD *winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,void>::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs,winrt::WindowsUdk::UI::Shell::ISearchAppActivatedEventArgs2>::`vftable';
  return result;
}
