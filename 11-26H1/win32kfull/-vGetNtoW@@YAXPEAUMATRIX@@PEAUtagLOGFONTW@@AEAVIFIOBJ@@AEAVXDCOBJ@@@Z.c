/*
 * XREFs of ?vGetNtoW@@YAXPEAUMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@@Z @ 0x1400C1D08
 * Callers:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z @ 0x1400C19DC (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@AEAVXDCOBJ@@QEAU_POINTL@@@Z.c)
 * Callees:
 *     ?lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z @ 0x14010CA0C (-lGetDefaultWorldHeight@@YAJAEAVXDCOBJ@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x14010F6B4 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x14010F700 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 */

void __fastcall vGetNtoW(struct MATRIX *a1, struct tagLOGFONTW *a2, struct IFIOBJ *a3, struct XDCOBJ *a4)
{
  LONG lfHeight; // eax
  bool v9; // cc
  float v10; // xmm0_4
  float v11; // xmm1_4
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  LONG lfWidth; // ecx
  float v15; // xmm0_4
  float v16; // xmm8_4
  float v17; // xmm7_4
  unsigned int *v18; // rbx
  unsigned int lfOrientation; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // xmm0_4
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v25; // rcx
  unsigned int v26; // edi
  int v27; // eax
  int v28; // edi
  unsigned int v29; // eax
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // edi
  int v33; // edx
  LONG v34; // eax
  __m128i v35; // xmm0
  float v36; // xmm9_4
  float v37; // eax
  float v38; // xmm9_4
  int v39; // xmm0_4
  float v40; // xmm6_4
  float v41; // xmm6_4
  unsigned int *v42; // [rsp+80h] [rbp+8h] BYREF
  struct MATRIX *v43; // [rsp+88h] [rbp+10h] BYREF

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
  lfWidth = a2->lfWidth;
  v15 = v10 / v11;
  v16 = v15;
  if ( lfWidth && (v33 = *(__int16 *)(*(_QWORD *)a3 + 76LL), v33 >= 0) )
  {
    v34 = -lfWidth;
    if ( lfWidth >= 0 )
      v34 = a2->lfWidth;
    v17 = (float)v34 / (float)v33;
  }
  else
  {
    v17 = v15;
  }
  v18 = *(unsigned int **)(*(_QWORD *)a4 + 48LL);
  v42 = v18;
  if ( v18 )
  {
    v32 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v42);
    if ( v32 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v42) )
    {
      PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v42);
      PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v42);
    }
  }
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  lfOrientation = a2->lfOrientation;
  v20 = 3600 - lfOrientation;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 976LL) + 340LL) & 0x40) == 0 )
    v20 = lfOrientation;
  v21 = lNormAngle(v20);
  if ( v21 )
  {
    switch ( v21 )
    {
      case 900:
        *((float *)a1 + 1) = v17;
        *((float *)a1 + 2) = v15;
        v22 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v22 + 340) & 0x40) == 0 )
          *((_DWORD *)a1 + 1) ^= _xmm;
        *((_DWORD *)a1 + 2) ^= _xmm;
        break;
      case 1800:
        *(float *)a1 = v17;
        v39 = *(_DWORD *)a1;
        *((float *)a1 + 3) = v16;
        *(_DWORD *)a1 = v39 ^ _xmm;
        v22 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v22 + 340) & 0x40) == 0 )
          break;
        v23 = *((_DWORD *)a1 + 3) ^ _xmm;
        goto LABEL_15;
      case 2700:
        *((float *)a1 + 1) = v17;
        *((float *)a1 + 2) = v15;
        v22 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v22 + 340) & 0x40) != 0 )
          *((_DWORD *)a1 + 1) ^= _xmm;
        break;
      default:
        v35 = (__m128i)COERCE_UNSIGNED_INT((float)v21);
        *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 / 10.0;
        v36 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v35)));
        v37 = COERCE_FLOAT(efSin((unsigned int)_mm_cvtsi128_si32(v35)));
        *(float *)v35.m128i_i32 = v36 * v17;
        v38 = v36 * v16;
        *(_DWORD *)a1 = v35.m128i_i32[0];
        *((float *)a1 + 3) = v38;
        *((float *)a1 + 1) = v37 * v17;
        *((_DWORD *)a1 + 2) = COERCE_UNSIGNED_INT(v37 * v16) ^ _xmm;
        v22 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
        if ( (*(_DWORD *)(v22 + 340) & 0x40) == 0 )
        {
          *((_DWORD *)a1 + 1) = COERCE_UNSIGNED_INT(v37 * v17) ^ _xmm;
          *((_DWORD *)a1 + 3) = LODWORD(v38) ^ _xmm;
        }
        break;
    }
  }
  else
  {
    *(float *)a1 = v17;
    *((float *)a1 + 3) = v15;
    v22 = *(_QWORD *)(*(_QWORD *)a4 + 976LL);
    if ( (*(_DWORD *)(v22 + 340) & 0x40) == 0 )
    {
      v23 = *((_DWORD *)a1 + 3) ^ _xmm;
LABEL_15:
      *((_DWORD *)a1 + 3) = v23;
    }
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v22);
  v25 = v18[10];
  v26 = CurrentThreadDpiAwarenessContext;
  if ( (v25 & 1) == 0 || (v27 = CurrentThreadDpiAwarenessContext & 0xF, v27 == 1) || v27 == 2 )
    v28 = v18[540];
  else
    v28 = (v26 >> 8) & 0x1FF;
  v29 = W32GetCurrentThreadDpiAwarenessContext(v25);
  if ( (v18[10] & 1) == 0 || (v30 = v29 & 0xF, v30 == 1) || v30 == 2 )
    v31 = v18[541];
  else
    v31 = (v29 >> 8) & 0x1FF;
  if ( v28 != v31 )
  {
    v40 = (float)(int)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v42);
    v41 = v40 / (float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v42);
    if ( a2->lfWidth )
      *((float *)a1 + 1) = *((float *)a1 + 1) / v41;
    else
      *(float *)a1 = v41 * *(float *)a1;
    *((float *)a1 + 2) = v41 * *((float *)a1 + 2);
  }
  v43 = a1;
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)&v43);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v43, 8u);
}
