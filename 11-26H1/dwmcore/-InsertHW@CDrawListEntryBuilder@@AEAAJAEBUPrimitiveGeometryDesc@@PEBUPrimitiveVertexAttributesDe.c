/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850
 * Callers:
 *     ?InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800105E0 (-InsertWorker@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttribut.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18000EE70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800111B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180012DC0 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x1800DD030 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ??1?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180182B70 (--1-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect@CDr.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18021888C (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(
        CDrawListEntryBuilder *this,
        __int64 a2,
        __int64 a3,
        LPVOID *p_lpMem,
        char a5)
{
  int BuiltHWPrimitiveEntry; // r14d
  float *v10; // rax
  int v11; // ebx
  int v12; // r13d
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 **v18; // rdi
  __int64 *v19; // r8
  CShapePtr *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rdi
  unsigned int v24; // xmm1_4
  _QWORD *v25; // r14
  unsigned int v26; // xmm0_4
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm0
  __m128 v30; // xmm1
  __m128 v31; // xmm1
  __m128i v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm1
  bool v35; // zf
  __int32 v36; // xmm1_4
  __int32 v37; // xmm0_4
  __int32 v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  __int64 v41; // rcx
  char v42; // r13
  _DWORD *v43; // rbx
  _DWORD *v44; // rdi
  __int64 result; // rax
  int v46; // edx
  __int64 v47; // r8
  __int64 v48; // r8
  _BYTE *v49; // rbx
  HANDLE ProcessHeap; // rax
  unsigned int v51; // ebx
  int v52; // eax
  int v53; // r9d
  unsigned int v54; // [rsp+20h] [rbp-E0h]
  __m128 v55; // [rsp+30h] [rbp-D0h] BYREF
  __m256i v56; // [rsp+40h] [rbp-C0h]
  _BYTE v57[20]; // [rsp+60h] [rbp-A0h]
  _QWORD *v58; // [rsp+78h] [rbp-88h] BYREF
  struct CPrimitiveColor *v59; // [rsp+80h] [rbp-80h]
  __m128i si128; // [rsp+90h] [rbp-70h] BYREF
  __m128i v61; // [rsp+A0h] [rbp-60h]
  __m128i v62; // [rsp+B0h] [rbp-50h]
  __m128 v63; // [rsp+C0h] [rbp-40h]
  int v64; // [rsp+D0h] [rbp-30h]
  _QWORD v65[3]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v66; // [rsp+F8h] [rbp-8h]
  __int64 v67; // [rsp+108h] [rbp+8h]
  unsigned __int64 v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+118h] [rbp+18h]
  __int64 v70; // [rsp+11Ch] [rbp+1Ch]
  D2D1_MATRIX_3X2_F matrix; // [rsp+128h] [rbp+28h] BYREF
  LPVOID lpMem; // [rsp+150h] [rbp+50h] BYREF
  _BYTE *v73; // [rsp+158h] [rbp+58h]
  __int64 *v74; // [rsp+160h] [rbp+60h]
  _BYTE v75[216]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v76; // [rsp+240h] [rbp+140h] BYREF

  BuiltHWPrimitiveEntry = 0;
  if ( !a3 )
  {
    v59 = 0LL;
    goto LABEL_3;
  }
  v10 = *(float **)(a3 + 24);
  v59 = *(struct CPrimitiveColor **)(a3 + 16);
  if ( !v10 )
  {
LABEL_3:
    if ( !*((_BYTE *)this + 4493) )
      goto LABEL_4;
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, a2, 0LL, 0LL);
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x238u, 0LL);
      return (unsigned int)BuiltHWPrimitiveEntry;
    }
    *((_BYTE *)this + 4493) = 0;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 4493) || *((float *)this + 1118) != *v10 || *((float *)this + 1119) != v10[1] )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, a2, 0LL, 0LL);
    if ( BuiltHWPrimitiveEntry < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x230u, 0LL);
      return (unsigned int)BuiltHWPrimitiveEntry;
    }
    *((_BYTE *)this + 4493) = 1;
    *((_QWORD *)this + 559) = **(_QWORD **)(a3 + 24);
  }
