/*
 * XREFs of ?GetRemoteDesktopInformation@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SA?AURemoteDesktopInformation@3456@XZ @ 0x180627A20
 * Callers:
 *     ?GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x180634B88 (-GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1800AC148 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ @ 0x1802C599C (-GetFactoryImplObj@implementation@Shell@Internal@Windows@winrt@@YA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(
        __int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // r8d
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // r8d
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)winrt::Windows::Internal::Shell::implementation::GetFactoryImplObj((winrt::Windows::Internal::Shell::implementation *)&v9);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = *(_DWORD *)(v2 + 48);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v10, (RTL_SRWLOCK *)(v2 + 56));
  v4 = *(_QWORD **)(v2 + 72);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    v6 = v5 + 2;
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a1 + 8), v5 + 2, v3);
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a1 + 16), v6 + 1, v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  if ( v9 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v9);
  return a1;
}
