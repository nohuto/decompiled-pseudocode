/*
 * XREFs of ?ShowDisconnectingScreen@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@Z @ 0x18066EB60
 * Callers:
 *     ?Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066DD00 (-Execute@SwitchDisconnectedState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV-$shared_.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18002AE28 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?now@clock@winrt@@SA?AV?$time_point@Uclock@winrt@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@chrono@std@@XZ @ 0x1802C16CC (-now@clock@winrt@@SA-AV-$time_point@Uclock@winrt@@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1806505F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout@@@detai.c)
 *     ?Show@?$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransitionScreen@TransitionScreen@CloudDesktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUCpcId@TransitionScreen@CloudDesktop@Shell@Internal@Windows@3@AEBW4ScreenType@567893@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@AEBUhstring@param@3@_K_NAEBW4TransitionScreenOptions@567893@@Z @ 0x180669920 (-Show@-$consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen@UITransit.c)
 *     ?IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18066FB40 (-IsTransitionScreenShown@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU03456@XZ @ 0x18066FBB4 (-RemoteDesktopProviderInfo@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA?AU00CloudDesktop@3456@XZ @ 0x18066FC58 (-TransitionScreen@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEBA-AU0.c)
 *     ?TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBU0TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FCC4 (-TransitionScreenId@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXA.c)
 *     ?TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXW4ScreenType@TransitionScreen@CloudDesktop@3456@@Z @ 0x18066FD3C (-TransitionScreenType@RemoteSessionInformation@implementation@Shell@Internal@Window_ea_18066FD3C.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchDisconnectedState::ShowDisconnectingScreen(
        __int64 a1,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation **a2)
{
  HMONITOR v3; // rdi
  __int64 v4; // r8
  __int64 **v5; // rbx
  __int64 **v6; // rax
  RTL_SRWLOCK *v7; // rdi
  PVOID *v8; // rbx
  __int64 v9; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v10[8]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v12[9]; // [rsp+68h] [rbp+Fh] BYREF
  RTL_SRWLOCK *v13; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+6Fh] BYREF
  int v15; // [rsp+D0h] [rbp+77h] BYREF
  volatile signed __int32 *v16; // [rsp+D8h] [rbp+7Fh] BYREF

  v13 = 0LL;
  v3 = MonitorFromPoint(0LL, 1u);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Disconnect_and_Signout>::GetImpl'::`2'::impl,
    1u,
    v4);
  LODWORD(v13) = 0;
  v5 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreen(*a2, v11);
  winrt::param::hstring::hstring((winrt::param::hstring *)v12, &pvData);
  v9 = 300000000LL;
  LODWORD(v14) = 3;
  v6 = (__int64 **)winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::RemoteDesktopProviderInfo(
                     *a2,
                     v10);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    v6,
    &v16);
  winrt::impl::consume_Windows_Internal_Shell_CloudDesktop_TransitionScreen_ITransitionScreen<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::ITransitionScreen>::Show(
    v5,
    &v15,
    &v16,
    (unsigned int *)&v14,
    &v9,
    v12,
    (__int64)v3,
    1,
    (int *)&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v10);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v11);
  v7 = (RTL_SRWLOCK *)*a2;
  v8 = (PVOID *)winrt::clock::now(&v14);
  wil::AcquireSRWLockExclusive(&v13, v7 + 2);
  v7[5].Ptr = *v8;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v13);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenId(
    *a2,
    (const struct winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreenId *)&v15);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::TransitionScreenType(*a2, 3LL);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::IsTransitionScreenShown(*a2, 1);
}
