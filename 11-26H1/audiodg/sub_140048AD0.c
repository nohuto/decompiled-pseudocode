/*
 * XREFs of sub_140048AD0 @ 0x140048AD0
 * Callers:
 *     sub_1400488F0 @ 0x1400488F0 (sub_1400488F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

unsigned __int64 __fastcall sub_140048AD0(const __m128i *Src, __int64 a2, const __m128i *a3, __int64 a4)
{
  size_t v4; // rbp
  unsigned int v5; // ebx
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  const __m128i *v8; // rdi
  const __m128i *v9; // rsi
  __int8 *v11; // r12
  __m128i si128; // xmm6
  __m128i v13; // xmm0
  int v14; // ecx
  unsigned __int64 v15; // r14
  __m128i v16; // xmm0
  int v18; // ecx
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r15
  const __m128i *v21; // rbp
  __m128i v22; // xmm6
  int v23; // ebx
  unsigned __int64 v24; // r15
  __m128i v25; // xmm1
  const __m128i *v26; // r8
  __m128i v27; // xmm0
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // r14
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  int v33; // ecx
  int v34; // ecx
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v36; // [rsp+30h] [rbp-78h] BYREF

  v4 = 2 * a2;
  v5 = a4;
  Size[0] = 2 * a2;
  v6 = (2 * (_BYTE)a2) & 0xF;
  v7 = 2 * a4;
  v8 = (const __m128i *)((char *)Src + 2 * a2);
  v9 = a3;
  v11 = &Src->m128i_i8[v6];
  if ( (unsigned __int64)(2 * a4) > 0x10 )
  {
    v19 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
    v20 = v7 & 0xF;
    v21 = (const __m128i *)((char *)a3 + v19);
    memcpy(&v36, v21, (unsigned int)v20);
    v22 = _mm_load_si128(&v36);
    v23 = -1;
    v24 = v20 >> 1;
    if ( v8 == (const __m128i *)v11 )
    {
LABEL_25:
      if ( v6 )
      {
        v30 = v6 >> 1;
        if ( Size[0] < 0x10 )
        {
          memcpy(&v36, Src, Size[0]);
          v31 = _mm_load_si128(&v36);
        }
        else
        {
          v31 = _mm_loadu_si128(Src);
        }
        do
        {
          v32 = _mm_loadu_si128(v9);
          v33 = _mm_cmpestri(v32, v31, 8u, v30);
          if ( _mm_cmpestrc(v32, v31, 8u, v30) && v33 > v23 )
            v23 = v33;
          ++v9;
        }
        while ( v9 != v21 );
        if ( (_DWORD)v24 )
        {
          v34 = _mm_cmpestri(v22, v31, v24, v30);
          if ( _mm_cmpestrc(v22, v31, v24, v30) )
          {
            if ( v34 > v23 )
              return v34;
          }
        }
      }
      return v23;
    }
    else
    {
      while ( 1 )
      {
        v25 = _mm_loadu_si128(--v8);
        v26 = v9;
        do
        {
          v27 = _mm_loadu_si128(v26);
          v28 = _mm_cmpestri(v27, v25, 8u, 8u);
          if ( _mm_cmpestrc(v27, v25, 8u, 8u) && v28 > v23 )
            v23 = v28;
          ++v26;
        }
        while ( v26 != v21 );
        if ( (_DWORD)v24 )
        {
          v29 = _mm_cmpestri(v22, v25, v24, 8u);
          if ( _mm_cmpestrc(v22, v25, v24, 8u) )
          {
            if ( v29 > v23 )
              v23 = v29;
          }
        }
        if ( v23 != -1 )
          return ((unsigned __int64)((char *)v8 - (char *)Src) >> 1) + v23;
        if ( v8 == (const __m128i *)v11 )
          goto LABEL_25;
      }
    }
  }
  else
  {
    memcpy(Size, a3, 2 * a4);
    si128 = _mm_load_si128((const __m128i *)Size);
    if ( v8 == (const __m128i *)v11 )
    {
LABEL_5:
      if ( v6
        && ((v15 = v6 >> 1, v4 < 0x10)
          ? (memcpy(Size, Src, v4), v16 = _mm_load_si128((const __m128i *)Size))
          : (v16 = _mm_loadu_si128(Src)),
            v18 = _mm_cmpestri(si128, v16, v5, v15),
            _mm_cmpestrc(si128, v16, v5, v15)) )
      {
        return v18;
      }
      else
      {
        return -1LL;
      }
    }
    else
    {
      while ( 1 )
      {
        v13 = _mm_loadu_si128(--v8);
        v14 = _mm_cmpestri(si128, v13, v5, 8u);
        if ( _mm_cmpestrc(si128, v13, v5, 8u) )
          return ((unsigned __int64)((char *)v8 - (char *)Src) >> 1) + v14;
        if ( v8 == (const __m128i *)v11 )
          goto LABEL_5;
      }
    }
  }
}
