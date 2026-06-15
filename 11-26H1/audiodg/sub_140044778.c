/*
 * XREFs of sub_140044778 @ 0x140044778
 * Callers:
 *     sub_1400446B0 @ 0x1400446B0 (sub_1400446B0.c)
 *     sub_140095A54 @ 0x140095A54 (sub_140095A54.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_140044778(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  a1[2] = 3LL;
  *a1 = &off_1400F5658;
  result = a1;
  a1[1] = a2;
  return result;
}
