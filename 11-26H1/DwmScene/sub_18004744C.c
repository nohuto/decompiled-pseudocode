/*
 * XREFs of sub_18004744C @ 0x18004744C
 * Callers:
 *     sub_180046150 @ 0x180046150 (sub_180046150.c)
 *     sub_1800461F4 @ 0x1800461F4 (sub_1800461F4.c)
 *     sub_180046298 @ 0x180046298 (sub_180046298.c)
 *     sub_18004633C @ 0x18004633C (sub_18004633C.c)
 *     sub_1800463D8 @ 0x1800463D8 (sub_1800463D8.c)
 *     sub_18004647C @ 0x18004647C (sub_18004647C.c)
 *     sub_180053C4C @ 0x180053C4C (sub_180053C4C.c)
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 *     sub_180082258 @ 0x180082258 (sub_180082258.c)
 *     sub_18008286C @ 0x18008286C (sub_18008286C.c)
 *     sub_180084110 @ 0x180084110 (sub_180084110.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004744C(int a1)
{
  _DWORD v2[15]; // [rsp+0h] [rbp-70h]
  __m128i si128; // [rsp+3Ch] [rbp-34h]
  int v4; // [rsp+4Ch] [rbp-24h]
  int v5; // [rsp+50h] [rbp-20h]
  int v6; // [rsp+54h] [rbp-1Ch]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+60h] [rbp-10h]

  v2[0] = 0;
  v2[1] = 4;
  v2[2] = 4;
  v2[3] = 4;
  v2[5] = 12;
  v2[6] = 16;
  v2[11] = 16;
  v2[10] = 12;
  v2[4] = 8;
  v2[13] = 1;
  v8 = 1;
  v2[7] = 4;
  v2[8] = 4;
  v2[9] = 8;
  v2[12] = 2;
  v2[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801914D0);
  v4 = 2;
  v5 = 4;
  v6 = 8;
  v7 = 4;
  v9 = 2;
  return (unsigned int)v2[a1];
}
