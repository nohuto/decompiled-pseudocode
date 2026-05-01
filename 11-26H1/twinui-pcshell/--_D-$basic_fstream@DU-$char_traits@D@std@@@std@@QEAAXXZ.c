/*
 * XREFs of ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x180612BA8
 * Callers:
 *     ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC (-GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ.c)
 *     ??_G?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x180612CDC (--_G-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAAPEAXI@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     _winrt::Windows::Internal::Shell::implementation::GetLastCompatBackupTime_::_1_::dtor$5 @ 0x1806DDF85 (_winrt--Windows--Internal--Shell--implementation--GetLastCompatBackupTime_--_1_--dtor$5.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart_::_1_::dtor$12 @ 0x18070169D (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_18070169D.c)
 * Callees:
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x180612448 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

__int64 __fastcall std::fstream::`vbase destructor'(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 184;
  std::fstream::~fstream<char,std::char_traits<char>>(a1 + 184);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}
