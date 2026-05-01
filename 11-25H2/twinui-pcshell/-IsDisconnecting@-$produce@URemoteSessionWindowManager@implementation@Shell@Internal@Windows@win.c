/*
 * XREFs of ?IsDisconnecting@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHUguid@3@PEA_N@Z @ 0x180635160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUguid@6@@Z @ 0x180635194 (-IsDisconnecting@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::IsDisconnecting(
        __int64 a1,
        const struct winrt::guid *a2,
        _BYTE *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v3; // rcx
  __int64 result; // rax
  _DWORD v5[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = (winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    *a3 = winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::IsDisconnecting(v3, a2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(v5);
  }
  return result;
}
