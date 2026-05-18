/*
 * XREFs of sub_1800593B4 @ 0x1800593B4
 * Callers:
 *     sub_18001B41C @ 0x18001B41C (sub_18001B41C.c)
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 *     sub_1800594CC @ 0x1800594CC (sub_1800594CC.c)
 *     sub_18005A4A4 @ 0x18005A4A4 (sub_18005A4A4.c)
 *     sub_180086D20 @ 0x180086D20 (sub_180086D20.c)
 *     sub_18009BF04 @ 0x18009BF04 (sub_18009BF04.c)
 * Callees:
 *     sub_18005AF08 @ 0x18005AF08 (sub_18005AF08.c)
 *     sub_18005B198 @ 0x18005B198 (sub_18005B198.c)
 *     sub_18005B3C0 @ 0x18005B3C0 (sub_18005B3C0.c)
 *     sub_18005B508 @ 0x18005B508 (sub_18005B508.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 */

__int64 __fastcall sub_1800593B4(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  __int64 v5; // r14
  char v6; // si
  char v7; // di
  char v8; // al
  char v9; // r10

  v3 = a3;
  v5 = a2;
  v6 = sub_18005B5C4();
  v7 = sub_18005B3C0(a1);
  v8 = sub_18005B198(a1);
  v9 = v8;
  if ( v7 || v8 )
    sub_18005B508(a1);
  if ( v6 || v7 || v9 )
    sub_18005AF08(a1);
  return a1 + 548 + ((v3 + 4 * v5) << 6);
}
