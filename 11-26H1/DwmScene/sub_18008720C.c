/*
 * XREFs of sub_18008720C @ 0x18008720C
 * Callers:
 *     sub_180086A80 @ 0x180086A80 (sub_180086A80.c)
 *     sub_180087584 @ 0x180087584 (sub_180087584.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_18007AB60 @ 0x18007AB60 (sub_18007AB60.c)
 */

__int64 __fastcall sub_18008720C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rsi
  __int64 v5; // rbx
  __int64 *v6; // rax
  bool v7; // zf
  int v8; // eax
  __m128i si128; // xmm1
  __int64 v10; // rcx
  __m128i v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  int v14; // [rsp+38h] [rbp-28h]
  __int128 v15; // [rsp+3Ch] [rbp-24h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]

  v2 = (_QWORD *)sub_18007AB60(a1);
  v3 = sub_180016EFC(v2, &v12);
  v4 = (__int64 *)(a1 + 1816);
  sub_180011F5C((_QWORD *)(a1 + 1816), v3);
  if ( v12.m128i_i64[1] )
    sub_180010EC8(v12.m128i_i64[1]);
  v5 = *v4;
  v6 = sub_18001C8C0(v12.m128i_i64, a1 + 24, (__int64)" DepthSampler");
  sub_1800292C4(v5, (__int64)v6);
  v7 = *(_DWORD *)(a1 + 1944) == 1;
  v8 = 3;
  v13 = 0LL;
  v15 = xmmword_1800FA848;
  v16 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801914A0);
  v17 = 2139095039;
  if ( v7 )
    v8 = 6;
  v10 = *v4;
  v14 = v8;
  v12 = si128;
  return sub_180052460(v10, &v12, 0LL);
}
