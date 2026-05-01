/*
 * XREFs of ?ActivateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18043EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ActivateInstance@?$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x180335D2C (-ActivateInstance@-$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@S.c)
 */

void __fastcall __noreturn winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IActivationFactory>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rdx
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF

  *a2 = 0LL;
  try
  {
    winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManagerT<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::ActivateInstance();
  }
  catch ( ... )
  {
    v2 = &v3;
    *((_DWORD *)v2 + 12) = *winrt::to_hresult((_DWORD *)v2 + 12);
  }
}
