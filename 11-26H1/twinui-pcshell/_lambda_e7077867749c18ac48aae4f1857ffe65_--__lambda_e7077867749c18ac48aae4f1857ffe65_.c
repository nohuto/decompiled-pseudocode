/*
 * XREFs of _lambda_e7077867749c18ac48aae4f1857ffe65_::__lambda_e7077867749c18ac48aae4f1857ffe65_ @ 0x1803ADDD8
 * Callers:
 *     ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18023BD0C (-ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@U.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65___::_CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65___ @ 0x1803ADF84 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e7077867749c18ac48aae4f1857ffe65___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void __fastcall lambda_e7077867749c18ac48aae4f1857ffe65_::__lambda_e7077867749c18ac48aae4f1857ffe65_(__int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 8));
}
