/*
 * XREFs of ?get_SystemId@?$produce@URemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDisplayInfoChangedEventArgs@3456@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180641FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?SystemId@RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ @ 0x180641F58 (-SystemId@RemoteSystemDisplayInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@Q.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs,winrt::Windows::Internal::Shell::IRemoteSystemDisplayInfoChangedEventArgs>::get_SystemId(
        __int64 a1,
        _QWORD *a2)
{
  winrt::hstring *v3; // rax
  __int64 v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = winrt::Windows::Internal::Shell::implementation::RemoteSystemDisplayInfoChangedEventArgs::SystemId(
         (a1 - 16) & -(__int64)(a1 != 0),
         (winrt::hstring *)&v6);
  v4 = *(_QWORD *)v3;
  *(_QWORD *)v3 = 0LL;
  *a2 = v4;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return 0LL;
}
