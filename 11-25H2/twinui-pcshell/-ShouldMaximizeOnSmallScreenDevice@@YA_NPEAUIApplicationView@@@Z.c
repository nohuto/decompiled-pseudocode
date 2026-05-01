/*
 * XREFs of ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x1804F05A4
 * Callers:
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804F07CC (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062884 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180063FE8 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1801DB9E8 (-FindAll@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??D?$fast_iterator@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@XZ @ 0x1803987A4 (--D-$fast_iterator@U-$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall ShouldMaximizeOnSmallScreenDevice(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v5; // di
  int v6; // r14d
  __int64 (__fastcall **v7)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  struct IApplicationView *v8; // rdx
  __int64 v9; // rax
  int v11; // esi
  int NetworkConnectivityLevel; // r12d
  __int64 (__fastcall *v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  winrt::hstring *v14; // rax
  const unsigned __int16 *v15; // rax
  char v16; // bl
  HWND WindowForView; // rax
  bool v18; // bl
  __int64 *v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-30h] BYREF
  int v24; // [rsp+48h] [rbp-28h]
  _BYTE v25[32]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF
  int v29; // [rsp+C0h] [rbp+50h]
  int (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp+58h] BYREF

  v5 = 0;
  v6 = 0;
  v29 = 0;
  if ( !this )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5B,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      a4);
  v7 = *this;
  v19 = 0LL;
  if ( (int)(*v7)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, (__int64 *)&v19) < 0 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, v8);
    v18 = GetPropW(WindowForView, L"DontMaximizeOnSmallScreen") != HANDLE_FLAG_INHERIT;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    return v18;
  }
  else
  {
    v30 = 0LL;
    v9 = *v19;
    v30 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v9 + 24))(v19, &v30) >= 0 )
    {
      v28 = 0LL;
      if ( (**v30)(v30, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v28) >= 0 )
      {
        v27 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56LL))(v28, &v27) >= 0 )
        {
          if ( v27 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
            return 0;
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
    }
    LODWORD(v28) = 1;
    winrt::param::hstring::hstring((winrt::param::hstring *)v25, L"com.microsoft.windows.dontmaximizeonsmallscreen");
    winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension::FindAll(
      (const struct winrt::param::hstring *)&v21,
      (const enum winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtensionOptions *)v25,
      (__int64)&v28);
    v23 = &v21;
    v11 = 0;
    v24 = 0;
    NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v21);
    while ( v11 != NetworkConnectivityLevel )
    {
      winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>>::operator*(
        (__int64)&v23,
        (winrt *)&v20);
      v27 = 0;
      v13 = (*this)[19];
      v14 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
                                &v20,
                                &v22);
      v6 |= 1u;
      v29 = v6;
      v15 = winrt::hstring::c_str(v14);
      if ( (int)v13((ApplicationViewHelpers *)this, (GUID *)v15, (__int64 *)&v27) < 0 || (v16 = 1, !v27) )
        v16 = 0;
      if ( (v6 & 1) != 0 )
      {
        v6 &= ~1u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
      }
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v20);
      if ( v16 )
        goto LABEL_20;
      v24 = ++v11;
    }
    v5 = 1;
LABEL_20:
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
    return v5;
  }
}
