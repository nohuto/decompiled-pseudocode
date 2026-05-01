/*
 * XREFs of ?ActivateInstance@?$DesktopSnapLayoutManagerT@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@U1implementation@34567@UISnapLayoutManagerExtensionStatics@PlatformExtensions@4567@@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@67@XZ @ 0x180335D2C
 * Callers:
 *     ?ActivateInstance@?$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExperiences@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180335D60 (-ActivateInstance@-$produce@UGamingPostureConfiguration@factory_implementation@Posture@GamingExp.c)
 *     ?ActivateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18043EAE0 (-ActivateInstance@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost.c)
 *     ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x18055A4C0 (-IsSupported@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabEx.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DEC34 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_not_implemented@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x180335AF8 (--0hresult_not_implemented@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

void __noreturn winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManagerT<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>::ActivateInstance()
{
  const struct winrt::impl::slim_source_location *v0; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v2[32]; // [rsp+38h] [rbp-20h] BYREF

  v0 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v2);
  winrt::hresult_not_implemented::hresult_not_implemented((winrt::hresult_not_implemented *)pExceptionObject, v0);
  throw (winrt::hresult_not_implemented *)pExceptionObject;
}
