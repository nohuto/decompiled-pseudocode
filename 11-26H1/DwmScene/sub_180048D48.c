/*
 * XREFs of sub_180048D48 @ 0x180048D48
 * Callers:
 *     sub_180041700 @ 0x180041700 (sub_180041700.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003FE98 @ 0x18003FE98 (sub_18003FE98.c)
 *     sub_1800412E0 @ 0x1800412E0 (sub_1800412E0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180048D48(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  __m128i si128; // xmm6
  __m128i v7; // [rsp+28h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-19h]
  __m128i v9; // [rsp+40h] [rbp-11h] BYREF
  __int64 v10; // [rsp+50h] [rbp-1h]
  __int128 v11; // [rsp+58h] [rbp+7h] BYREF
  __int128 v12; // [rsp+78h] [rbp+27h]
  double v13[4]; // [rsp+88h] [rbp+37h]

  sub_180012A94(a1 + 56, &v7);
  sub_18003BCCC(v7.m128i_i64[0], &v11);
  if ( v7.m128i_i64[1] )
    sub_180010EC8(v7.m128i_i64[1]);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191660);
  v7 = si128;
  v8 = 0x3F8000003F800000LL;
  sub_1800412E0((unsigned __int64 *)(a1 + 88), (__int64)&v7, *(double *)&v12, v13[0]);
  if ( *a3 )
  {
    v9 = si128;
    v10 = 0x3F8000003F800000LL;
    sub_18003FE98((__int64)&v9, a2, (unsigned __int64 *)&v7);
    *(__m128i *)a2 = v9;
    a2[2] = v10;
  }
  else
  {
    *(__m128i *)a2 = v7;
    a2[2] = v8;
    *a3 = 1;
  }
}
