/*
 * XREFs of sub_1800A6800 @ 0x1800A6800
 * Callers:
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

_QWORD *sub_1800A6800()
{
  if ( dword_1801CE000 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CE000);
    if ( dword_1801CE000 == -1 )
    {
      sub_180011CC4(qword_1801CE008, "<dummy>");
      atexit(sub_1800EC920);
      sub_18000D4CC(&dword_1801CE000);
    }
  }
  return qword_1801CE008;
}
