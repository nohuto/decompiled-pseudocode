/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008F75C
 * Callers:
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x180056F80 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180092E50 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x180164B1C (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x1801B1EB8 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 *     ?InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ @ 0x18022407C (-InitializeHolographicContextIdentifier@XamlLauncher@@AEAAJXZ.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18034A8A8 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, a2);
}
