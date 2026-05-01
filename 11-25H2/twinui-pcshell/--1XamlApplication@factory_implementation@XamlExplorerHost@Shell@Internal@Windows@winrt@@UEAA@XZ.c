/*
 * XREFs of ??1XamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18043E888
 * Callers:
 *     ??_G?$heap_implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAPEAXI@Z @ 0x18043EA60 (--_G-$heap_implements@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Wi.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication::~XamlApplication(
        winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication *)((char *)this + 40));
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>::~root_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher>((__int64)this);
}
