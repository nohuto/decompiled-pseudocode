/*
 * XREFs of ?add_RemoteDesktopStateChange@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEAXPEAUevent_token@3@@Z @ 0x180637370
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoteDesktopStateChange@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AUevent_token@6@AEBU?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@56@@Z @ 0x180636654 (-RemoteDesktopStateChange@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::add_RemoteDesktopStateChange(
        __int64 a1,
        __int64 a2,
        PVOID *a3)
{
  PVOID v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  *a3 = *winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RemoteDesktopStateChange(
           (RTL_SRWLOCK *)((a1 - 16) & -(__int64)(a1 != 0)),
           &v4,
           &v5);
  return 0LL;
}
