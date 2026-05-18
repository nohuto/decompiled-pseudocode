/*
 * XREFs of sub_18009EBD8 @ 0x18009EBD8
 * Callers:
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

_QWORD *sub_18009EBD8()
{
  if ( dword_1801CDD08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CDD08);
    if ( dword_1801CDD08 == -1 )
    {
      sub_180011CC4(qword_1801CDD10, "<dummy>");
      atexit(sub_1800EC8F0);
      sub_18000D4CC(&dword_1801CDD08);
    }
  }
  return qword_1801CDD10;
}
