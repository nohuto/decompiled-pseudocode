/*
 * XREFs of ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18005BDB4
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x18005C120 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CFB0 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x18005BE18 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

_QWORD *__fastcall std::filesystem::path::filename(std::filesystem *a1, _QWORD *a2)
{
  std::filesystem *v3; // r8
  __int64 v4; // r11
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v3 = *(std::filesystem **)a1;
  *(_QWORD *)&v6 = std::filesystem::_Find_filename(
                     v3,
                     (const unsigned __int16 *const)v3 + *((_QWORD *)a1 + 2),
                     (const unsigned __int16 *)v3);
  *((_QWORD *)&v6 + 1) = (v4 - (__int64)v6) >> 1;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(a2, &v6);
  return a2;
}
