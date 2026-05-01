/*
 * XREFs of _lambda_6bf0006fd05f45de9a9646c33bcd493f_::__lambda_6bf0006fd05f45de9a9646c33bcd493f_ @ 0x1803ADD54
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18023B0F4 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___::_CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___ @ 0x1803ADEBC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6bf0006fd05f45de9a9646c33bcd493f___--_CTask.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$6 @ 0x1806E7E0E (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_6bf0006fd05f45de9a9646c33bcd493f_::__lambda_6bf0006fd05f45de9a9646c33bcd493f_(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 344));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 41);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(this);
}
