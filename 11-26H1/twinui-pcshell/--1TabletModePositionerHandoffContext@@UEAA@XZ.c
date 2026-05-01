/*
 * XREFs of ??1TabletModePositionerHandoffContext@@UEAA@XZ @ 0x1802E82CC
 * Callers:
 *     ??_GCMonitorNotificationHelper@@UEAAPEAXI@Z @ 0x1802E8370 (--_GCMonitorNotificationHelper@@UEAAPEAXI@Z.c)
 *     ??_G?$DelegateInvokeHelper@U?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@V_lambda_e70cde33cb0c7d1a2119e2b787893688_@@$0?0PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@6783@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@EAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@3@PEAUIViewEventArgs@5673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803AFC20 (--_G-$DelegateInvokeHelper@U-$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 *     ??_E?$CTaskWrapper@V_lambda_600c533afc652c9fe48d9053db75c639_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180459A40 (--_E-$CTaskWrapper@V_lambda_600c533afc652c9fe48d9053db75c639_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ??_GCAppLayoutItemEnum@@UEAAPEAXI@Z @ 0x1806C5C40 (--_GCAppLayoutItemEnum@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall TabletModePositionerHandoffContext::~TabletModePositionerHandoffContext(
        TabletModePositionerHandoffContext *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
