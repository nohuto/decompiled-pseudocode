/*
 * XREFs of ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x1801D72B8
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@AEAVerror_code@2@@Z @ 0x1801D71A8 (-exists@filesystem@std@@YA_NAEBVpath@12@AEAVerror_code@2@@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 * Callees:
 *     ?_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z @ 0x1801D7340 (-_Refresh@file_status@filesystem@std@@QEAAXW4__std_win_error@@AEBU__std_fs_stats@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     __std_fs_get_stats @ 0x1802CD6C4 (__std_fs_get_stats.c)
 */

_DWORD *__fastcall std::filesystem::_Get_any_status(_DWORD *a1, __int64 a2)
{
  const WCHAR *v2; // rax
  bool v3; // cc
  unsigned int stats; // eax
  _OWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF

  *a1 = 0;
  a1[1] = 0xFFFF;
  v2 = (const WCHAR *)a2;
  v3 = *(_QWORD *)(a2 + 24) <= 7uLL;
  memset(v7, 0, sizeof(v7));
  if ( !v3 )
    v2 = *(const WCHAR **)a2;
  stats = _std_fs_get_stats(v2);
  a1[2] = stats;
  std::filesystem::file_status::_Refresh(a1, stats, v7);
  return a1;
}
