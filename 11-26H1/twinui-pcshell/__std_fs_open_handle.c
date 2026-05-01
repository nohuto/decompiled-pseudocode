/*
 * XREFs of __std_fs_open_handle @ 0x1802CDA40
 * Callers:
 *     __std_fs_get_stats @ 0x1802CD6C4 (__std_fs_get_stats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _std_fs_open_handle(_QWORD *a1, const WCHAR *a2, DWORD a3, DWORD dwFlagsAndAttributes)
{
  unsigned int v4; // edi
  HANDLE FileW; // rax

  v4 = 0;
  FileW = CreateFileW(a2, a3, 7u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  *a1 = FileW;
  if ( FileW == (HANDLE)-1LL )
    return GetLastError();
  return v4;
}
