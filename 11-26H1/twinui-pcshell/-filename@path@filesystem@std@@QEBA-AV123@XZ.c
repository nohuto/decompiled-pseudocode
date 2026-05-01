/*
 * XREFs of ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800E1E34
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x180294F0C (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 */

__int64 __fastcall std::filesystem::path::filename(std::filesystem *a1, __int64 a2)
{
  std::filesystem *v3; // r8
  const unsigned __int16 *filename; // rax
  __int64 v5; // r11

  v3 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v3 = *(std::filesystem **)a1;
  filename = std::filesystem::_Find_filename(
               v3,
               (const unsigned __int16 *)v3 + *((_QWORD *)a1 + 2),
               (const unsigned __int16 *)v3);
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  std::wstring::_Construct<1,unsigned short const *>((char **)a2, filename, (v5 - (__int64)filename) >> 1);
  return a2;
}
