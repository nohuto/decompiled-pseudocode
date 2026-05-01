/*
 * XREFs of ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x1805EE040
 * Callers:
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x180299048 (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     ??_G?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x1805EE16C (--_G-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     _winrt::Windows::Internal::Shell::implementation::GetLastCompatBackupTime_::_1_::dtor$5 @ 0x1806B6E05 (_winrt--Windows--Internal--Shell--implementation--GetLastCompatBackupTime_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$12 @ 0x1806D9004 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806D9004.c)
 * Callees:
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1805ED968 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::fstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 184;
  std::fstream::~fstream<char,std::char_traits<char>>(a1 + 184);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
