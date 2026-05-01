/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_InitCoro$2 @ 0x1805EF034
 * Callers:
 *     ?BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@_N@Z @ 0x1805EF298 (-BackupDeviceMetaDataAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA-A.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$1 @ 0x1805EF0A0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMetaDataAsync$_R.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 161) = a5;
  *(_BYTE *)(a2 + 169) = v5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 160) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync__ResumeCoro_1(a2);
}
