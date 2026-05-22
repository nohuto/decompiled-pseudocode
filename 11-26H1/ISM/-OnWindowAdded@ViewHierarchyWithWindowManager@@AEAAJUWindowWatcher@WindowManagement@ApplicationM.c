/*
 * XREFs of ?OnWindowAdded@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x18004A040
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180049D7C (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004A114 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??$emplace@U?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@1@@Z @ 0x18004A164 (--$emplace@U-$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@-$_.c)
 *     ?find@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEBI@Z @ 0x1800A69E0 (-find@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHierarchyWithWindowManager::OnWindowAdded(
        __int64 a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        __int64 **a3)
{
  int v6; // esi
  __int64 v7; // r15
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  int v15; // [rsp+80h] [rbp+38h] BYREF
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *v16; // [rsp+88h] [rbp+40h]
  __int64 **v17; // [rsp+90h] [rbp+48h]
  __int64 v18; // [rsp+98h] [rbp+50h] BYREF

  v17 = a3;
  v16 = a2;
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
    a3,
    &v18);
  v6 = *(_DWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
                    &v18,
                    &v15);
  v15 = v6;
  v7 = a1 + 120;
  v8 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::find(
                   a1 + 120,
                   &v12,
                   &v15);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = v18;
  if ( *v8 == v9 )
  {
    v12 = v6;
    v13 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::emplace<std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>(
      v7,
      v14,
      &v12);
    winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v13);
  }
  if ( v10 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)a3);
  return 0LL;
}