LABEL_4:
  lpMem = v75;
  v73 = v75;
  v74 = &v76;
  if ( !p_lpMem )
  {
    if ( !*((_BYTE *)this + 4491) || (*(_BYTE *)(a2 + 24) & 1) != 0 )
    {
LABEL_39:
      BuiltHWPrimitiveEntry = CDrawListEntryBuilder::AppendHWPrimitive(
                                this,
                                (const struct PrimitiveGeometryDesc *)a2,
                                (const struct PrimitiveVertexAttributesDesc *)a3);
      if ( BuiltHWPrimitiveEntry >= 0 )
        goto LABEL_40;
      v54 = 594;
LABEL_65:
      v53 = BuiltHWPrimitiveEntry;
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, v54, 0LL);
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>(&lpMem);
      return (unsigned int)BuiltHWPrimitiveEntry;
    }
    v11 = CCommonRegistryData::MegaRectSize;
    v12 = 0;
    v13 = *(float *)(a2 + 8);
    v14 = *(float *)a2;
    if ( !CCommonRegistryData::MegaRectSize )
      v11 = 1;
    if ( v13 < v14 || (v15 = *(float *)(a2 + 4), v16 = *(float *)(a2 + 12), v16 < v15) )
      v17 = 0.0;
    else
      v17 = (float)(v13 - v14) * (float)(v16 - v15);
    if ( v17 < (float)v11 )
      goto LABEL_27;
    v18 = (__int64 **)*((_QWORD *)this + 2);
    v19 = *v18;
    v20 = (CShapePtr *)(v18 + 2);
    if ( *v18 )
    {
      if ( !*(_QWORD *)v20 )
      {
        if ( !v19
          || (v21 = *v19,
              v22 = *v18,
              LODWORD(v58) = 0,
              (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD **))(v21 + 64))(v22, &v58))
          && (_DWORD)v58 == 1 )
        {
          if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)(v18 + 4)) )
          {
            BuiltHWPrimitiveEntry = 0;
LABEL_28:
            if ( v73 != lpMem )
            {
              p_lpMem = &lpMem;
              v42 = 0;
              goto LABEL_30;
            }
            goto LABEL_39;
          }
        }
LABEL_20:
        v23 = *((_QWORD *)this + 2);
        BuiltHWPrimitiveEntry = 0;
        v64 = 0;
        if ( *(_BYTE *)(v23 + 108) )
        {
          if ( !*(_QWORD *)(v23 + 16) )
          {
            v52 = CCpuClip::ConvertContextDependentClipToLocal((CCpuClip *)v23);
            BuiltHWPrimitiveEntry = v52;
            if ( v52 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x85u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BuiltHWPrimitiveEntry, 0x825u, 0LL);
              v12 = BuiltHWPrimitiveEntry;
              goto LABEL_59;
            }
          }
          v12 = BuiltHWPrimitiveEntry;
          v58 = *(_QWORD **)(v23 + 16);
          v25 = v58;
          si128 = _mm_load_si128((const __m128i *)&_xmm);
          v32 = _mm_load_si128((const __m128i *)&_xmm);
          v61 = _mm_load_si128((const __m128i *)&_xmm);
          v34 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
          BYTE1(v64) = BYTE1(v64) & 0xC0 | 0x29;
          LOBYTE(v64) = -86;
        }
        else
        {
          v24 = *(_DWORD *)(v23 + 36);
          v25 = *(_QWORD **)v23;
          matrix.m11 = *(FLOAT *)(v23 + 32);
          *(_QWORD *)&matrix.m[0][1] = __PAIR64__(*(_DWORD *)(v23 + 48), v24);
          v26 = *(_DWORD *)(v23 + 80);
          matrix.m22 = *(FLOAT *)(v23 + 52);
          *(_QWORD *)&matrix.m[2][0] = __PAIR64__(*(_DWORD *)(v23 + 84), v26);
          D2D1InvertMatrix(&matrix);
          *(_OWORD *)&v56.m256i_u64[1] = 0LL;
          *(_QWORD *)&v57[12] = 0x28083F800000LL;
          v27 = (__m128)v55.m128_u64[0];
          *(_DWORD *)&v57[8] = 0;
          v27.m128_f32[0] = matrix.m11;
          v28 = *(__m128 *)v56.m256i_i8;
          v29 = _mm_shuffle_ps(v27, v27, 225);
          v28.m128_f32[0] = matrix.m21;
          v56.m256i_i64[3] = 1065353216LL;
          v30 = _mm_shuffle_ps(v28, v28, 225);
          v29.m128_f32[0] = matrix.m12;
          v30.m128_f32[0] = matrix.m22;
          *(__m128 *)v56.m256i_i8 = _mm_shuffle_ps(v30, v30, 225);
          v64 = 10248;
          v61 = *(__m128i *)v56.m256i_i8;
          v31 = *(__m128 *)v57;
          v55 = _mm_shuffle_ps(v29, v29, 225);
          v31.m128_f32[0] = matrix.dx;
          si128 = (__m128i)v55;
          v32 = *(__m128i *)&v56.m256i_u64[2];
          v33 = _mm_shuffle_ps(v31, v31, 225);
          v33.m128_f32[0] = matrix.dy;
          v34 = _mm_shuffle_ps(v33, v33, 225);
          *(__m128 *)v57 = v34;
        }
        v35 = *((_BYTE *)this + 4489) == 0;
        v63 = v34;
        v62 = v32;
        if ( !v35 )
        {
          v36 = *((_DWORD *)this + 9);
          v55.m128_i32[0] = *((_DWORD *)this + 8);
          v37 = *((_DWORD *)this + 10);
          *(_QWORD *)&v57[12] = 1065353216LL;
          v56.m256i_i32[0] = v37;
          v55.m128_i32[1] = v36;
          v38 = *((_DWORD *)this + 11);
          *(_OWORD *)&v56.m256i_u64[1] = 0LL;
          v55.m128_u64[1] = 0LL;
          v39 = *((_DWORD *)this + 12);
          v56.m256i_i32[1] = v38;
          v40 = *((_DWORD *)this + 13);
          *(_DWORD *)v57 = v39;
          *(_DWORD *)&v57[4] = v40;
          v56.m256i_i64[3] = 1065353216LL;
          *(_DWORD *)&v57[8] = 0;
          *(_WORD *)&v57[16] = 10248;
          CMILMatrix::Multiply((CMILMatrix *)&si128, (const struct CMILMatrix *)&v55);
        }
        if ( !(*(unsigned int (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25)
          && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&si128) )
        {
          v41 = v25[2];
          v65[0] = si128.m128i_i64[0];
          v70 = 0x28083F800000LL;
          v65[2] = v61.m128i_i64[0];
          v66 = 0LL;
          *(_DWORD *)v57 = 0;
          v68 = v63.m128_u64[0];
          v65[1] = 0LL;
          v67 = 1065353216LL;
          v69 = 0;
          CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
            (const struct CRoundedRectangleGeometryData *)(v41 + 16),
            (const struct CMILMatrix *)v65,
            (struct CRoundedRectangleGeometryData *)&v55);
          CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
            v11,
            a2,
            50529027,
            (unsigned int)&v55,
            (__int64)&lpMem);
        }
