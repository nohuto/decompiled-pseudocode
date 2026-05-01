/*
 * XREFs of _lambda_78435879237a5598503e840a3e952968_::__lambda_78435879237a5598503e840a3e952968_ @ 0x1803A4AB4
 * Callers:
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x1802488B0 (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_78435879237a5598503e840a3e952968___::_CTaskWrapper__lambda_78435879237a5598503e840a3e952968___ @ 0x1803A4C04 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_78435879237a5598503e840a3e952968___--_CTask.c)
 *     _UndockedSearchAppExperienceManager::Activate_::_1_::dtor$6 @ 0x1806BFF33 (_UndockedSearchAppExperienceManager--Activate_--_1_--dtor$6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_78435879237a5598503e840a3e952968_::__lambda_78435879237a5598503e840a3e952968_(
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 45);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch *)((char *)this + 344));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 41);
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivateSearch::~UndockedSearchAppExperienceManager_ActivateSearch(this);
}
