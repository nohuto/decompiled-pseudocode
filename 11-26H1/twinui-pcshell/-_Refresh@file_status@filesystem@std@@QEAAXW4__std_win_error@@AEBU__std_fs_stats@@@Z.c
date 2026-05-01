/*
 * XREFs of ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801D7340
 * Callers:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x1801D72B8 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 *     ?_Get_any_status@directory_entry@filesystem@std@@AEBA?AU_File_status_and_error@23@W4__std_fs_stats_flags@@@Z @ 0x180295070 (-_Get_any_status@directory_entry@filesystem@std@@AEBA-AU_File_status_and_error@23@W4__std_fs_sta.c)
 * Callees:
 *     __std_is_file_not_found @ 0x180315688 (__std_is_file_not_found.c)
 */

unsigned __int8 __fastcall std::filesystem::file_status::_Refresh(unsigned int *a1, unsigned int a2, __int64 a3)
{
  int v4; // r9d
  unsigned __int8 result; // al
  unsigned int v6; // r9d

  if ( a2 )
  {
    a1[1] = 0xFFFF;
    result = _std_is_file_not_found(a2);
    v6 = result;
    goto LABEL_9;
  }
  v4 = *(_DWORD *)(a3 + 16);
  result = -(v4 & 1);
  a1[1] = (v4 & 1) != 0 ? 365 : 511;
  if ( (v4 & 0x400) == 0 )
    goto LABEL_7;
  if ( *(_DWORD *)(a3 + 20) != -1610612724 )
  {
    if ( *(_DWORD *)(a3 + 20) == -1610612733 )
    {
      v6 = 10;
      goto LABEL_9;
    }
LABEL_7:
    v6 = (v4 & 0x10 | 0x20u) >> 4;
    goto LABEL_9;
  }
  v6 = 4;
LABEL_9:
  *a1 = v6;
  return result;
}
