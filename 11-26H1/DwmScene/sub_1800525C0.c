/*
 * XREFs of sub_1800525C0 @ 0x1800525C0
 * Callers:
 *     sub_18006B530 @ 0x18006B530 (sub_18006B530.c)
 * Callees:
 *     sub_180029420 @ 0x180029420 (sub_180029420.c)
 *     sub_180052864 @ 0x180052864 (sub_180052864.c)
 */

__int64 __fastcall sub_1800525C0(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  sub_180052864(a1 + 128, &v5);
  v5 = a2;
  return sub_180029420((__int64 *)(a1 + 80), &v5);
}
