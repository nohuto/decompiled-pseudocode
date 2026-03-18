/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@QEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1800D410C
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x1800D3DB0 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x180216868 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?Freeze@CVisualSurface@@AEAAJ_N@Z @ 0x180263440 (-Freeze@CVisualSurface@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  unsigned int v6; // ebp
  char v7; // si
  __int64 v9; // r14
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  __int64 v16; // rax
  int v17; // eax
  __int32 v18; // xmm1_4
  float v20[28]; // [rsp+30h] [rbp-78h]

  v6 = 0;
  v7 = 0;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 72);
  else
    v9 = 0LL;
  v10 = *a3;
  v11 = a3[1];
  v12 = *a3 + *a4;
  v13 = v11 + a4[1];
  v20[0] = *a3;
  v20[1] = v11;
  v20[2] = v12;
  v20[3] = v13;
  v14 = (float)(int)floorf_0(*a5 + 0.5);
  v15 = (float)(int)floorf_0(a5[1] + 0.5);
  if ( *((_BYTE *)a1 + 1600) )
  {
    *((_BYTE *)a1 + 1600) = 0;
    v7 = 1;
  }
  if ( *((_QWORD *)a1 + 15) != v9 )
  {
    if ( *((_QWORD *)a1 + 15) )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 200LL))(a1);
    v16 = *(_QWORD *)a1;
    *((_BYTE *)a1 + 1601) = 0;
    *((_QWORD *)a1 + 15) = v9;
    (*(void (__fastcall **)(_DWORD *))(v16 + 192))(a1);
    v17 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 216LL))(a1);
    v6 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x16Fu, 0LL);
      goto LABEL_22;
    }
    v7 = 1;
  }
  COERCE_FLOAT(v18 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 24) - v10) & v18) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 25) - v11) & v18) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 26) - v12) & v18) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 27) - v13) & v18) > 0.0000011920929 )
  {
    v7 = 1;
    *((_OWORD *)a1 + 6) = *(_OWORD *)v20;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 28) - v14) & v18) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 29) - v15) & v18) > 0.0000011920929 )
  {
    *((float *)a1 + 28) = v14;
    v7 = 1;
    *((float *)a1 + 29) = v15;
  }
  if ( a1[38] != a6 )
  {
    a1[38] = a6;
LABEL_23:
    (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
    return v6;
  }
LABEL_22:
  if ( v7 )
    goto LABEL_23;
  return v6;
}
