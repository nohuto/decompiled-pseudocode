/*
 * XREFs of ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004AC8C
 * Callers:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x1800491D4 (-CreateWatcher@WindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180049408 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0?$unordered_map@IIU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@QEAA@XZ @ 0x18004D9AC (--0-$unordered_map@IIU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-$pair@$$CBII@std@@@2@@std@@QE.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$unordered_map@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@U?$hash@I@std@@U?$equal_to@I@8@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@@std@@QEAA@XZ @ 0x18008816C (--0-$unordered_map@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@U-$hash@I@.c)
 *     ?CreateWatcher@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ @ 0x180092998 (-CreateWatcher@AppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@SA@XZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180093584 (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
ViewHierarchyWithWindowManager *__fastcall ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager(
        ViewHierarchyWithWindowManager *this)
{
  __int64 *v1; // rdi
  __int64 *v2; // r14
  char *v3; // rbx
  _QWORD *v4; // rax
  __int64 *Watcher; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = (__int64 *)this;
  *(_QWORD *)this = 0LL;
  v2 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = (char *)this + 56;
  v12 = (__int64)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v4 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(32LL);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)v3 + 1) = v4;
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 6) = 7LL;
  *((_QWORD *)v3 + 7) = 8LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)v3 + 3,
    0x10uLL,
    *((_QWORD *)v3 + 1));
  std::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::unordered_map<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(v1 + 15);
  v1[23] = 0LL;
  std::unordered_map<unsigned int,unsigned int>::unordered_map<unsigned int,unsigned int>(v1 + 24);
  try
  {
    Watcher = (__int64 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc::CreateWatcher((__int64)&v12);
    if ( v1 != Watcher )
    {
      if ( *v1 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v1);
      v6 = *Watcher;
      *Watcher = 0LL;
      *v1 = v6;
    }
    if ( v12 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
    v7 = (__int64 *)winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc::CreateWatcher();
    if ( v2 != v7 )
    {
      if ( *v2 )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v2);
      v8 = *v7;
      *v7 = 0LL;
      *v2 = v8;
    }
    if ( v12 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
  }
  catch ( ... )
  {
    v1 = (__int64 *)this;
  }
  if ( *v1 && v1[1] )
  {
    ViewHierarchyWithWindowManager::StartWindowWatcher((ViewHierarchyWithWindowManager *)v1);
    ViewHierarchyWithWindowManager::StartAppViewWatcher((ViewHierarchyWithWindowManager *)v1);
  }
  return (ViewHierarchyWithWindowManager *)v1;
}
