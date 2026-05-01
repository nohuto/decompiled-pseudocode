/*
 * XREFs of ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x180511BB4
 * Callers:
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180511E08 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801DAEA0 (-FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x1803A0DE8 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall ShouldMaximizeOnSmallScreenDevice(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  int v6; // esi
  __int64 (__fastcall **v7)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v8; // rdx
  __int64 v9; // rax
  int v11; // r15d
  int v12; // eax
  __int64 (__fastcall *v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  winrt::hstring *v14; // rax
  const unsigned __int16 *v15; // rax
  char v16; // bl
  HWND WindowForView; // rax
  bool v18; // bl
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-49h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-41h] BYREF
  __int64 *v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 *v24; // [rsp+48h] [rbp-21h] BYREF
  int v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+58h] [rbp-11h] BYREF
  __int128 v27; // [rsp+60h] [rbp-9h]
  _BYTE v28[80]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+6Fh] BYREF
  int v32; // [rsp+E0h] [rbp+77h] BYREF
  int v33; // [rsp+E8h] [rbp+7Fh]

  v5 = 0;
  v6 = 0;
  v33 = 0;
  if ( !this )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      a4);
  v7 = *this;
  v20 = 0LL;
  if ( (int)(*v7)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, (__int64 *)&v20) < 0 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, v8);
    v18 = GetPropW(WindowForView, L"DontMaximizeOnSmallScreen") != HANDLE_FLAG_INHERIT;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    return v18;
  }
  else
  {
    v19 = 0LL;
    v9 = *v20;
    v19 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 24))(v20, &v19) >= 0 )
    {
      v31 = 0LL;
      if ( (**v19)(v19, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v31) >= 0 )
      {
        v30 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 56LL))(v31, &v30) >= 0 )
        {
          if ( v30 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
            return 0;
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
    }
    v32 = 33;
    winrt::param::hstring::hstring((winrt::param::hstring *)v28, L"com.microsoft.windows.dontmaximizeonsmallscreen");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
      (const struct winrt::param::hstring *)&v22,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v28,
      (__int64)&v32);
    v24 = &v22;
    v11 = 0;
    v25 = 0;
    v30 = 0;
    v26 = 0;
    v27 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v30);
    winrt::check_hresult((int *)&v31, v12, (__int64)&v26);
    while ( v11 != v30 )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
        (__int64)&v24,
        (winrt *)&v21);
      LODWORD(v31) = 0;
      v13 = (*this)[19];
      v14 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                &v21,
                                &v23);
      v6 |= 1u;
      v33 = v6;
      v15 = winrt::hstring::c_str(v14);
      if ( (int)v13((ApplicationViewHelpers *)this, (GUID *)v15, &v31) < 0 || (v16 = 1, !(_DWORD)v31) )
        v16 = 0;
      if ( (v6 & 1) != 0 )
      {
        v6 &= ~1u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
      if ( v16 )
        goto LABEL_19;
      v25 = ++v11;
    }
    v5 = 1;
LABEL_19:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
    return v5;
  }
}
