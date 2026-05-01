/*
 * XREFs of ?SetAppListBackupAccountTypeRegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXW4_LSA_USER_ACCOUNT_TYPE@@@Z @ 0x1805F2140
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x1805F0510 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_1805F0510.c)
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
