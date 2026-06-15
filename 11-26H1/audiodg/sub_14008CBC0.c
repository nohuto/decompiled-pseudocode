/*
 * XREFs of sub_14008CBC0 @ 0x14008CBC0
 * Callers:
 *     sub_14008BBF0 @ 0x14008BBF0 (sub_14008BBF0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_14008CBC0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx

  v6 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 16; i != v6; i += 16LL )
  {
    *(_DWORD *)(i - 16) = *(_DWORD *)i;
    v8 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    v9 = *(_QWORD *)(i - 8);
    *(_QWORD *)(i - 8) = v8;
    if ( v9 )
      sub_1400B6010(v9);
  }
  sub_140003238((__int64 *)(*(_QWORD *)(a1 + 8) - 8LL));
  *(_QWORD *)(a1 + 8) -= 16LL;
  *a2 = a3;
  return a2;
}
