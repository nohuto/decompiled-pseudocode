/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1806470BC
 * Callers:
 *     ?CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@V?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@Uhstring@6@@Z @ 0x180647B00 (-CloseCloudPCConnection@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x180647150 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_180647150.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rcx

  *(_QWORD *)(a2 + 593) = a6;
  *(_QWORD *)(a2 + 601) = 0LL;
  *(_QWORD *)(a2 + 609) = 0LL;
  *(_QWORD *)(a2 + 601) = *a4;
  *(_QWORD *)(a2 + 609) = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 617) = v7;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[592] = 0;
  return winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection__ResumeCoro_1(a2);
}
