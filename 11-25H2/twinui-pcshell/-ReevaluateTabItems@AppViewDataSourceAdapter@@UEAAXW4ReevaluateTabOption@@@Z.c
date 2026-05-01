/*
 * XREFs of ?ReevaluateTabItems@AppViewDataSourceAdapter@@UEAAXW4ReevaluateTabOption@@@Z @ 0x1801735F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ @ 0x180055D5C (-InitializeAppViewItems@AppViewDataSourceAdapter@@AEAAXXZ.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VWin32AppInfo@@@2@@std@@PEAX@2@PEAU32@@Z @ 0x18005A364 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z @ 0x180173494 (-RemoveItemForView@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationView@@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@1@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@1@@Z @ 0x180173A04 (--$_Erase_tree@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1802400EC (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy.c)
 *     ??$_Emplace@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@?$_Tree@V?$_Tset_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@_N@1@AEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18029F868 (--$_Emplace@AEBV-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@-$_Tree@V-$_Tse.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall AppViewDataSourceAdapter::ReevaluateTabItems(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall ***v4)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v5; // rdx
  HWND WindowForView; // rax
  HANDLE PropW; // r12
  __int64 v8; // rcx
  _QWORD *m; // rax
  _QWORD *i; // rdi
  __int64 (__fastcall ***v11)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  const char *v12; // r9
  const char *v13; // r9
  __int64 (__fastcall **v14)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v15)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  _QWORD *j; // rbx
  __int64 (__fastcall ***v17)(ApplicationViewHelpers *, GUID *, __int64 *); // r14
  __int64 v18; // rcx
  _QWORD *k; // rax
  __int64 v20; // r15
  __int64 (__fastcall **n)(ApplicationViewHelpers *, GUID *, __int64 *); // rax
  __int128 v22; // [rsp+20h] [rbp-58h] BYREF
  char v23[16]; // [rsp+30h] [rbp-48h] BYREF
  char v24[56]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 (__fastcall ***v27)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+90h] [rbp+18h] BYREF
  __int64 (__fastcall ***v28)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v20 = a1;
    v22 = 0LL;
    v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v3 = v3;
    v3[1] = v3;
    v3[2] = v3;
    *((_WORD *)v3 + 12) = 257;
    *(_QWORD *)&v22 = v3;
    for ( i = **(_QWORD ***)(v20 - 32); i != *(_QWORD **)(v20 - 32); i = m )
    {
      v4 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))i[4];
      v27 = v4;
      if ( v4 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v4)[1])(v4);
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(v4, v5);
      PropW = GetPropW(WindowForView, (LPCWSTR)0xA920);
      if ( PropW )
      {
        std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::_Emplace<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const &>(
          &v22,
          v23,
          &v27);
        if ( !a2 )
        {
          for ( j = **(_QWORD ***)(v20 - 32); !*((_BYTE *)j + 25); j = k )
          {
            v17 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))j[4];
            v28 = v17;
            if ( v17 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v17)[1])(v17);
            if ( PropW == (HANDLE)ApplicationViewHelpers::GetWindowForView(v17, v5) )
            {
              std::_Tree<std::_Tset_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,0>>::insert<0,0>(
                &v22,
                v24,
                &v28);
              wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
              break;
            }
            if ( v17 )
              ((void (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*v17)[2])(v17);
            v18 = j[2];
            if ( *(_BYTE *)(v18 + 25) )
            {
              for ( k = (_QWORD *)j[1]; !*((_BYTE *)k + 25) && j == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
                j = k;
            }
            else
            {
              k = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::shared_ptr<Win32AppInfo>>>>::_Min((_QWORD *)v18);
            }
          }
        }
        v4 = v27;
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
    v11 = *(__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))v22;
    while ( 1 )
    {
      v27 = v11;
      if ( v11 == (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v22 )
        break;
      try
      {
        AppViewDataSourceAdapterBase::RemoveItemForView(
          (AppViewDataSourceAdapterBase *)(v20 - 128),
          (struct IApplicationView *)v11[4]);
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x119,
          (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
          v13);
        v20 = a1;
        v11 = v27;
      }
      v14 = v11[2];
      if ( *((_BYTE *)v14 + 25) )
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
        v15 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v14;
        if ( !*((_BYTE *)*v14 + 25) )
        {
          do
          {
            v11 = v15;
            v15 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))*v15;
          }
          while ( !*((_BYTE *)v15 + 25) );
        }
      }
    }
    AppViewDataSourceAdapter::InitializeAppViewItems((AppViewDataSourceAdapter *)(v20 - 136));
    std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>>::_Erase_tree<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(
      &v22,
      &v22,
      *(_QWORD *)(v22 + 8));
    std::_Deallocate<16,0>((void *)v22, (const struct std::nothrow_t *)0x28);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x11F,
      (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasourceadapter.cpp",
      v12);
  }
}
