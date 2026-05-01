/*
 * XREFs of ?EnsureXamlApplication_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SAXXZ @ 0x18043EC84
 * Callers:
 *     ?EnsureXamlApplication_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHXZ @ 0x18043EC60 (-EnsureXamlApplication_WASDK@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AU1234567@XZ @ 0x180446760 (-Current@XamlApplication_WASDK@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA-AU1234567.c)
 */

void winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::EnsureXamlApplication_WASDK(
        void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK::Current(&v0);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v0);
}
