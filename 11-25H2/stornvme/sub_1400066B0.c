/*
 * XREFs of sub_1400066B0 @ 0x1400066B0
 * Callers:
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_140025944 @ 0x140025944 (sub_140025944.c)
 *     sub_140028EEC @ 0x140028EEC (sub_140028EEC.c)
 *     sub_14002910C @ 0x14002910C (sub_14002910C.c)
 *     sub_140029394 @ 0x140029394 (sub_140029394.c)
 *     sub_14002DDDC @ 0x14002DDDC (sub_14002DDDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400066B0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __m128i v5; // xmm5
  __int64 result; // rax
  unsigned int v7; // edi
  __int64 PhysicalAddress; // rax
  unsigned int v9; // edx
  unsigned int v10; // r9d
  __m128i si128; // xmm6
  unsigned int v12; // r11d
  __m128i v13; // xmm4
  __int64 v14; // rax
  __m128i v15; // xmm2
  __int64 v16; // rax
  __int64 v17; // r11
  int v18; // [rsp+50h] [rbp+18h] BYREF

  v5 = _mm_unpacklo_epi64((__m128i)a3, (__m128i)a3);
  if ( (a3 & 0xFFF) != 0 || !a4 )
    return 0LL;
  *(_QWORD *)(a2 + 4120) = a3;
  if ( a4 > 0x1000 )
  {
    v7 = (a4 + 4095) >> 12;
    if ( v7 == 2 )
    {
      PhysicalAddress = a3 + 4096;
    }
    else
    {
      v9 = 0;
      v10 = v7 - 1;
      v18 = 0;
      if ( v7 != 1 )
      {
        if ( v10 < 8 )
          goto LABEL_13;
        si128 = _mm_load_si128((const __m128i *)&xmmword_14003D5A0);
        v12 = 4;
        do
        {
          v13 = _mm_loadl_epi64(&qword_14003D590);
          v14 = v9;
          v15 = _mm_cvtsi32_si128(v9);
          v9 += 8;
          *(__m128i *)(a2 + 8 * v14) = _mm_add_epi64(
                                         _mm_unpacklo_epi32(
                                           _mm_add_epi32(
                                             _mm_slli_epi32(_mm_add_epi32(_mm_shuffle_epi32(v15, 0), v13), 0xCu),
                                             _mm_move_epi64(si128)),
                                           (__m128i)0LL),
                                         v5);
          *(__m128i *)(a2 + 8LL * (v12 - 2)) = _mm_add_epi64(
                                                 _mm_unpacklo_epi32(
                                                   _mm_add_epi32(
                                                     _mm_slli_epi32(
                                                       _mm_add_epi32(
                                                         _mm_shuffle_epi32(_mm_cvtsi32_si128(v12 - 2), 0),
                                                         v13),
                                                       0xCu),
                                                     _mm_move_epi64(si128)),
                                                   (__m128i)0LL),
                                                 v5);
          *(__m128i *)(a2 + 8LL * v12) = _mm_add_epi64(
                                           _mm_unpacklo_epi32(
                                             _mm_add_epi32(
                                               _mm_slli_epi32(
                                                 _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v12), 0), v13),
                                                 0xCu),
                                               _mm_move_epi64(si128)),
                                             (__m128i)0LL),
                                           v5);
          v16 = v12 + 2;
          v12 += 8;
          *(__m128i *)(a2 + 8 * v16) = _mm_add_epi64(
                                         _mm_unpacklo_epi32(
                                           _mm_add_epi32(
                                             _mm_slli_epi32(
                                               _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v16), 0), v13),
                                               0xCu),
                                             _mm_move_epi64(si128)),
                                           (__m128i)0LL),
                                         v5);
        }
        while ( v9 < (v10 & 0xFFFFFFF8) );
        if ( v9 < v10 )
        {
LABEL_13:
          v17 = a2 + 8LL * v9;
          do
          {
            ++v9;
            v17 += 8LL;
            *(_QWORD *)(v17 - 8) = a3 + (v9 << 12);
          }
          while ( v9 < v10 );
        }
      }
      PhysicalAddress = StorPortGetPhysicalAddress(a1, 0LL, a2, &v18);
    }
    *(_QWORD *)(a2 + 4128) = PhysicalAddress;
    return v7;
  }
  else
  {
    result = 1LL;
    *(_QWORD *)(a2 + 4128) = 0LL;
  }
  return result;
}
