/*
 * XREFs of sub_18008DBE8 @ 0x18008DBE8
 * Callers:
 *     sub_18008DA30 @ 0x18008DA30 (sub_18008DA30.c)
 *     sub_18008DBE8 @ 0x18008DBE8 (sub_18008DBE8.c)
 * Callees:
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_18008D6E4 @ 0x18008D6E4 (sub_18008D6E4.c)
 *     sub_18008DBE8 @ 0x18008DBE8 (sub_18008DBE8.c)
 */

void __fastcall sub_18008DBE8(int a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 *v10; // rax
  __m128 v11; // xmm3
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __int64 *v14; // rsi
  __int64 *i; // rbx
  __int64 v16; // xmm0_8
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+38h] [rbp-20h]
  float v20; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  sub_18003D718((__int64)a5);
  if ( (v5[56] & a2[66]) == a2[65] )
  {
    sub_18003D718((__int64)v5);
    if ( (v5[56] & a2[64]) == a2[63] )
    {
      v10 = (unsigned __int64 *)sub_18003B950((__int64)v5, (__int64)&v18);
      v11 = _mm_sub_ps(
              _mm_movelh_ps((__m128)*v10, (__m128)*((unsigned int *)v10 + 2)),
              _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
      v12 = _mm_mul_ps(v11, v11);
      v13 = _mm_shuffle_ps(v12, v12, 153);
      v20 = (float)(v12.m128_f32[0] + v13.m128_f32[0]) + _mm_shuffle_ps(v13, v13, 85).m128_f32[0];
      sub_18008D6E4(a4, &v20, (__int64 *)&a5);
      v5 = a5;
    }
    sub_18003D718((__int64)v5);
    v14 = (__int64 *)v5[5];
    for ( i = (__int64 *)v5[4]; i != v14; i += 2 )
    {
      v16 = *a3;
      v19 = *((_DWORD *)a3 + 2);
      v17 = *i;
      v18 = v16;
      sub_18008DBE8(a1, (_DWORD)a2, (unsigned int)&v18, a4, v17);
    }
  }
}
