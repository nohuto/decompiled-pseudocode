/*
 * XREFs of sub_18003CE80 @ 0x18003CE80
 * Callers:
 *     sub_180013960 @ 0x180013960 (sub_180013960.c)
 *     sub_180015D60 @ 0x180015D60 (sub_180015D60.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     GsDriverEntry @ 0x18003C900 (GsDriverEntry.c)
 * Callees:
 *     sub_18003C1E4 @ 0x18003C1E4 (sub_18003C1E4.c)
 *     sub_18003CDEC @ 0x18003CDEC (sub_18003CDEC.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

char __fastcall sub_18003CE80(__int64 a1, __int32 *a2)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  unsigned __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  unsigned __int64 v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+48h] [rbp-18h]
  __m128i si128; // [rsp+50h] [rbp-10h] BYREF

  sub_18003D758();
  v10 = 0LL;
  v11 = 0;
  v8 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191660);
  v9 = 0;
  if ( !sub_18003C1E4(a2, &v8, &si128) )
    return 0;
  v12 = v8;
  v13 = v9;
  v9 = v11;
  v8 = v10;
  sub_18003CDEC(a1, (__int64)&v8, (__int128 *)si128.m128i_i8, (__int64)&v12);
  v4 = *((_OWORD *)a2 + 2);
  v5 = *((_OWORD *)a2 + 3);
  v6 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 240) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(a1 + 224) = v6;
  *(_OWORD *)(a1 + 256) = v4;
  *(_OWORD *)(a1 + 272) = v5;
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a1 + 208);
  return 1;
}
