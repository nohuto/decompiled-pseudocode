/*
 * XREFs of ?DisconnectAllRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180634A08
 * Callers:
 *     ?IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x18063523C (-IsImmersiveModeSupported@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhstring@6@@Z @ 0x180625CD8 (-DisconnectProvider@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUhs.c)
 *     ?DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4DisconnectSource@23456@@Z @ 0x180649B1C (-DisconnectReason@RemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::DisconnectAllRemoteSessions(
        RTL_SRWLOCK *this)
{
  __int64 **Ptr; // rdi
  __int64 **i; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v5, this + 7);
  Ptr = (__int64 **)this[10].Ptr;
  for ( i = (__int64 **)*Ptr; i != Ptr; i = (__int64 **)*i )
  {
    v4 = 1;
    winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation::DisconnectReason(
      (winrt::Windows::Internal::Shell::implementation::RemoteSessionInformation *)i[3],
      (const enum winrt::Windows::Internal::Shell::implementation::DisconnectSource *)&v4);
    winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::DisconnectProvider((const struct winrt::hstring *)(i + 2));
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v5);
}
