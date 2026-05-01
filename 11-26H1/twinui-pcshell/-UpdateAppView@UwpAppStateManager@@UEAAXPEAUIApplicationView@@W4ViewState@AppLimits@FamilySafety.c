/*
 * XREFs of ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x180573020
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositioner@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x18012FD24 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHWND__@@UWindowCloakInfo@CDesktopPositio.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285658 (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Find_lower_bound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18029A968 (--$_Find_lower_bound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Lower_bound_duplicate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@2@$0A@@std@@@std@@IEBA_NQEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18035DF74 (--$_Lower_bound_duplicate@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree.c)
 *     ??$_Emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV?$shared_ptr@VUwpAppPackageInfo@@@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@AEAV?$shared_ptr@VUwpAppPackageInfo@@@1@@Z @ 0x1805723A0 (--$_Emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAV-$shared_ptr@VU.c)
 *     ??$com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18057261C (--$com_query@UIWinRTApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWinRTAppl.c)
 *     ??$make_shared@VUwpAppPackageInfo@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VUwpAppPackageInfo@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x180572714 (--$make_shared@VUwpAppPackageInfo@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180572974 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180573268 (-UpdateView@UwpAppPackageInfo@@QEAAXPEAUIWinRTApplicationView@@W4ViewState@AppLimits@FamilySafet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall UwpAppStateManager::UpdateAppView(
        RTL_SRWLOCK *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, _QWORD *),
        unsigned int a3,
        __int64 a4)
{
  __int64 (__fastcall *v8)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), void **); // rbx
  void **v9; // rax
  int v10; // eax
  char v11; // r14
  char v12; // r15
  __int64 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 **v17; // rdx
  __int64 *i; // rcx
  __int64 *j; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  char *v24; // [rsp+20h] [rbp-51h] BYREF
  __int64 v25; // [rsp+28h] [rbp-49h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp-41h] BYREF
  __int64 v27; // [rsp+38h] [rbp-39h] BYREF
  std::_Ref_count_base *v28; // [rsp+40h] [rbp-31h]
  _QWORD v29[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v30; // [rsp+58h] [rbp-19h]
  _QWORD v31[4]; // [rsp+60h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v26 = a2;
  wil::com_query<IWinRTApplicationView,IApplicationView * &>(&v25, &v26);
  v24 = 0LL;
  v8 = (__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), void **))(*a2)[17];
  v9 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v24);
  v10 = v8(a2, v9);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8F,
      (int)"pcshell\\twinui\\familyappusagemanager\\lib\\uwpappstatemanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v24);
  Windows::Internal::FamilySafety::AppLimits::AumidToAppId((__int64)v31, v24);
  v11 = 0;
  v12 = 0;
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v26, a1 + 6);
  v13 = (__int64 *)&a1[7];
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Find_lower_bound<std::wstring>(
    (__int64)&a1[7],
    v29,
    (__int64)v31);
  v14 = v30;
  if ( !std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<Win32AppInfo>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>,0>>::_Lower_bound_duplicate<std::wstring>(
          v15,
          v30,
          (const wchar_t *)v31)
    || v14 == *v13 )
  {
    if ( a3 != 1 )
    {
      std::make_shared<UwpAppPackageInfo,std::wstring const &>(&v27, v31);
      UwpAppPackageInfo::UpdateView(v27, v25, a3);
      std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::_Emplace<std::wstring const &,std::shared_ptr<UwpAppPackageInfo> &>(
        v13,
        (__int64)v29,
        (wchar_t *)v31,
        &v27);
      v11 = 1;
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
    }
  }
  else
  {
    UwpAppPackageInfo::UpdateView(*(_QWORD *)(v14 + 64), v25, a3);
    if ( a3 == 1 )
    {
      v16 = **(__int64 ***)(*(_QWORD *)(v14 + 64) + 32LL);
      while ( !*((_BYTE *)v16 + 25) )
      {
        if ( *(_DWORD *)v16[5] != 1 )
          goto LABEL_22;
        v17 = (__int64 **)v16[2];
        if ( *((_BYTE *)v17 + 25) )
        {
          for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v16 = i;
          v16 = i;
        }
        else
        {
          v16 = (__int64 *)v16[2];
          for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v16 = j;
        }
      }
      v12 = 1;
      v20 = std::_Tree_val<std::_Tree_simple_types<std::pair<HWND__ * const,CDesktopPositioner::WindowCloakInfo>>>::_Extract(
              v13,
              v14);
      std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>,void *>>>(
        v21,
        v20);
    }
  }
LABEL_22:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v26);
  if ( v11 || v12 )
  {
    v23 = v31;
    if ( v31[3] > 7uLL )
      v23 = (_QWORD *)v31[0];
    LOBYTE(v22) = v11;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)a4 + 24LL))(a4, v23, v22);
  }
  std::wstring::_Tidy_deallocate(v31);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
}
