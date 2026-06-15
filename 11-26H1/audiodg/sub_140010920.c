/*
 * XREFs of sub_140010920 @ 0x140010920
 * Callers:
 *     sub_1400108EC @ 0x1400108EC (sub_1400108EC.c)
 * Callees:
 *     sub_140010994 @ 0x140010994 (sub_140010994.c)
 *     sub_1400109C4 @ 0x1400109C4 (sub_1400109C4.c)
 */

_QWORD *__fastcall sub_140010920(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  _QWORD *result; // rax

  sub_1400109C4(a1);
  v7 = *(_QWORD **)(a1 + 32);
  v8 = *v7;
  sub_140010994(v7 + 2, *a2);
  result = v7;
  *(_QWORD *)(a1 + 32) = v8;
  v7[1] = 0LL;
  *v7 = a4;
  ++*(_QWORD *)(a1 + 16);
  return result;
}
