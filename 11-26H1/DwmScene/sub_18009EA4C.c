/*
 * XREFs of sub_18009EA4C @ 0x18009EA4C
 * Callers:
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *sub_18009EA4C()
{
  if ( dword_1801CDC80 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801CDC80);
    if ( dword_1801CDC80 == -1 )
    {
      sub_180011CC4(qword_1801CDC90, "Blur8");
      sub_180011CC4(qword_1801CDCB0, "Blur16");
      sub_180011CC4(qword_1801CDCD0, "Blur32");
      atexit(sub_1800EC890);
      sub_18000D4CC(&dword_1801CDC80);
    }
  }
  return qword_1801CDC90;
}
