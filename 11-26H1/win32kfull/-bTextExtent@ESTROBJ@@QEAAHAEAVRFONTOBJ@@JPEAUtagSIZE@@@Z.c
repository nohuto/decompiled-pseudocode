/*
 * XREFs of ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1401A63B0
 * Callers:
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ESTROBJ::bTextExtent(ESTROBJ *this, struct RFONTOBJ *a2, int a3, struct tagSIZE *a4)
{
  __int64 v5; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __m128i v10; // xmm0
  int v11; // r10d
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  LONG cx; // edx
  __int64 v25; // r10
  __m128i v26; // xmm0
  int v27; // r9d
  unsigned int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax

  v5 = *((_QWORD *)this + 7);
  v8 = 118LL;
  if ( (*((_DWORD *)this + 58) & 8) != 0 )
  {
    LODWORD(v25) = 0;
    v26 = (__m128i)COERCE_UNSIGNED_INT((float)(*((_DWORD *)this + 26) - *((_DWORD *)this + 24)));
    *(float *)v26.m128i_i32 = *(float *)v26.m128i_i32 * *(float *)(*(_QWORD *)v5 + 404LL);
    v27 = _mm_cvtsi128_si32(v26);
    v28 = (unsigned __int8)(v27 >> 23);
    if ( v28 <= 0x9E )
    {
      v29 = v27 & 0x7FFFFFLL | 0x800000;
      v30 = v28 < 0x76 ? v29 >> (118 - (unsigned __int8)v28) : v29 << ((unsigned __int8)v28 - 118);
      v25 = (v30 + 0x80000000LL) >> 32;
      if ( v27 < 0 )
        LODWORD(v25) = -(int)v25;
    }
    a4->cx = v25;
    v15 = 0LL;
    v17 = _mm_cvtsi32_si128(*((_DWORD *)this + 25) - *((_DWORD *)this + 27));
    v16 = **((_QWORD **)this + 7);
  }
  else
  {
    LODWORD(v9) = 0;
    v10 = (__m128i)COERCE_UNSIGNED_INT((float)*((int *)this + 28));
    *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 * *(float *)(*(_QWORD *)v5 + 404LL);
    v11 = _mm_cvtsi128_si32(v10);
    v12 = (unsigned __int8)(v11 >> 23);
    if ( v12 <= 0x9E )
    {
      v13 = v11 & 0x7FFFFFLL | 0x800000;
      v14 = v12 < 0x76 ? v13 >> (118 - (unsigned __int8)v12) : v13 << ((unsigned __int8)v12 - 118);
      v9 = (v14 + 0x80000000LL) >> 32;
      if ( v11 < 0 )
        LODWORD(v9) = -(int)v9;
    }
    a4->cx = v9;
    v15 = 0LL;
    v16 = **((_QWORD **)this + 7);
    v17 = _mm_cvtsi32_si128(16 * *(_DWORD *)(v16 + 348));
  }
  v18 = (__m128i)_mm_cvtepi32_ps(v17);
  *(float *)v18.m128i_i32 = *(float *)v18.m128i_i32 * *(float *)(v16 + 424);
  v19 = _mm_cvtsi128_si32(v18);
  v20 = (unsigned __int8)(v19 >> 23);
  if ( (unsigned int)v20 <= 0x9E )
  {
    v21 = v19 & 0x7FFFFFLL | 0x800000;
    if ( (unsigned int)v20 < 0x76 )
    {
      v8 = (unsigned int)(118 - v20);
      LOBYTE(v20) = v8;
      v22 = v21 >> v8;
    }
    else
    {
      v20 = (unsigned int)(v20 - 118);
      v22 = v21 << v20;
    }
    v15 = (v22 + 0x80000000LL) >> 32;
    if ( v19 < 0 )
      v15 = (unsigned int)-(int)v15;
  }
  a4->cy = v15;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v20, v15, v8) + 96) + 20340LL)
    && *(_DWORD *)(*(_QWORD *)a2 + 208LL) == 1
    && (*(_DWORD *)(*(_QWORD *)a2 + 724LL) & 0x200014) == 0x200000
    && (a3 == 900 || a3 == 2700) )
  {
    cx = a4->cx;
    a4->cx = a4->cy;
    a4->cy = cx;
  }
  return 1LL;
}
