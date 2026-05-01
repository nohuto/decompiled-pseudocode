/*
 * XREFs of ?DisableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@00@Z @ 0x18063FC18
 * Callers:
 *     ?DisableCloudPC@?$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemProviderExtension@RemoteSystems@3456@@impl@winrt@@UEAAHPEAX00@Z @ 0x18063FBD0 (-DisableCloudPC@-$produce@UCloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UIRemot.c)
 *     ?EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@000@Z @ 0x18063FDF0 (-EnableCloudPC@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028BFAC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@0@Z @ 0x18029CB34 (--Hwinrt@@YA-AUhstring@0@AEBU10@0@Z.c)
 *     ??Hwinrt@@YA?AUhstring@0@AEBU10@PEBG@Z @ 0x1802A7974 (--Hwinrt@@YA-AUhstring@0@AEBU10@PEBG@Z.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802D7924 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180499CBC (--1-$test_watcher@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstring@6@AEBU76@AEAY00$$CBG@impl@winrt@@YAPEAURegistrationData@implementation@Shell@Internal@Windows@1@AEBUhstring@1@0AEAY00$$CBG@Z @ 0x18063C8DC (--$create_and_initialize@URegistrationData@implementation@Shell@Internal@Windows@winrt@@AEBUhstr.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643538 (-start@-$tip_test@V-$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_G.c)
 *     ?DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18065A3E0 (-DeactivateDisabledRemoteDesktop@RemoteSessionWindowManager@implementation@Shell@Internal@Window.c)
 *     ?UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEBURegistrationData@3456@AEB_N@Z @ 0x180660F20 (-UpdateRegistrationData@RemoteSystemProvider@implementation@Shell@Internal@Windows@winrt@@SAXAEB.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall winrt::Windows::Internal::Shell::implementation::CloudPCComponent::DisableCloudPC(
        winrt::Windows::Internal::Shell::implementation::CloudPCComponent *this,
        const struct winrt::hstring *a2,
        const struct winrt::hstring *a3,
        const struct winrt::hstring *a4)
{
  __int64 v8; // r14
  volatile signed __int32 *v9; // rax
  __int64 *v10; // rax
  winrt::hstring *v11; // rax
  const WCHAR *v12; // rax
  int v13; // eax
  volatile signed __int32 *v14; // rax
  volatile signed __int32 *v15[2]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v16[24]; // [rsp+30h] [rbp-50h] BYREF
  void **v17; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v18[40]; // [rsp+50h] [rbp-30h] BYREF
  volatile signed __int32 *v19; // [rsp+78h] [rbp-8h]
  volatile signed __int32 *v20; // [rsp+B0h] [rbp+30h] BYREF
  volatile signed __int32 *v21; // [rsp+C0h] [rbp+40h] BYREF
  volatile signed __int32 *v22; // [rsp+C8h] [rbp+48h] BYREF

  v20 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_DisableCloudPCTipTest,_tip_DisableCloudPCTipTest>>::start(&v20, v15);
  v17 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v18,
    (struct wil::details::IFailureCallback *)&v17,
    0LL,
    1);
  v19 = v20;
  if ( v20 )
    _InterlockedIncrement(v20 + 68);
  wil::com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_EnableCloudPCTipTest,_tip_EnableCloudPCTipTest>,wil::err_returncode_policy>((void **)&v20);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DeactivateDisabledRemoteDesktop(
    (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((*((_QWORD *)this + 13) - 16LL) & -(__int64)(*((_QWORD *)this + 13) != 0LL)),
    a4);
  v8 = winrt::impl::slim_source_location::current((__int64)v16);
  v9 = winrt::operator+((volatile signed __int32 *)v15, (__int64 *)a2, (__int64 *)a3);
  v10 = (__int64 *)winrt::operator+((volatile signed __int32 *)&v22, (__int64)v9, (__int64)L"\\");
  v11 = (winrt::hstring *)winrt::operator+((volatile signed __int32 *)&v21, v10, (__int64 *)a4);
  v12 = winrt::hstring::c_str(v11);
  v13 = RegDeleteKeyW(HKEY_CURRENT_USER, v12);
  if ( v13 > 0 )
    v13 = (unsigned __int16)v13 | 0x80070000;
  winrt::check_hresult((int *)&v20, v13, v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v15);
  LOBYTE(v20) = 0;
  v14 = winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::implementation::RegistrationData,winrt::hstring const &,winrt::hstring const &,unsigned short const (&)[1]>(
          a4,
          a3,
          (unsigned __int16 *)&pvData);
  v21 = (volatile signed __int32 *)((unsigned __int64)(v14 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)v14 >> 64));
  winrt::Windows::Internal::Shell::implementation::RemoteSystemProvider::UpdateRegistrationData(
    (const struct winrt::Windows::Internal::Shell::RegistrationData *)&v21,
    (const bool *)&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  tip2::details::shared_data<1,0,0>::complete_without_lock((__int64)(v19 + 2));
  tip2::test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>::~test_watcher<tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>>((__int64)&v17);
}
