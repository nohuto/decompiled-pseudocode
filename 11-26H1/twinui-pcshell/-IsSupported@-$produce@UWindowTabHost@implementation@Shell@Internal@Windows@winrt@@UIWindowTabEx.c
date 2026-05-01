/*
 * XREFs of ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18057E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateInstance@?$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x18033552C (-ActivateInstance@-$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@S.c)
 */

void __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::IsSupported()
{
  __int64 v0; // rdx
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManagerT<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::ActivateInstance();
  }
  catch ( ... )
  {
    *(_DWORD *)(v0 + 48) = *winrt::to_hresult(&v1);
  }
}
