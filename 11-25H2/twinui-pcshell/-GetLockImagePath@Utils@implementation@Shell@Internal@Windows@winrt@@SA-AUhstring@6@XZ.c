/*
 * XREFs of ?GetLockImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x1806431BC
 * Callers:
 *     ?GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA?AUhstring@6@XZ @ 0x180642EC0 (-GetBackgroundImagePath@BootConnectionHandler@implementation@Shell@Internal@Windows@winrt@@MEBA-.c)
 *     ?Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180644180 (-Execute@BootConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_ptr@.c)
 *     ?ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x180644868 (-ShowPhysicalDeviceAccessTransitionScreen@BootPhysicalDeviceAccessState@implementation@Shell@Int.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$call@P6A?AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@?$factory_cache_entry@ULockScreen@UserProfile@System@Windows@winrt@@UILockScreenStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUUri@Foundation@Windows@2@AEBUILockScreenStatics@UserProfile@System@52@@Z@Z @ 0x180642494 (--$call@P6A-AUUri@Foundation@Windows@winrt@@AEBUILockScreenStatics@UserProfile@System@34@@Z@-$fa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **__fastcall winrt::Windows::Internal::Shell::implementation::Utils::GetLockImagePath(
        const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall **a1)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *a1, __int64 **a2)))(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *a1, __int64 **a2)
{
  int v2; // eax
  int v3; // eax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h]
  const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *(__fastcall *v9)(const struct winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataModelStatics *, __int64 **); // [rsp+78h] [rbp+20h] BYREF
  int v10; // [rsp+80h] [rbp+28h] BYREF
  int v11; // [rsp+88h] [rbp+30h] BYREF

  _InterlockedIncrement64(&qword_18089D5B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics> )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>
                                                       + 48LL))(
           winrt::impl::factory_cache_entry_v<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>,
           &v6);
    winrt::check_hresult(&v10, v2, (__int64)&v7);
    v5 = v6;
    _InterlockedDecrement64(&qword_18089D5B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089D5B8);
    v9 = _lambda_ca8bd2610b0f0373fab456524c49e747_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::System::UserProfile::LockScreen,winrt::Windows::System::UserProfile::ILockScreenStatics>::call<winrt::Windows::Foundation::Uri (*)(winrt::Windows::System::UserProfile::ILockScreenStatics const &)>(
      0LL,
      (__int64)&v5,
      (void (__fastcall **)(__int64, __int64 *))&v9);
  }
  v9 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, &v9);
  winrt::check_hresult(&v11, v3, (__int64)&v7);
  *a1 = v9;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v5);
  return a1;
}
