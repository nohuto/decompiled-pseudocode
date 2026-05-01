/*
 * XREFs of ?IsAnyRemoteSystemEnabled@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHPEA_N@Z @ 0x180635100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180635134 (-IsAnyRemoteSystemEnabled@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsAnyRemoteSystemEnabled(
        __int64 a1,
        _BYTE *a2)
{
  *a2 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsAnyRemoteSystemEnabled((winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0)));
  return 0LL;
}
