/*
 * XREFs of ?GetRemoteDesktopInformation@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x18064D51C
 * Callers:
 *     ?GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AURemoteDesktopInformation@3456@XZ @ 0x18065A8AC (-GetRemoteDesktopInformation@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18010E8A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetRemoteDesktopInformation(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // r8d
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // r8d
  RTL_SRWLOCK *v10; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 48);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v10, (RTL_SRWLOCK *)(a1 + 56));
  v5 = *(_QWORD **)(a1 + 72);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 != v5 )
  {
    v7 = v6 + 2;
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a2 + 8), v6 + 2, v4);
    winrt::hstring::operator=((struct winrt::impl::hstring_header **)(a2 + 16), v7 + 1, v8);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  return a2;
}
