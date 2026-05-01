/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_InitCoro$2 @ 0x1805F0FF8
 * Callers:
 *     ?OnTileChanged@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTile@StartScreen@UI@WindowsUdk@6@UTileChangedEventArgs@9UI@WindowsUdk@6@@Z @ 0x1805F1260 (-OnTileChanged@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_fo.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x1805F1070 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__InitCoro_2(
        _DWORD *a1,
        char *a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  *(_QWORD *)(a2 + 113) = a6;
  v7 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 121) = v7;
  v8 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 129) = v8;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1;
  *((_DWORD *)a2 + 2) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  a2[112] = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1(a2);
}
