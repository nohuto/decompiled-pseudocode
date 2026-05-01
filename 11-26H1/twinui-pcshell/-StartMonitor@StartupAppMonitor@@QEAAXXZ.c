/*
 * XREFs of ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F91FC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__&_::Run @ 0x1802BA2F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__-_--Run.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800F7C3C (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??4?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F9114 (--4-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watche.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x1800F978C (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800FA810 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1800FA810.c)
 *     ??$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAW4StartupAppLocation@@AEAV34@@std@@YA?AV?$shared_ptr@VStartupRegKeyNotification@@@0@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAW4StartupAppLocation@@1@Z @ 0x18013D444 (--$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?Release@registry_watcher_state@details@wil@@QEAAXXZ @ 0x1801C817C (-Release@registry_watcher_state@details@wil@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801C9BF0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x180232938 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0AEAUREGKEYINFO@@@?$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z @ 0x1802B09F8 (--$-0AEAUREGKEYINFO@@@-$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_f9d92d283d219251b39b1fca3d115af1__void_ @ 0x1802C0518 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(enum_wil--Reg.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     wistd::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::function_void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)___lambda_d30d699a9b0100ad99955a9d234ed237__void_ @ 0x1805838FC (wistd--function_void___cdecl(enum_wil--FolderChangeEvent_unsigned_short_const__)_--function_void.c)
 *     ??$make_shared@VStartupFolderNotification@@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VStartupFolderNotification@@@0@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x180583C20 (--$make_shared@VStartupFolderNotification@@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AE.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180583F04 (--1-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@.c)
 *     ?make_folder_change_reader@wil@@YA?AV?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@1@PEBG_NW4FolderChangeEvents@1@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18058531C (-make_folder_change_reader@wil@@YA-AV-$unique_any_t@V-$folder_change_reader_t@V-$unique_storage@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180585378 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupAppMonitor::StartMonitor(StartupAppMonitor *this)
{
  int v2; // esi
  HKEY *v3; // rax
  bool v4; // r12
  char *v5; // r14
  char *v6; // rax
  void *v7; // rax
  __int64 v8; // rbx
  int v9; // esi
  _QWORD *v10; // r12
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  _QWORD *v15; // r15
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx
  _QWORD *i; // rbx
  __int64 *v21; // rax
  StartupNotification **v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rdx
  std::_Ref_count_base *v25; // rcx
  int v26; // r8d
  int v27; // r9d
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // r14
  HKEY *v31; // rax
  unsigned int Key; // eax
  unsigned int v33; // eax
  char *v34; // rax
  const char *v35; // r9
  PHKEY phkResult; // [rsp+20h] [rbp-158h]
  unsigned int phkResulta; // [rsp+20h] [rbp-158h]
  bool v38; // [rsp+50h] [rbp-128h]
  BYTE Data[12]; // [rsp+54h] [rbp-124h] BYREF
  HKEY hKey[2]; // [rsp+60h] [rbp-118h] BYREF
  char *v41; // [rsp+70h] [rbp-108h] BYREF
  HKEY v42; // [rsp+78h] [rbp-100h] BYREF
  __int64 v43; // [rsp+80h] [rbp-F8h] BYREF
  std::_Ref_count_base *v44; // [rsp+88h] [rbp-F0h]
  _QWORD v45[2]; // [rsp+90h] [rbp-E8h] BYREF
  char v46; // [rsp+A0h] [rbp-D8h] BYREF
  std::_Ref_count_base *v47; // [rsp+A8h] [rbp-D0h]
  _QWORD v48[3]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-B0h]
  _BYTE v50[112]; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+140h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  v2 = 0;
  _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
    &StartupAppMonitor::s_showNotificationMapUpdateEvent,
    0LL,
    0LL);
  v42 = 0LL;
  v3 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&v42);
  *(_DWORD *)Data = RegOpenKeyExW(
                      HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
                      0,
                      0x20019u,
                      v3);
  v4 = *(_DWORD *)Data != 2;
  v38 = *(_DWORD *)Data != 2;
  v5 = (char *)this + 184;
  v6 = (char *)this + 496;
  v41 = (char *)this + 496;
  try
  {
    while ( v5 != v6 )
    {
      v7 = operator new(0x78uLL);
      v8 = std::_Ref_count_obj2<REGKEYINFO>::_Ref_count_obj2<REGKEYINFO>(v7, v5);
      v9 = v2 | 1;
      v10 = (_QWORD *)(v8 + 16);
      v48[0] = v8 + 16;
      v48[1] = v8;
      v11 = *((_QWORD *)this + 18);
      if ( *((_QWORD *)this + 19) == 0x7FFFFFFFFFFFFFFLL )
        std::_Xlength_error("list too long");
      v48[2] = (char *)this + 144;
      v49 = 0LL;
      v12 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
        (_QWORD *)(v12 + 16),
        v48);
      ++*((_QWORD *)this + 19);
      v13 = *(_QWORD **)(v11 + 8);
      *v14 = v11;
      v14[1] = v13;
      v49 = 0LL;
      *(_QWORD *)(v11 + 8) = v14;
      *v13 = v14;
      v15 = (_QWORD *)(v8 + 24);
      v16 = (__int64 *)std::make_shared<StartupRegKeyNotification,HKEY__ * &,std::wstring &,enum StartupAppLocation &,std::wstring &>(
                         (unsigned int)&v46,
                         (_DWORD)v10,
                         (int)v8 + 24,
                         (int)v8 + 56,
                         v8 + 64);
      v17 = *v16;
      v18 = v16[1];
      *v16 = 0LL;
      v16[1] = 0LL;
      *(_QWORD *)(v8 + 96) = v17;
      v19 = *(std::_Ref_count_base **)(v8 + 104);
      *(_QWORD *)(v8 + 104) = v18;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v43 = v8 + 16;
      v44 = (std::_Ref_count_base *)v8;
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v45, &v43);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_f9d92d283d219251b39b1fca3d115af1__void_(
        v50,
        v45);
      if ( *(_QWORD *)(v8 + 48) > 7uLL )
        v15 = (_QWORD *)*v15;
      hKey[0] = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        hKey,
        *v10,
        v15,
        0LL,
        v50);
      v2 = v9 | 2;
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::operator=(
        (_QWORD *)(v8 + 112),
        hKey);
      if ( hKey[0] )
        wil::details::registry_watcher_state::Release((wil::details::registry_watcher_state *)hKey[0]);
      if ( v51 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 24LL))(v51);
      v4 = v38;
      StartupNotification::CheckForChange(*(StartupNotification **)(v8 + 96), v38);
      if ( v8 )
      {
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
      }
      v5 += 104;
      v6 = v41;
    }
    for ( i = (_QWORD *)((char *)this + 496); i != (_QWORD *)((char *)this + 672); i += 11 )
    {
      v21 = (__int64 *)std::make_shared<StartupFolderNotification,_GUID &,enum StartupAppLocation &,HKEY__ * &,std::wstring &>(
                         (unsigned int)&v46,
                         (_DWORD)i,
                         (int)i + 16,
                         (int)i + 24,
                         (__int64)(i + 4));
      v22 = (StartupNotification **)(i + 8);
      v23 = *v21;
      v24 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      i[8] = v23;
      v25 = (std::_Ref_count_base *)i[9];
      i[9] = v24;
      if ( v25 )
        std::_Ref_count_base::_Decref(v25);
      if ( v47 )
        std::_Ref_count_base::_Decref(v47);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v43, i + 8);
      std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v45, &v43);
      wistd::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const____::function_void___cdecl_enum_wil::FolderChangeEvent_unsigned_short_const______lambda_d30d699a9b0100ad99955a9d234ed237__void_(
        v50,
        v45);
      v28 = (_QWORD *)((char *)*v22 + 64);
      if ( *((_QWORD *)*v22 + 11) > 7uLL )
        v28 = (_QWORD *)*v28;
      v29 = (_QWORD *)wil::make_folder_change_reader((unsigned int)&v41, (_DWORD)v28, v26, v27, (unsigned int)v50);
      v30 = v29;
      if ( i + 10 != v29 )
      {
        wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
          i + 10,
          *v29);
        *v30 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(&v41);
      wistd::function<bool (long)>::~function<bool (long)>((__int64)v50);
      StartupNotification::CheckForChange(*v22, v4);
      if ( v44 )
        std::_Ref_count_base::_Decref(v44);
    }
    if ( *(_DWORD *)Data == 2 )
    {
      hKey[0] = 0LL;
      v31 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
      Key = RegCreateKeyExW(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Notifications\\Settings\\Windows.SystemToast.StartupApp",
              0,
              0LL,
              0,
              0x102u,
              0LL,
              v31,
              0LL);
      if ( Key )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0xA1,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)Key,
          phkResulta);
      *(_DWORD *)Data = 0;
      v33 = RegSetValueExW(hKey[0], L"Enabled", 0, 4u, Data, 4u);
      if ( v33 )
        wil::details::in1diag3::_Throw_Win32(
          retaddr,
          (void *)0xA4,
          (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
          (const char *)v33,
          (unsigned int)phkResult);
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(hKey);
    }
    _create___event_t_V__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__Uerr_returncode_policy_3__wil__QEAAJW4EventOptions_2_PEBGPEAU_SECURITY_ATTRIBUTES__PEA_N_Z(
      (char *)this + 176,
      0LL,
      0LL);
    v34 = (char *)operator new(0x10uLL);
    *(_QWORD *)v34 = this;
    *((_QWORD *)v34 + 1) = StartupAppMonitor::StartupToastNotifier;
    v41 = v34;
    LODWORD(phkResult) = 0;
    hKey[0] = (HKEY)_o__beginthreadex(
                      0LL,
                      0LL,
                      ____Invoke_V__tuple_P6AXPEAVStartupAppMonitor____EPEAV1__std___0A__00_thread_std__CAIPEAX_Z,
                      v34,
                      phkResult,
                      &hKey[1]);
    if ( hKey[0] )
    {
      if ( *((_DWORD *)this + 42) )
      {
        _o_terminate();
        __debugbreak();
      }
      *((_OWORD *)this + 10) = *(_OWORD *)hKey;
      if ( v42 )
        RegCloseKey(v42);
    }
    else
    {
      LODWORD(hKey[1]) = 0;
      std::_Throw_Cpp_error(6);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xA9,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupappmonitorimpl.cpp",
      v35);
  }
}
