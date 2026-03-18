/*
 * XREFs of ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077240
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180075C80 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180075F40 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CMegaRectBatchCommand::OccludeBy(__int64 a1, __m128 *a2)
{
  const struct FastRegion::Internal::CRgnData **v2; // r14
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128i v5; // xmm2
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  const struct FastRegion::Internal::CRgnData *v10; // rcx
  int v11; // eax
  FastRegion::Internal::CRgnData *v12; // rcx
  const struct FastRegion::Internal::CRgnData *v13; // rdi
  int v14; // esi
  int *v15; // r15
  int v16; // r12d
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  int v20; // r10d
  const struct FastRegion::Internal::CRgnData *v21; // r11
  char *v22; // r8
  char *v23; // rbx
  _DWORD *v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  FastRegion::Internal::CRgnData *v31; // rbx
  int v32; // ebx
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v34; // rax
  const struct FastRegion::Internal::CRgnData *v35; // r13
  int v36[16]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h]
  FastRegion::Internal::CRgnData *v38; // [rsp+80h] [rbp-88h]
  _BYTE v39[256]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  if ( a2->m128_f32[2] <= a2->m128_f32[0] )
    return;
  if ( a2->m128_f32[3] <= a2->m128_f32[1] )
    return;
  v2 = (const struct FastRegion::Internal::CRgnData **)(a1 + 96);
  v3 = _mm_mul_ps(_mm_add_ps(*a2, g_halfFixedPointForRounding), (__m128)_xmm);
  v4 = _mm_cmplt_ps(DirectX::g_XMMaxInt, v3);
  v5 = (__m128i)_mm_or_ps(_mm_andnot_ps(v4, (__m128)_mm_cvttps_epi32(v3)), _mm_and_ps(v4, DirectX::g_XMAbsMask));
  v6 = _mm_cvtsi128_si32(v5);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 8));
  if ( v6 >= v7 )
    return;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 4));
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v5, 12));
  if ( v8 >= v9 )
    return;
  v36[5] = v9;
  v10 = *v2;
  v36[0] = 2;
  v36[1] = v6;
  v36[2] = v7;
  v36[3] = v8;
  v36[4] = 16;
  v36[7] = v6;
  v36[8] = v7;
  v36[6] = 16;
  if ( !*(_DWORD *)v10 )
    return;
  v11 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v10, (const struct FastRegion::Internal::CRgnData *)v36);
  v12 = (FastRegion::Internal::CRgnData *)v39;
  v38 = (FastRegion::Internal::CRgnData *)v39;
  LODWORD(v37) = v11;
  if ( (unsigned __int64)v11 > 0x100 )
  {
    v34 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v11);
    v12 = v34;
    if ( !v34 )
    {
      if ( v39 != (_BYTE *)v38 )
        operator delete(v38);
      v14 = -2147024882;
LABEL_29:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B7,
        (unsigned int)"onecoreuap\\windows\\DWM\\common\\shared\\Region.h",
        (const char *)(unsigned int)v14,
        (int)v36);
    }
    v38 = v34;
  }
  FastRegion::Internal::CRgnData::Subtract(v12, *v2, (const struct FastRegion::Internal::CRgnData *)v36);
  v13 = v38;
  v14 = 0;
  if ( !*(_DWORD *)v38 )
  {
    *(_DWORD *)*v2 = 0;
    goto LABEL_18;
  }
  v15 = (int *)(v2 + 1);
  if ( v39 != (_BYTE *)v38 )
  {
    v32 = v37;
    v38 = (FastRegion::Internal::CRgnData *)v39;
    LODWORD(v37) = 0;
    FastRegion::CRegion::FreeMemory(v2);
    *v2 = v13;
    *v15 = v32;
    goto LABEL_18;
  }
  v16 = (_DWORD)v38 + 12;
  v17 = *((_DWORD *)v38 + 2 * *(_DWORD *)v38 + 2)
      + 8 * *(_DWORD *)v38
      - *((_DWORD *)v38 + 4)
      - 12
      + 8 * (*(_DWORD *)v38 - 1)
      + 24;
  v18 = 60;
  if ( v15 != (int *)*v2 )
    v18 = *v15;
  if ( v18 < v17 )
  {
    v35 = (const struct FastRegion::Internal::CRgnData *)MIDL_user_allocate(v17);
    if ( !v35 )
    {
      v14 = -2147024882;
      goto LABEL_18;
    }
    FastRegion::CRegion::FreeMemory(v2);
    *v2 = v35;
    *v15 = v17;
  }
  v19 = *(_DWORD *)v13;
  v20 = 0;
  v21 = *v2;
  *(_DWORD *)v21 = *(_DWORD *)v13;
  *((_DWORD *)v21 + 1) = *((_DWORD *)v13 + 1);
  *((_DWORD *)v21 + 2) = *((_DWORD *)v13 + 2);
  v22 = (char *)v21 + 8 * v19 + 12;
  v23 = (char *)v13 + *((int *)v13 + 4) + 12;
  if ( v19 > 0 )
  {
    v24 = (_DWORD *)((char *)v21 + 12);
    do
    {
      *v24 = *(_DWORD *)((char *)v24 + v13 - v21);
      v25 = v20;
      v24 += 2;
      v26 = (__int64)v21 + 8 * v20++ + 12;
      *(_DWORD *)(v26 + 4) = (_DWORD)v13 + 12 + 8 * v25 + 4 * ((v22 - v23) >> 2) + *((_DWORD *)v13 + 2 * v25 + 4) - v26;
    }
    while ( v20 < *(_DWORD *)v21 );
  }
  v27 = (__int64)v13 + 8 * *(_DWORD *)v13 + 4;
  v28 = (unsigned __int64)((int)v27 + *(_DWORD *)(v27 + 4) - *((_DWORD *)v13 + 4) - v16) >> 2;
  v29 = (int)v28;
  if ( (int)v28 > 0 )
  {
    v30 = v23 - v22;
    do
    {
      *(_DWORD *)v22 = *(_DWORD *)&v22[v30];
      v22 += 4;
      --v29;
    }
    while ( v29 );
  }
LABEL_18:
  v31 = v38;
  if ( v39 != (_BYTE *)v38 )
  {
    if ( v38 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v31);
    }
  }
  if ( v14 < 0 )
    goto LABEL_29;
}
