/*
 * XREFs of sub_18001D7D4 @ 0x18001D7D4
 * Callers:
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_18001D430 @ 0x18001D430 (sub_18001D430.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001D7D4()
{
  if ( dword_1801C8F60 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801C8F60);
    if ( dword_1801C8F60 == -1 )
    {
      sub_18001D430(qword_1801C8F68);
      atexit(sub_1800E58A0);
      sub_18000D4CC(&dword_1801C8F60);
    }
  }
  return qword_1801C8F68;
}
