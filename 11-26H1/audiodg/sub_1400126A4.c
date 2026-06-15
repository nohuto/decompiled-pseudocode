/*
 * XREFs of sub_1400126A4 @ 0x1400126A4
 * Callers:
 *     sub_140067768 @ 0x140067768 (sub_140067768.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 *     sub_140068AA8 @ 0x140068AA8 (sub_140068AA8.c)
 * Callees:
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 */

_QWORD *__fastcall sub_1400126A4(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = 0LL;
  a1[2] = 0LL;
  if ( a2 )
    sub_1400115FC(a1, a2);
  a1[1] = a3;
  return a1;
}
