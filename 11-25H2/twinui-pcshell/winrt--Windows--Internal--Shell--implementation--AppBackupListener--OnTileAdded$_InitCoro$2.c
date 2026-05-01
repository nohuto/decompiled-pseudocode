/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_InitCoro$2 @ 0x1805F0C04
 * Callers:
 *     ?OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileAddedEventArgs@9UI@WindowsUdk@6@@Z @ 0x1805F0F70 (-OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_forg.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1805F0C80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)(a2 + 193) = a6;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 201) = v7;
  v8 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 209) = v8;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[192] = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1(a2);
}
