/*
 * XREFs of ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x180225990
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B03F8 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180586E50 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 */

__int64 __fastcall std::filesystem::directory_iterator::operator++(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx

  v2 = std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(a1);
  if ( v2 )
    std::filesystem::_Throw_fs_error(v3, v2);
  return a1;
}
