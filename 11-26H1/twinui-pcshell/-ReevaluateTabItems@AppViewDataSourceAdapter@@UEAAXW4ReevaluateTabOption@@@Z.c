/*
 * XREFs of ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1800F1A20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x180031ECC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x1800F14B4 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x1800F1CE8 (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x1800F2288 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18023154C (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Emplace@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180296ACC (--$_Emplace@AEBV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_Tse.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AppViewDataSourceAdapter::ReevaluateTabItems(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rax
  HANDLE PropW; // r12
  __int64 v8; // rcx
  _QWORD *m; // rax
  _QWORD *i; // rdi
  __int64 (__fastcall ***v11)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  __int64 result; // rax
  const char *v13; // r9
  const char *v14; // r9
  __int64 (__fastcall **v15)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 (__fastcall ***ii)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  _QWORD *j; // rbx
  __int64 (__fastcall ***v18)(ApplicationViewHelpers *, GUID *, __int64 *); // r14
  __int64 v19; // rcx
  _QWORD *k; // rax
  __int64 v21; // r15
  __int64 (__fastcall **n)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  char v24[16]; // [rsp+30h] [rbp-48h] BYREF
  char v25[56]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 (__fastcall ***v28)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+90h] [rbp+18h] BYREF
  __int64 (__fastcall ***v29)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v21 = a1;
    v23 = 0LL;
    v3 = std::_Allocate<16,std::_Default_allocate_traits>(40LL);
    *(_QWORD *)v3 = v3;
    *(_QWORD *)(v3 + 8) = v3;
    *(_QWORD *)(v3 + 16) = v3;
    *(_WORD *)(v3 + 24) = 257;
    *(_QWORD *)&v23 = v3;
    for ( i = **(_QWORD ***)(v21 - 32); i != *(_QWORD **)(v21 - 32); i = m )
    {
      v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))i[4];
      v28 = v4;
      if ( v4 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v4)[1])(v4);
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v4, v5);
      PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
      if ( PropW )
      {
        std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const &>(
          &v23,
          v24,
          &v28);
        if ( !a2 )
        {
          for ( j = **(_QWORD ***)(v21 - 32); !*((_BYTE *)j + 25); j = k )
          {
            v18 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))j[4];
            v29 = v18;
            if ( v18 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v18)[1])(v18);
            if ( PropW == (HANDLE)ApplicationViewHelpers::GetWindowForView(v18, v5) )
            {
              std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
                &v23,
                v25,
                &v29);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v29);
              break;
            }
            if ( v18 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v18)[2])(v18);
            v19 = j[2];
            if ( *(_BYTE *)(v19 + 25) )
            {
              for ( k = (_QWORD *)j[1]; !*((_BYTE *)k + 25) && j == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
                j = k;
            }
            else
            {
              k = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v19);
            }
          }
        }
        v4 = v28;
      }
      if ( v4 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v4)[2])(v4);
      v8 = i[2];
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( m = (_QWORD *)i[1]; !*((_BYTE *)m + 25) && i == (_QWORD *)m[2]; m = (_QWORD *)m[1] )
          i = m;
      }
      else
      {
        m = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v8);
      }
    }
    v11 = *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))v23;
    while ( 1 )
    {
      v28 = v11;
      if ( v11 == (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v23 )
        break;
      try
      {
        AppViewDataSourceAdapterBase::RemoveItemForView(
          (AppViewDataSourceAdapterBase *)(v21 - 128),
          (struct IApplicationView *)v11[4]);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x119,
          (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          v14);
        v21 = a1;
        v11 = v28;
      }
      v15 = v11[2];
      if ( *((_BYTE *)v15 + 25) )
      {
        for ( n = v11[1];
              !*((_BYTE *)n + 25) && v11 == (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))n[2];
              n = (__int64 (__fastcall **)(ApplicationViewHelpers *, GUID *, __int64 *))n[1] )
        {
          v11 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))n;
        }
        v11 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))n;
      }
      else
      {
        v11 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v11[2];
        for ( ii = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v15;
              !*((_BYTE *)ii + 25);
              ii = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*ii )
        {
          v11 = ii;
        }
      }
    }
    AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)(v21 - 136));
    std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
      &v23,
      &v23,
      *(_QWORD *)(v23 + 8));
    result = std::_Deallocate<16>(v23, 40LL);
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x11F,
             (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
             v13);
  }
  return result;
}
