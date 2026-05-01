/*
 * XREFs of ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x18029D17C
 * Callers:
 *     ?IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z @ 0x18029CFB0 (-IsValidStartupAppFile@StartupFolderNotification@@CA_NAEBVdirectory_entry@filesystem@std@@@Z.c)
 * Callees:
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801E2E50 (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     __std_fs_get_stats @ 0x1802D4CF0 (__std_fs_get_stats.c)
 */

unsigned int *__fastcall std::filesystem::directory_entry::_Get_any_status(__int64 a1, unsigned int *a2)
{
  _OWORD *v3; // r8
  int v4; // eax
  int v5; // edx
  const WCHAR *v6; // rcx
  int stats; // eax
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0;
  a2[1] = 0xFFFF;
  v3 = (_OWORD *)a1;
  v4 = *(_DWORD *)(a1 + 28) & 3;
  memset(v9, 0, sizeof(v9));
  if ( (_BYTE)v4 == 3 )
  {
    a2[2] = 0;
    v5 = 0;
  }
  else
  {
    v6 = (const WCHAR *)(a1 + 32);
    if ( *((_QWORD *)v6 + 3) > 7uLL )
      v6 = *(const WCHAR **)v6;
    stats = _std_fs_get_stats(v6);
    a2[2] = stats;
    v3 = v9;
    v5 = stats;
  }
  std::filesystem::file_status::_Refresh(a2, v5, (__int64)v3);
  return a2;
}
