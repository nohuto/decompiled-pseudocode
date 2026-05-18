/*
 * XREFs of sub_18002FBD8 @ 0x18002FBD8
 * Callers:
 *     sub_18002F3F4 @ 0x18002F3F4 (sub_18002F3F4.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18002FBD8(__int64 a1, _QWORD *a2, __int64 a3, _QWORD **a4)
{
  _QWORD *result; // rax

  result = *a4;
  *a2 = **a4;
  a2[1] = 0LL;
  a2[2] = 0LL;
  return result;
}
