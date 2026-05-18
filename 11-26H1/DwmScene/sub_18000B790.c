/*
 * XREFs of sub_18000B790 @ 0x18000B790
 * Callers:
 *     sub_18000BB70 @ 0x18000BB70 (sub_18000BB70.c)
 * Callees:
 *     sub_18000B040 @ 0x18000B040 (sub_18000B040.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 *     memcpy @ 0x18000CED0 (memcpy.c)
 */

const __m128i *__fastcall sub_18000B790(const __m128i *a1, const __m128i *a2, const __m128i *a3, size_t a4)
{
  const __m128i *v7; // rbx
  unsigned __int64 v9; // rcx
  __m128i v10; // xmm6
  __m128i v11; // xmm0
  int v12; // ecx
  unsigned int v13; // esi
  __m128i v14; // xmm0
  int v15; // ecx
  __m128 v16; // xmm6
  const __m128i *v17; // rbp
  const __m128i *v18; // rsi
  __m128i v19; // xmm0
  int v20; // ecx
  __m128i v21; // xmm0
  const __m128i *v22; // rdx
  __int8 v23; // r8
  signed __int64 v24; // r9
  __int8 *v25; // rcx
  __m128i v26; // [rsp+20h] [rbp-58h] BYREF

  v7 = a1;
  if ( !a4 )
    return a1;
  if ( a4 == 1 )
    return sub_18000B040(a1, a2, a3->m128i_i8[0]);
  v9 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)v7 >= a4 )
  {
    if ( (dword_1801C7B44 & 4) != 0 && v9 >= 0x10 )
    {
      if ( a4 > 0x10 )
      {
        v16 = (__m128)_mm_loadu_si128(a3);
        v17 = a3 + 1;
        v18 = (const __m128i *)((char *)a2 - a4);
        while ( 1 )
        {
          v19 = _mm_loadu_si128(v7);
          v20 = _mm_cmpestri((__m128i)v16, v19, 0x10u, 0x10u);
          if ( _mm_cmpestrc((__m128i)v16, v19, 0x10u, 0x10u) )
          {
            if ( !v20 )
              goto LABEL_23;
            v7 = (const __m128i *)((char *)v7 + v20);
            if ( v7 > v18 )
              return a2;
            v21 = (__m128i)_mm_xor_ps((__m128)_mm_loadu_si128(v7), v16);
            if ( _mm_testz_si128(v21, v21) )
            {
LABEL_23:
              if ( !memcmp(&v7[1], v17, a4 - 16) )
                return v7;
            }
            v7 = (const __m128i *)((char *)v7 + 1);
          }
          else
          {
            ++v7;
          }
          if ( v7 > v18 )
            return a2;
        }
      }
      memcpy(&v26, a3, a4);
      v10 = _mm_load_si128(&v26);
      do
      {
        v11 = _mm_loadu_si128(v7);
        v12 = _mm_cmpestri(v10, v11, a4, 0x10u);
        if ( _mm_cmpestrc(v10, v11, a4, 0x10u) )
        {
          v7 = (const __m128i *)((char *)v7 + v12);
          if ( v12 <= 16 - (int)a4 )
            return v7;
        }
        else
        {
          ++v7;
        }
      }
      while ( v7 <= &a2[-1] );
      v13 = (_DWORD)a2 - (_DWORD)v7;
      if ( a2 != v7 )
      {
        memcpy(&v26, v7, (char *)a2 - (char *)v7);
        v14 = _mm_load_si128(&v26);
        v15 = _mm_cmpestri(v10, v14, a4, v13);
        if ( _mm_cmpestrc(v10, v14, a4, v13) )
          return (const __m128i *)((char *)v7 + v15);
      }
    }
    else
    {
      v22 = (const __m128i *)((char *)a2 + 1 - a4);
      if ( v7 != v22 )
      {
        v23 = a3->m128i_i8[0];
        v24 = (char *)a3 - (char *)v7;
        do
        {
          if ( v7->m128i_i8[0] == v23 )
          {
            v25 = &v7->m128i_i8[1];
            while ( *v25 == v25[v24] )
            {
              if ( ++v25 - (__int8 *)v7 == a4 )
                return v7;
            }
          }
          v7 = (const __m128i *)((char *)v7 + 1);
          --v24;
        }
        while ( v7 != v22 );
      }
    }
  }
  return a2;
}
