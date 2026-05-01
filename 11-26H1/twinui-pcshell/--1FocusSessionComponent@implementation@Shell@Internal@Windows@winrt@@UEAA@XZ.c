/*
 * XREFs of ??1FocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1801F3B50
 * Callers:
 *     ??1?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@UEAA@XZ @ 0x1801F3AF0 (--1-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@d.c)
 *     ??_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1802D8C20 (--_EFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent___::heap_implements_wil::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::FocusSessionComponent____::_1_::dtor$1 @ 0x1806D831A (_winrt--impl--heap_implements_wil--details--module_count_wrapper_winrt--Windows--In_ea_1806D831A.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::~FocusSessionComponent(
        winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::implementation::FocusSessionComponent *)((char *)this + 96));
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
