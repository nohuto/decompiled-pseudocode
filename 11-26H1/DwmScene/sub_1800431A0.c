/*
 * XREFs of sub_1800431A0 @ 0x1800431A0
 * Callers:
 *     sub_18005D6DC @ 0x18005D6DC (sub_18005D6DC.c)
 * Callees:
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_18007E470 @ 0x18007E470 (sub_18007E470.c)
 */

__int64 __fastcall sub_1800431A0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a1 + 120) )
    sub_18007E470();
  v5 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v5);
}
