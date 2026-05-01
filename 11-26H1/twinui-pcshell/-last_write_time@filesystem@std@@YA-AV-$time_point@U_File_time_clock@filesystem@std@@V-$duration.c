/*
 * XREFs of ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x180617C18
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __std_fs_get_stats @ 0x1802CD6C4 (__std_fs_get_stats.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180315134 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

_QWORD *__fastcall std::filesystem::last_write_time(_QWORD *a1, WCHAR *a2)
{
  bool v2; // cc
  const WCHAR *v5; // rcx
  DWORD stats; // eax
  _QWORD *result; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v2 = *((_QWORD *)a2 + 3) <= 7uLL;
  memset(v8, 0, sizeof(v8));
  v5 = a2;
  if ( !v2 )
    v5 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v5, (__int64)v8, 33, -1);
  if ( stats )
  {
    *a1 = 0x8000000000000000uLL;
    std::filesystem::_Throw_fs_error("last_write_time", stats, a2);
  }
  result = a1;
  *a1 = *(_QWORD *)&v8[0];
  return result;
}
