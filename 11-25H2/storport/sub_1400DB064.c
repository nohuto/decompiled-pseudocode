/*
 * XREFs of sub_1400DB064 @ 0x1400DB064
 * Callers:
 *     sub_1400D8D30 @ 0x1400D8D30 (sub_1400D8D30.c)
 *     sub_1400D9540 @ 0x1400D9540 (sub_1400D9540.c)
 *     sub_140112EA4 @ 0x140112EA4 (sub_140112EA4.c)
 *     sub_140112F9C @ 0x140112F9C (sub_140112F9C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400DB064(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return -1;
  if ( a1 > 0x20Fu )
    return -2;
  if ( a1 <= 0x111u )
    return 0;
  return a1 - 17;
}
