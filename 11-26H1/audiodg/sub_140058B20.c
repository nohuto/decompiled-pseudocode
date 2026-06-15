/*
 * XREFs of sub_140058B20 @ 0x140058B20
 * Callers:
 *     sub_140056B1C @ 0x140056B1C (sub_140056B1C.c)
 *     sub_1400582D0 @ 0x1400582D0 (sub_1400582D0.c)
 *     sub_140058824 @ 0x140058824 (sub_140058824.c)
 *     sub_14007C690 @ 0x14007C690 (sub_14007C690.c)
 *     sub_14007E9FC @ 0x14007E9FC (sub_14007E9FC.c)
 *     sub_14009D86C @ 0x14009D86C (sub_14009D86C.c)
 *     sub_14009D9B0 @ 0x14009D9B0 (sub_14009D9B0.c)
 *     sub_14009DAF4 @ 0x14009DAF4 (sub_14009DAF4.c)
 *     sub_14009DC38 @ 0x14009DC38 (sub_14009DC38.c)
 *     sub_14009DD7C @ 0x14009DD7C (sub_14009DD7C.c)
 *     sub_14009DEC0 @ 0x14009DEC0 (sub_14009DEC0.c)
 * Callees:
 *     sub_140058AF0 @ 0x140058AF0 (sub_140058AF0.c)
 *     sub_140058C44 @ 0x140058C44 (sub_140058C44.c)
 */

char __fastcall sub_140058B20(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  char result; // al

  result = sub_140058AF0(a1, a3);
  if ( result )
  {
    sub_140058C44(a1[1], (a1[2] - a1[1]) & -(__int64)(a1[1] < a1[2]), a2, a3);
    a1[1] += a3;
    return 1;
  }
  return result;
}
