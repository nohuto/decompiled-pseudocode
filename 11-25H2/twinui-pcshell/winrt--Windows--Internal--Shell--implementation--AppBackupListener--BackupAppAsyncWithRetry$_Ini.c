/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_InitCoro$2 @ 0x1805EE5C8
 * Callers:
 *     ?BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uhstring@6@@Z @ 0x1805EE960 (-BackupAppAsyncWithRetry@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUf.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry$_ResumeCoro$1 @ 0x1805EE630 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsyncWithRetry$_Res.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 273) = a5;
  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a2 + 281) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 272) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsyncWithRetry__ResumeCoro_1(a2);
}
