/*
 * XREFs of ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800BA030 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z @ 0x1800DE4E0 (-FlattenToLineSegments@CRoundedRectangleShape@@UEBAJMPEAPEAVCShape@@@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800DF1D0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800DE6E0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

struct CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::Create(
        const struct CRoundedRectangleGeometryData *a1)
{
  HANDLE v2; // rax
  _DWORD *v3; // rax
  _DWORD *v4; // r8
  __int64 v5; // r9
  char v6; // r11
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm5_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  unsigned int v13; // r10d
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm2_4
  unsigned __int32 v19; // xmm1_4
  __int64 v20; // rax
  __int32 v21; // xmm0_4
  unsigned __int32 v22; // xmm1_4
  __int64 v23; // rax
  __int32 v24; // xmm0_4
  unsigned __int32 v25; // xmm1_4
  __int32 v26; // xmm0_4
  unsigned __int32 v27; // xmm1_4
  HANDLE ProcessHeap; // rax
  _DWORD *v30; // rax
  char v31; // r11
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  unsigned int v38; // r10d
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  __int64 v45; // rax
  __int32 v46; // xmm0_4
  unsigned __int32 v47; // xmm1_4
  __int64 v48; // rax
  __int32 v49; // xmm0_4
  unsigned __int32 v50; // xmm1_4
  __int32 v51; // xmm0_4
  unsigned __int32 v52; // xmm1_4
  __m128 v53; // xmm0
  __m128 v54; // xmm1
  __m128 v55; // xmm1
  __m128 v56; // xmm1
  __m128 v57; // xmm2
  __m128 v58; // xmm1
  __m128 v59; // xmm1
  __m128 v60; // xmm1
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm2_4
  float v65; // xmm3_4
  float v66; // xmm0_4
  __int32 v67; // xmm0_4
  unsigned __int32 v68; // xmm1_4
  __int32 v69; // xmm0_4
  unsigned __int32 v70; // xmm1_4
  __m128 v71; // xmm1
  __m128 v72; // xmm1
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((float *)a1 + 12) <= 0.0 )
  {
    ProcessHeap = GetProcessHeap();
    v30 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v4 = v30;
    if ( !v30 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v30[2] = 0;
    v30[16] = 0;
    *(_QWORD *)v30 = &CRoundedRectangleShape::SharedData::`vftable';
    *((_QWORD *)v30 + 9) = 0LL;
    v31 = *((_BYTE *)a1 + 52);
    v32 = *((float *)a1 + 1);
    v33 = *(float *)a1;
    if ( v31 )
    {
      v34 = v33 + *((float *)a1 + 2);
      v35 = v32 + *((float *)a1 + 3);
    }
    else
    {
      v34 = *((float *)a1 + 2);
      v35 = *((float *)a1 + 3);
    }
    if ( (float)(v34 - 0.0000011920929) <= v33 || (float)(v35 - 0.0000011920929) <= v32 )
    {
LABEL_93:
      *((_BYTE *)v4 + 68) = 1;
      v4[4] = 0;
      v4[5] = 0;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 4) = 0LL;
      v4[16] = 0;
    }
    else
    {
      v36 = v34 - v33;
      v37 = v35 - v32;
      v38 = 1;
      v39 = 0;
      if ( !v31 )
        v38 = 4;
      v40 = 16LL;
      while ( v39 < v38 )
      {
        if ( v31 )
          v41 = 16LL;
        else
          v41 = 8LL * v39 + 16;
        v42 = *(float *)((char *)a1 + v41);
        if ( v42 > v36 )
        {
          v64 = *(float *)((char *)a1 + v41 + 4);
          if ( v64 > v37 )
          {
            v65 = (float)((float)(v42 - v36) - 0.0) / v42;
            if ( v65 > 0.0 )
            {
              v66 = (float)((float)(v64 - v37) - 0.0) / v64;
              if ( v66 > 0.0 && (float)((float)(v66 * v66) + (float)(v65 * v65)) > 1.0 )
                goto LABEL_93;
            }
          }
        }
        ++v39;
      }
      if ( v31 )
      {
        *((_BYTE *)v4 + 68) = 1;
        *((_QWORD *)v4 + 2) = *(_QWORD *)a1;
        *((_QWORD *)v4 + 3) = *((_QWORD *)a1 + 1);
        if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(a1, 0LL) )
        {
          v69 = *((_DWORD *)a1 + 4);
          v70 = *((_DWORD *)a1 + 5);
        }
        else
        {
          v72 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
          v69 = v72.m128_i32[0];
          v70 = _mm_shuffle_ps(v72, v72, 85).m128_u32[0];
        }
        v4[8] = v69;
        v4[9] = v70;
        v4[16] = *((_DWORD *)a1 + 12);
        return (struct CRoundedRectangleShape::SharedData *)v4;
      }
      *((_BYTE *)v4 + 68) = 0;
      v4[4] = *(_DWORD *)a1;
      v4[5] = *((_DWORD *)a1 + 1);
      v4[6] = *((_DWORD *)a1 + 2);
      v4[7] = *((_DWORD *)a1 + 3);
      v43 = *((float *)a1 + 4);
      if ( v43 <= 0.0 || (v44 = *((float *)a1 + 5), v44 <= 0.0) )
      {
        v57 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        LODWORD(v44) = _mm_shuffle_ps(v57, v57, 85).m128_u32[0];
        v43 = v57.m128_f32[0];
      }
      *((float *)v4 + 8) = v43;
      v45 = 16LL;
      *((float *)v4 + 9) = v44;
      if ( !*((_BYTE *)a1 + 52) )
        v45 = 24LL;
      if ( *(float *)((char *)a1 + v45) <= 0.0 || *(float *)((char *)a1 + v45 + 4) <= 0.0 )
      {
        v58 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v46 = v58.m128_i32[0];
        v47 = _mm_shuffle_ps(v58, v58, 85).m128_u32[0];
      }
      else
      {
        v46 = *((_DWORD *)a1 + 6);
        v47 = *((_DWORD *)a1 + 7);
      }
      v4[10] = v46;
      v48 = 16LL;
      v4[11] = v47;
      if ( !*((_BYTE *)a1 + 52) )
        v48 = 32LL;
      if ( *(float *)((char *)a1 + v48) <= 0.0 || *(float *)((char *)a1 + v48 + 4) <= 0.0 )
      {
        v59 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v49 = v59.m128_i32[0];
        v50 = _mm_shuffle_ps(v59, v59, 85).m128_u32[0];
      }
      else
      {
        v49 = *((_DWORD *)a1 + 8);
        v50 = *((_DWORD *)a1 + 9);
      }
      v4[12] = v49;
      v4[13] = v50;
      if ( !*((_BYTE *)a1 + 52) )
        v40 = 40LL;
      if ( *(float *)((char *)a1 + v40) <= 0.0 || *(float *)((char *)a1 + v40 + 4) <= 0.0 )
      {
        v60 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v51 = v60.m128_i32[0];
        v52 = _mm_shuffle_ps(v60, v60, 85).m128_u32[0];
      }
      else
      {
        v51 = *((_DWORD *)a1 + 10);
        v52 = *((_DWORD *)a1 + 11);
      }
      v4[14] = v51;
      v4[15] = v52;
    }
    v4[16] = *((_DWORD *)a1 + 12);
    return (struct CRoundedRectangleShape::SharedData *)v4;
  }
  v2 = GetProcessHeap();
  v3 = HeapAlloc(v2, 0, 0x68uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = 0LL;
  v3[2] = 0;
  v3[16] = 0;
  *(_QWORD *)v3 = &CRoundedRectangleShape::SharedData::`vftable';
  *((_QWORD *)v3 + 9) = 0LL;
  v6 = *((_BYTE *)a1 + 52);
  v7 = *((float *)a1 + 1);
  v8 = *(float *)a1;
  if ( v6 )
  {
    v9 = v8 + *((float *)a1 + 2);
    v10 = v7 + *((float *)a1 + 3);
  }
  else
  {
    v9 = *((float *)a1 + 2);
    v10 = *((float *)a1 + 3);
  }
  if ( (float)(v9 - 0.0000011920929) <= v8 || (float)(v10 - 0.0000011920929) <= v7 )
  {
LABEL_88:
    *((_BYTE *)v4 + 68) = 1;
    v4[4] = 0;
    v4[5] = 0;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    v4[16] = 0;
  }
  else
  {
    v11 = v9 - v8;
    v12 = v10 - v7;
    v13 = 1;
    v14 = 0;
    if ( !v6 )
      v13 = 4;
    v15 = 16LL;
    while ( v14 < v13 )
    {
      if ( v6 )
        v16 = 16LL;
      else
        v16 = 8LL * v14 + 16;
      v17 = *(float *)((char *)a1 + v16);
      if ( v17 > v11 )
      {
        v61 = *(float *)((char *)a1 + v16 + 4);
        if ( v61 > v12 )
        {
          v62 = (float)((float)(v17 - v11) - 0.0) / v17;
          if ( v62 > 0.0 )
          {
            v63 = (float)((float)(v61 - v12) - 0.0) / v61;
            if ( v63 > 0.0 && (float)((float)(v63 * v63) + (float)(v62 * v62)) > 1.0 )
              goto LABEL_88;
          }
        }
      }
      ++v14;
    }
    if ( v6 )
    {
      *((_BYTE *)v4 + 68) = 1;
      *((_QWORD *)v4 + 2) = *(_QWORD *)a1;
      *((_QWORD *)v4 + 3) = *((_QWORD *)a1 + 1);
      if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(a1, 0LL) )
      {
        v67 = *((_DWORD *)a1 + 4);
        v68 = *((_DWORD *)a1 + 5);
      }
      else
      {
        v71 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v67 = v71.m128_i32[0];
        v68 = _mm_shuffle_ps(v71, v71, 85).m128_u32[0];
      }
      v4[8] = v67;
      v4[9] = v68;
    }
    else
    {
      *((_BYTE *)v4 + 68) = 0;
      v4[4] = *(_DWORD *)a1;
      v4[5] = *((_DWORD *)a1 + 1);
      v4[6] = *((_DWORD *)a1 + 2);
      v4[7] = *((_DWORD *)a1 + 3);
      v18 = *((float *)a1 + 4);
      if ( v18 <= 0.0 || *((float *)a1 + 5) <= 0.0 )
      {
        v53 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v18 = v53.m128_f32[0];
        v19 = _mm_shuffle_ps(v53, v53, 85).m128_u32[0];
      }
      else
      {
        v19 = *((_DWORD *)a1 + 5);
      }
      *((float *)v4 + 8) = v18;
      v20 = 16LL;
      v4[9] = v19;
      if ( !*((_BYTE *)a1 + 52) )
        v20 = 24LL;
      if ( *(float *)((char *)a1 + v20) <= 0.0 || *(float *)((char *)a1 + v20 + 4) <= 0.0 )
      {
        v54 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v21 = v54.m128_i32[0];
        v22 = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
      }
      else
      {
        v21 = *((_DWORD *)a1 + 6);
        v22 = *((_DWORD *)a1 + 7);
      }
      v4[10] = v21;
      v23 = 16LL;
      v4[11] = v22;
      if ( !*((_BYTE *)a1 + 52) )
        v23 = 32LL;
      if ( *(float *)((char *)a1 + v23) <= 0.0 || *(float *)((char *)a1 + v23 + 4) <= 0.0 )
      {
        v55 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v24 = v55.m128_i32[0];
        v25 = _mm_shuffle_ps(v55, v55, 85).m128_u32[0];
      }
      else
      {
        v24 = *((_DWORD *)a1 + 8);
        v25 = *((_DWORD *)a1 + 9);
      }
      v4[12] = v24;
      v4[13] = v25;
      if ( !*((_BYTE *)a1 + 52) )
        v15 = 40LL;
      if ( *(float *)((char *)a1 + v15) <= 0.0 || *(float *)((char *)a1 + v15 + 4) <= 0.0 )
      {
        v56 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL);
        v26 = v56.m128_i32[0];
        v27 = _mm_shuffle_ps(v56, v56, 85).m128_u32[0];
      }
      else
      {
        v26 = *((_DWORD *)a1 + 10);
        v27 = *((_DWORD *)a1 + 11);
      }
      v4[14] = v26;
      v4[15] = v27;
    }
  }
  v4[16] = *((_DWORD *)a1 + 12);
  *(_QWORD *)v4 = &CRoundedRectangleShape::FlattenedShapeSharedData::`vftable';
  *((_QWORD *)v4 + 10) = v5;
  *((_QWORD *)v4 + 11) = v5;
  *((_QWORD *)v4 + 12) = v5;
  return (struct CRoundedRectangleShape::SharedData *)v4;
}
