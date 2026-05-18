/*
 * XREFs of sub_18003A014 @ 0x18003A014
 * Callers:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 *     sub_18003984C @ 0x18003984C (sub_18003984C.c)
 *     sub_180039D58 @ 0x180039D58 (sub_180039D58.c)
 *     sub_180039E8C @ 0x180039E8C (sub_180039E8C.c)
 * Callees:
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 */

_QWORD *__fastcall sub_18003A014(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; sub_180011F5C(a3, i) )
  {
    i -= 2;
    a3 -= 2;
  }
  return a3;
}
