/*
 * XREFs of ?SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXW4_LSA_USER_ACCOUNT_TYPE@@@Z @ 0x18061681C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall winrt::Windows::Internal::Shell::implementation::SetAppListBackupAccountTypeRegKeyForStateCapture(
        int a1)
{
  int Data; // [rsp+40h] [rbp+8h] BYREF

  Data = a1;
  return RegSetKeyValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
           L"AccountType",
           4u,
           &Data,
           4u);
}
