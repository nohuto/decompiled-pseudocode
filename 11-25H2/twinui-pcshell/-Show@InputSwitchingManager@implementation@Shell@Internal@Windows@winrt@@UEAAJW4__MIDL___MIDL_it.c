/*
 * XREFs of ?Show@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4__MIDL___MIDL_itf_inputswitchexperiencemanager_0000_0000_0001@@@Z @ 0x180613F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180613A18 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::Show(__int64 a1, int a2)
{
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)(a1 + 252) = a2;
  try
  {
    winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::InsertActionToQueue(a1, 0);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A8,
                           (int)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
                           v2);
  }
  return result;
}
