/*
 * XREFs of sub_180086A80 @ 0x180086A80
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 *     sub_180087164 @ 0x180087164 (sub_180087164.c)
 *     sub_18008720C @ 0x18008720C (sub_18008720C.c)
 */

__int64 __fastcall sub_180086A80(__int64 a1)
{
  __int64 *v2; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __m128i si128; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+38h] [rbp-28h]
  __int128 v12; // [rsp+3Ch] [rbp-24h]
  int v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+50h] [rbp-10h]

  sub_180087164(a1);
  *(_BYTE *)(a1 + 465) |= 2u;
  sub_18008720C(a1);
  v2 = (__int64 *)(a1 + 1896);
  if ( !*(_QWORD *)(a1 + 1896) )
  {
    v3 = (_QWORD *)sub_18007AB60(a1);
    v4 = sub_180016EFC(v3, &si128);
    sub_180011F5C((_QWORD *)(a1 + 1896), v4);
    if ( si128.m128i_i64[1] )
      sub_180010EC8(si128.m128i_i64[1]);
    v5 = *v2;
    v6 = sub_18001C8C0(si128.m128i_i64, a1 + 24, (__int64)" ColorSampler");
    sub_1800292C4(v5, (__int64)v6);
  }
  v7 = *v2;
  v10 = 0LL;
  v12 = xmmword_1800FA848;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191470);
  v14 = 2139095039;
  v11 = 7;
  return sub_180052460(v7, &si128, 0LL);
}
