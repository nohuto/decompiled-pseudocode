/*
 * XREFs of sub_180098010 @ 0x180098010
 * Callers:
 *     sub_18009820C @ 0x18009820C (sub_18009820C.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180098E04 @ 0x180098E04 (sub_180098E04.c)
 *     sub_180098E70 @ 0x180098E70 (sub_180098E70.c)
 *     sub_180098E88 @ 0x180098E88 (sub_180098E88.c)
 */

_QWORD *__fastcall sub_180098010(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *result; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( ((*(_BYTE *)(a1 + 24) + (_BYTE)v4) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
    sub_180098E88(a1);
  *(_QWORD *)(a1 + 24) &= 2LL * *(_QWORD *)(a1 + 16) - 1;
  v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 24);
  v6 = sub_180098E70(a1, v5);
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) )
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = sub_180011790(0x10uLL);
  result = (_QWORD *)sub_180098E04(a1, v5);
  *result = *a2;
  ++*(_QWORD *)(a1 + 32);
  return result;
}
