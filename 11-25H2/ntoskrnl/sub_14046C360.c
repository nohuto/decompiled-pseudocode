/*
 * XREFs of sub_14046C360 @ 0x14046C360
 * Callers:
 *     sub_1407F0D20 @ 0x1407F0D20 (sub_1407F0D20.c)
 *     sub_1409E1A4C @ 0x1409E1A4C (sub_1409E1A4C.c)
 * Callees:
 *     sub_14046C3D0 @ 0x14046C3D0 (sub_14046C3D0.c)
 *     sub_14046C430 @ 0x14046C430 (sub_14046C430.c)
 */

__int64 __fastcall sub_14046C360(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v12 = 0;
  v8 = a5 - a3;
  v10 = a2;
  v11 = a1;
  v15 = a3;
  v12 = sub_14046C3D0(&v10, (unsigned int)(a5 - a3));
  v13 = v8 + a7;
  v14 = v12;
  sub_14046C430(&v10, a6 - a5, a4);
  return 0LL;
}
