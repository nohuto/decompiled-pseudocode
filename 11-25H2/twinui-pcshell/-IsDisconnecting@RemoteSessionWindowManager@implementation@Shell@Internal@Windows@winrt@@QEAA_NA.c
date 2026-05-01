/*
 * XREFs of ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x180635194
 * Callers:
 *     ?IsDisconnecting@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@PEA_N@Z @ 0x180635160 (-IsDisconnecting@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@1@AEBUhstring@winrt@@@Z @ 0x1806312D8 (--$find@X@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$shared_ptr@URemoteSessionInformation@implem.c)
 *     ?GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBUguid@6@@Z @ 0x180644EE4 (-GetSystemIdForDesktop@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsDisconnecting(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *this,
        const struct winrt::guid *a2)
{
  _QWORD *v4; // rax
  RTL_SRWLOCK *Ptr; // rbx
  char v6; // bl
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]
  volatile signed __int32 *v10; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 104LL))(
                   *((_QWORD *)this + 5),
                   v8);
  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::GetSystemIdForDesktop(*v4, &v10, a2);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  std::_Hash<std::_Umap_traits<winrt::hstring,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation>>>,0>>::find<void>(
    (_QWORD *)this + 9,
    &v11,
    (__int64 *)&v10);
  if ( v11 == *((RTL_SRWLOCK **)this + 10) )
  {
    v6 = 0;
  }
  else
  {
    Ptr = (RTL_SRWLOCK *)v11[3].Ptr;
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v11, Ptr + 3);
    v6 = (char)Ptr[20].Ptr;
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  return v6;
}
