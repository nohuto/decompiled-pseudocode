/*
 * XREFs of sub_18003A2F4 @ 0x18003A2F4
 * Callers:
 *     sub_18003984C @ 0x18003984C (sub_18003984C.c)
 *     sub_180039C48 @ 0x180039C48 (sub_180039C48.c)
 *     sub_180039D58 @ 0x180039D58 (sub_180039D58.c)
 *     sub_18003A1B8 @ 0x18003A1B8 (sub_18003A1B8.c)
 *     sub_18003A25C @ 0x18003A25C (sub_18003A25C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003A2F4(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; i += 2 )
  {
    *a3 = 0LL;
    a3[1] = 0LL;
    *a3 = *i;
    a3[1] = i[1];
    a3 += 2;
    *i = 0LL;
    i[1] = 0LL;
  }
  return a3;
}
