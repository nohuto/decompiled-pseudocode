/*
 * XREFs of ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1805F34F8
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     __std_fs_get_stats @ 0x1802D4CF0 (__std_fs_get_stats.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180318F20 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 */

_QWORD *__fastcall std::filesystem::last_write_time(_QWORD *a1, const WCHAR *a2)
{
  bool v2; // cc
  const WCHAR *v5; // rcx
  DWORD stats; // eax
  _QWORD *result; // rax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0LL;
  v2 = *((_QWORD *)a2 + 3) <= 7uLL;
  v5 = a2;
  memset(v8, 0, sizeof(v8));
  if ( !v2 )
    v5 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v5, (__int64)v8, 33, -1);
  if ( stats )
  {
    *a1 = 0x8000000000000000uLL;
    std::filesystem::_Throw_fs_error("last_write_time", stats, (__int64)a2);
  }
  result = a1;
  *a1 = *(_QWORD *)&v8[0];
  return result;
}
