/*
 * XREFs of sub_14004C278 @ 0x14004C278
 * Callers:
 *     sub_14004EF04 @ 0x14004EF04 (sub_14004EF04.c)
 * Callees:
 *     sub_14004BB20 @ 0x14004BB20 (sub_14004BB20.c)
 *     sub_14004E4C8 @ 0x14004E4C8 (sub_14004E4C8.c)
 */

__int64 __fastcall sub_14004C278(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  unsigned int v10; // edi
  int v12; // [rsp+20h] [rbp-48h]
  _DWORD v13[4]; // [rsp+50h] [rbp-18h] BYREF

  v10 = sub_14004E4C8(a7);
  v13[0] = v10;
  v13[1] = a7;
  v13[2] = 1;
  sub_14004BB20(a1, a2, a3, a6, v12, a6, (__int64)v13, 0LL);
  return v10;
}
