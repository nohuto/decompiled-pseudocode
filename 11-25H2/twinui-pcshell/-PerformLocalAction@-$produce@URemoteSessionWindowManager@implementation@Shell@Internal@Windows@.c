/*
 * XREFs of ?PerformLocalAction@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHH@Z @ 0x180636130
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLocalAction@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18063615C (-PerformLocalAction@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::IRemoteSessionWindowManager>::PerformLocalAction(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a1,
        int a2)
{
  __int64 result; // rax
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  try
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::PerformLocalAction(
      a1,
      (const enum winrt::Windows::Internal::Shell::RemoteDesktopLocalAction *)&v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
