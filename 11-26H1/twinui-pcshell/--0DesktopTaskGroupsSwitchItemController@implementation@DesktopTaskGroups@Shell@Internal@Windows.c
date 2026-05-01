/*
 * XREFs of ??0DesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18029E89C
 * Callers:
 *     ??$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x18029E834 (--$make@UDesktopTaskGroupsSwitchItemController@implementation@DesktopTaskGroups@Shell@Internal@W.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x180208D68 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *__fastcall winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController::DesktopTaskGroupsSwitchItemController(
        winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // r14
  __int64 *v4; // r15
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, __int64 *); // rdi
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  void (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, SID *, GUID *, __int64 *); // rdi
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, __int64 *, GUID *); // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h]
  winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController *v20; // [rsp+60h] [rbp-20h]
  GUID v21; // [rsp+68h] [rbp-18h] BYREF

  v20 = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Internal::Shell::TaskGroups::IPlatformTaskGroupsSwitchItemController>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  v2 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  v3 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v4 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v21 = CLSID_ImmersiveShell;
  winrt::create_instance<IServiceProvider>((__int64)&v17, (int)&v21);
  v18 = 0;
  v19 = 0LL;
  v5 = v17;
  v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v17 + 24LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v2);
  v7 = v6(v5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v2);
  winrt::check_hresult(&v15, v7, &v18);
  v16 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 (__fastcall ****)(_QWORD, __int64 *, GUID *)))(*(_QWORD *)v5 + 24LL))(
         v5,
         &GUID_716be2a0_d1cd_4fdb_9528_785c2866c6a5,
         &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
         &v16);
  winrt::check_hresult(&v15, v8, &v18);
  if ( v16 )
  {
    *(_QWORD *)&v21.Data1 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v9 = (**v16)(
           v16,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::DesktopTaskGroups::ITaskGroupsComponent>,
           &v21);
    winrt::check_hresult(&v15, v9, &v18);
    v15 = *(_QWORD *)&v21.Data1;
  }
  else
  {
    v15 = 0LL;
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 6, &v15);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v15);
  v10 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v11 = *v3;
  *v3 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v10(v5, &SID_VirtualDesktopManager, &GUID_4970ba3d_fd4e_4647_bea3_d89076ef4b9c, v3);
  v12 = *(void (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
  v13 = *v4;
  *v4 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v12(v5, &SID_VirtualDesktopPinnedApps, &GUID_4ce81583_1e4c_4632_a621_07a53543148f, v4);
  if ( v16 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v16);
  if ( v5 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
  return this;
}
