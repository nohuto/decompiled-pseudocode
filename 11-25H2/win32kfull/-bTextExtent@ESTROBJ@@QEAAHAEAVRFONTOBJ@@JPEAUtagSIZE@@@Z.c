/*
 * XREFs of ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x140176E3C
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  __int64 v6; // rax
  LONG v9; // edx
  __m128i v10; // xmm0
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  int v20; // r9d
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v26; // eax
  LONG cx; // edx
  LONG v28; // edi
  __m128i v29; // xmm0
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v6 = *((_QWORD *)this + 7);
  if ( (*((_DWORD *)this + 58) & 8) != 0 )
  {
    v28 = 0;
    v29 = (__m128i)COERCE_UNSIGNED_INT((float)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)));
    *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 * *(float *)(*(_QWORD *)v6 + 404LL);
    v30 = _mm_cvtsi128_si32(v29);
    v31 = (unsigned __int8)(v30 >> 23) - 118;
    if ( v31 <= 40 )
    {
      v32 = v30 & 0x7FFFFFLL | 0x800000;
      v33 = v31 < 0 ? v32 >> (118 - (unsigned __int8)(v30 >> 23)) : v32 << v31;
      v34 = (v33 + 0x80000000LL) >> 32;
      v28 = -(int)v34;
      if ( v30 >= 0 )
        v28 = v34;
    }
    a4->cx = v28;
    v16 = 0LL;
    v18 = _mm_cvtsi32_si128(*((_DWORD *)this + 25) - *((_DWORD *)this + 27));
    v17 = **((_QWORD **)this + 7);
  }
  else
  {
    v9 = 0;
    v10 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 28));
    *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * *(float *)(*(_QWORD *)v6 + 404LL);
    v11 = _mm_cvtsi128_si32(v10);
    v12 = (unsigned __int8)(v11 >> 23) - 118;
    if ( v12 <= 40 )
    {
      v13 = v11 & 0x7FFFFF | 0x800000LL;
      v14 = v12 < 0 ? v13 >> (118 - (unsigned __int8)(v11 >> 23)) : v13 << v12;
      v15 = (v14 + 0x80000000LL) >> 32;
      v9 = -(int)v15;
      if ( v11 >= 0 )
        v9 = v15;
    }
    a4->cx = v9;
    v16 = 0LL;
    v17 = **((_QWORD **)this + 7);
    v18 = _mm_cvtsi32_si128(16 * *(_DWORD *)(v17 + 348));
  }
  v19 = (__m128i)_mm_cvtepi32_ps(v18);
  *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 * *(float *)(v17 + 424);
  v20 = _mm_cvtsi128_si32(v19);
  v21 = (unsigned __int8)(v20 >> 23);
  if ( v21 <= 0x9E )
  {
    v22 = v20 & 0x7FFFFF | 0x800000LL;
    if ( v21 < 0x76 )
    {
      LOBYTE(v21) = 118 - v21;
      v23 = v22 >> v21;
    }
    else
    {
      v21 -= 118;
      v23 = v22 << v21;
    }
    v24 = (v23 + 0x80000000LL) >> 32;
    v16 = (unsigned int)-(int)v24;
    if ( v20 >= 0 )
      v16 = (unsigned int)v24;
  }
  a4->cy = v16;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v21, v16) + 96) + 20364LL) )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 208LL) == 1 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)a2 + 724LL);
      if ( (v26 & 0x10) == 0 && (v26 & 4) == 0 && (v26 & 0x200000) != 0 && (a3 == 900 || a3 == 2700) )
      {
        cx = a4->cx;
        a4->cx = a4->cy;
        a4->cy = cx;
      }
    }
  }
  return 1LL;
}
