/*
 * XREFs of sub_18001D748 @ 0x18001D748
 * Callers:
 *     sub_18001D48C @ 0x18001D48C (sub_18001D48C.c)
 * Callees:
 *     atexit @ 0x18000C424 (atexit.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *sub_18001D748()
{
  __int64 v0; // rax

  if ( dword_1801C8F48 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 16LL) )
  {
    sub_18000D534(&dword_1801C8F48);
    if ( dword_1801C8F48 == -1 )
    {
      v0 = sub_180011790(0x48uLL);
      *(_QWORD *)v0 = v0;
      *(_QWORD *)(v0 + 8) = v0;
      *(_QWORD *)(v0 + 16) = v0;
      *(_WORD *)(v0 + 24) = 257;
      qword_1801C8F50 = v0;
      atexit(sub_1800E5880);
      sub_18000D4CC(&dword_1801C8F48);
    }
  }
  return &qword_1801C8F50;
}