LABEL_27:
        BuiltHWPrimitiveEntry = v12;
        if ( v12 >= 0 )
          goto LABEL_28;
LABEL_59:
        v53 = v12;
        v54 = 581;
        goto LABEL_60;
      }
    }
    else if ( !*(_QWORD *)v20 )
    {
      BuiltHWPrimitiveEntry = 0;
      goto LABEL_28;
    }
    if ( CShapePtr::IsAxisAlignedRectangle(v20) )
      goto LABEL_27;
    goto LABEL_20;
  }
  v42 = a5;
LABEL_30:
  v43 = *p_lpMem;
  v44 = p_lpMem[1];
  if ( v44 != v43 )
  {
    memset(&matrix, 0, 32);
    while ( v43 != v44 )
    {
      if ( !v42 || !*((_BYTE *)v43 + 20) )
      {
        *(_OWORD *)&matrix.m11 = *(_OWORD *)v43;
        LODWORD(matrix.dx) = *(_DWORD *)(a2 + 16) & v43[4];
        BuiltHWPrimitiveEntry = CDrawListEntryBuilder::AppendHWPrimitive(
                                  this,
                                  (const struct PrimitiveGeometryDesc *)&matrix,
                                  (const struct PrimitiveVertexAttributesDesc *)a3);
        if ( BuiltHWPrimitiveEntry < 0 )
        {
          v54 = 608;
          goto LABEL_65;
        }
      }
      v43 += 6;
    }
  }
LABEL_40:
  v46 = (int)lpMem;
  v47 = 0xAAAAAAAAAAAAAAABuLL * ((v73 - (_BYTE *)lpMem) >> 3);
  if ( v47 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&matrix, (__int64)lpMem, v47);
    v73 -= 24 * v48;
  }
  v49 = lpMem;
  lpMem = 0LL;
  if ( v49 != v75 && v49 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v49);
  }
  if ( !v59 && (*((_DWORD *)this + 6) & 0x800) == 0 )
    return (unsigned int)BuiltHWPrimitiveEntry;
  result = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, v46, v59, (const struct _D3DCOLORVALUE *)a3);
  v51 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x26Au, 0LL);
    return v51;
  }
  return result;
}
