/*
 * XREFs of ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@@Z @ 0x1400BB204
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z @ 0x1400BAEEC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVUDCOBJ@@QEAU_POINTL@@@Z.c)
 * Callees:
 *     ?lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z @ 0x1400BADDC (-lGetDefaultWorldHeight@@YAJAEAVUDCOBJ@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x1401624F4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140164E64 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

void __fastcall vGetNtoW(struct MATRIX *a1, struct tagLOGFONTW *a2, struct IFIOBJ *a3, struct UDCOBJ *a4)
{
  LONG lfHeight; // eax
  bool v9; // cc
  float v10; // xmm0_4
  float v11; // xmm1_4
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 lfWidth; // rcx
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm7_4
  unsigned int *v18; // rbx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v20; // rcx
  int v21; // esi
  unsigned int v22; // eax
  int v23; // eax
  unsigned int lfOrientation; // edx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // xmm0_4
  unsigned int v29; // eax
  __int64 v30; // rcx
  int v31; // esi
  unsigned int v32; // eax
  int v33; // eax
  __m128i v34; // xmm0
  float v35; // xmm9_4
  float v36; // eax
  float v37; // xmm9_4
  int v38; // xmm0_4
  float v39; // xmm6_4
  float v40; // xmm6_4
  unsigned int *v41; // [rsp+90h] [rbp+8h] BYREF
  struct MATRIX *v42; // [rsp+98h] [rbp+10h] BYREF

  lfHeight = a2->lfHeight;
  v9 = a2->lfHeight <= 0;
  if ( !a2->lfHeight )
  {
    lfHeight = lGetDefaultWorldHeight(a4);
    v9 = lfHeight <= 0;
  }
  if ( !v9 )
  {
    v12 = _mm_cvtsi32_si128(lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 60LL) + *(__int16 *)(*(_QWORD *)a3 + 62LL));
    goto LABEL_6;
  }
  v10 = 0.0;
  v11 = 0.0;
  if ( lfHeight < 0 )
  {
    v12 = _mm_cvtsi32_si128(-lfHeight);
    v13 = _mm_cvtsi32_si128(*(__int16 *)(*(_QWORD *)a3 + 56LL));
LABEL_6:
    LODWORD(v11) = _mm_cvtepi32_ps(v13).m128_u32[0];
    LODWORD(v10) = _mm_cvtepi32_ps(v12).m128_u32[0];
  }
  lfWidth = (unsigned int)a2->lfWidth;
  v15 = v10 / v11;
  v16 = v15;
  if ( (_DWORD)lfWidth && *(__int16 *)(*(_QWORD *)a3 + 76LL) >= 0 )
  {
    if ( (int)lfWidth < 0 )
      lfWidth = (unsigned int)-(int)lfWidth;
    v17 = (float)(int)lfWidth / (float)*(__int16 *)(*(_QWORD *)a3 + 76LL);
  }
  else
  {
    v17 = v15;
  }
  v18 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v41 = v18;
  if ( v18 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(lfWidth);
    v20 = v18[10];
    if ( (v20 & 1) != 0 && (v20 = (CurrentThreadDpiAwarenessContext & 0xF) - 1, (unsigned int)v20 > 1) )
      v21 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    else
      v21 = v18[540];
    v22 = W32GetCurrentThreadDpiAwarenessContext(v20);
    if ( (v18[10] & 1) != 0 && (v22 & 0xF) - 1 > 1 )
      v23 = (v22 >> 8) & 0x1FF;
    else
      v23 = v18[541];
    if ( v21 != v23 )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v41);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v41);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  lfOrientation = a2->lfOrientation;
  v25 = 3600 - lfOrientation;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
    v25 = lfOrientation;
  v26 = lNormAngle(v25);
  if ( v26 )
  {
    switch ( v26 )
    {
      case 900:
        *((float *)a1 + 1) = v17;
        *((float *)a1 + 2) = v15;
        v27 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v27 + 340) & 0x40) == 0 )
          *((_DWORD *)a1 + 1) ^= _xmm;
        *((_DWORD *)a1 + 2) ^= _xmm;
        break;
      case 1800:
        *(float *)a1 = v17;
        v38 = *(_DWORD *)a1;
        *((float *)a1 + 3) = v16;
        *(_DWORD *)a1 = v38 ^ _xmm;
        v27 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v27 + 340) & 0x40) == 0 )
          break;
        v28 = *((_DWORD *)a1 + 3) ^ _xmm;
        goto LABEL_23;
      case 2700:
        *((float *)a1 + 1) = v17;
        *((float *)a1 + 2) = v15;
        v27 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v27 + 340) & 0x40) != 0 )
          *((_DWORD *)a1 + 1) ^= _xmm;
        break;
      default:
        v34 = (__m128i)COERCE_UNSIGNED_INT((float)v26);
        *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 / 10.0;
        v35 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v34)));
        v36 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v34)));
        *(float *)v34.m128i_i32 = v35 * v17;
        v37 = v35 * v16;
        *(_DWORD *)a1 = v34.m128i_i32[0];
        *((float *)a1 + 3) = v37;
        *((float *)a1 + 1) = v36 * v17;
        *((_DWORD *)a1 + 2) = COERCE_UNSIGNED_INT(v36 * v16) ^ _xmm;
        v27 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v27 + 340) & 0x40) == 0 )
        {
          *((_DWORD *)a1 + 1) = COERCE_UNSIGNED_INT(v36 * v17) ^ _xmm;
          *((_DWORD *)a1 + 3) = LODWORD(v37) ^ _xmm;
        }
        break;
    }
  }
  else
  {
    *(float *)a1 = v17;
    *((float *)a1 + 3) = v15;
    v27 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
    if ( (*(_DWORD *)(v27 + 340) & 0x40) == 0 )
    {
      v28 = *((_DWORD *)a1 + 3) ^ _xmm;
LABEL_23:
      *((_DWORD *)a1 + 3) = v28;
    }
  }
  v29 = W32GetCurrentThreadDpiAwarenessContext(v27);
  v30 = v18[10];
  if ( (v30 & 1) != 0 && (v30 = (v29 & 0xF) - 1, (unsigned int)v30 > 1) )
    v31 = (v29 >> 8) & 0x1FF;
  else
    v31 = v18[540];
  v32 = W32GetCurrentThreadDpiAwarenessContext(v30);
  if ( (v18[10] & 1) != 0 && (v32 & 0xF) - 1 > 1 )
    v33 = (v32 >> 8) & 0x1FF;
  else
    v33 = v18[541];
  if ( v31 != v33 )
  {
    v39 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v41);
    v40 = v39 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v41);
    if ( a2->lfWidth )
      *((float *)a1 + 1) = *((float *)a1 + 1) / v40;
    else
      *(float *)a1 = v40 * *(float *)a1;
    *((float *)a1 + 2) = v40 * *((float *)a1 + 2);
  }
  v42 = a1;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v42);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v42, 8u);
}
