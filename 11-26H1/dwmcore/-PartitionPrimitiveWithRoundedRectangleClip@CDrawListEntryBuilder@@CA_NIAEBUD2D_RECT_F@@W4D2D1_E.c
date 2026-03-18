/*
 * XREFs of ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@_N@Z @ 0x180010850 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180011AF0 (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 * Callees:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800112A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x18001191C (-reserve_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimiti.c)
 *     ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x180012750 (--$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@-$vector_facade@UPrimitiveSubRect@CDrawListEn.c)
 */

char __fastcall CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
        int a1,
        float *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  char v6; // dl
  int v7; // ebx
  float v8; // xmm4_4
  float v10; // xmm6_4
  int v11; // r10d
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm12_4
  float v15; // xmm13_4
  float v16; // xmm8_4
  float v17; // xmm11_4
  float v18; // xmm14_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm15_4
  float *v25; // rcx
  float v26; // xmm7_4
  float v27; // xmm9_4
  __m128 v28; // xmm8
  float v29; // xmm10_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm11_4
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm9_4
  float v38; // xmm6_4
  float v39; // xmm5_4
  float v40; // xmm12_4
  __m128 v41; // xmm7
  float v42; // xmm1_4
  float v43; // xmm13_4
  float v44; // xmm14_4
  float v45; // xmm0_4
  unsigned int v46; // r14d
  float v47; // xmm2_4
  __m128 *v48; // rax
  __m128 v49; // xmm7
  __m128 v50; // xmm7
  __m128 v51; // xmm7
  unsigned int v53; // xmm0_4
  int v54; // xmm1_4
  __int128 v55; // xmm6
  __int64 v56; // rax
  unsigned int v57; // xmm0_4
  unsigned int v58; // r13d
  __int128 v59; // xmm6
  __int64 v60; // rax
  __m128 v61; // xmm8
  __m128 v62; // xmm8
  __m128 v63; // xmm8
  unsigned int v64; // xmm1_4
  unsigned int v65; // r13d
  __int128 v66; // xmm6
  __int64 v67; // rax
  unsigned int v68; // xmm2_4
  __int128 v69; // [rsp+38h] [rbp-D0h] BYREF
  int v70; // [rsp+48h] [rbp-C0h]
  __int128 v71; // [rsp+58h] [rbp-B0h] BYREF

  v6 = *(_BYTE *)(a4 + 52);
  v7 = a4;
  v8 = *(float *)(a4 + 4);
  v10 = *(float *)a4;
  v11 = a1;
  v70 = a1;
  if ( v6 )
  {
    v12 = v10 + *(float *)(a4 + 8);
    v13 = v8 + *(float *)(a4 + 12);
  }
  else
  {
    v12 = *(float *)(a4 + 8);
    v13 = *(float *)(a4 + 12);
  }
  v14 = *a2;
  v15 = a2[2];
  v16 = fmaxf(v10, *a2);
  v17 = a2[1];
  v18 = a2[3];
  v19 = fminf(v12, v15);
  v20 = fmaxf(v8, v17);
  v21 = fminf(v13, v18);
  if ( v19 <= v16 || v21 <= v20 )
    return 0;
  v22 = 0.0;
  if ( v19 < v16 || v21 < v20 )
    v23 = 0.0;
  else
    v23 = (float)(v21 - v20) * (float)(v19 - v16);
  v24 = (float)a1;
  if ( (float)a1 > v23 )
    return 0;
  v25 = (float *)(a4 + 16);
  v26 = v10 + *(float *)(a4 + 16);
  v71 = *(_OWORD *)a2;
  v69 = v71;
  v27 = v8 + *(float *)(a4 + 20);
  if ( (float)(v26 - v14) <= 0.015625 || (float)(v27 - v17) <= 0.015625 )
  {
    v28 = (__m128)(unsigned int)v71;
    v29 = *((float *)&v69 + 1);
  }
  else
  {
    v28 = (__m128)(unsigned int)v71;
    v28.m128_f32[0] = fmaxf(*(float *)&v71, v26);
    v29 = fmaxf(*((float *)&v69 + 1), v27);
  }
  if ( !v6 )
    v25 = (float *)(a4 + 24);
  v30 = v12 - *v25;
  v31 = v8 + v25[1];
  if ( (float)(v15 - v30) <= 0.015625 || (float)(v31 - v17) <= 0.015625 )
  {
    v32 = *((float *)&v71 + 2);
  }
  else
  {
    v29 = fmaxf(v29, v31);
    v32 = fminf(*((float *)&v71 + 2), v30);
  }
  v33 = 16LL;
  v34 = 16LL;
  if ( !v6 )
    v34 = 32LL;
  v35 = v12 - *(float *)(v34 + a4);
  v36 = v13 - *(float *)(v34 + a4 + 4);
  if ( (float)(v15 - v35) <= 0.015625 || (float)(v18 - v36) <= 0.015625 )
  {
    v37 = *((float *)&v69 + 3);
  }
  else
  {
    v32 = fminf(v32, v35);
    v37 = fminf(*((float *)&v69 + 3), v36);
  }
  if ( !v6 )
    v33 = 40LL;
  v38 = v10 + *(float *)(v33 + a4);
  v39 = v13 - *(float *)(v33 + a4 + 4);
  if ( (float)(v38 - v14) > 0.015625 && (float)(v18 - v39) > 0.015625 )
  {
    v28.m128_f32[0] = fmaxf(v28.m128_f32[0], v38);
    v37 = fminf(v37, v39);
  }
  v40 = *((float *)&v69 + 2);
  v41 = (__m128)(unsigned int)v69;
  if ( *((float *)&v69 + 2) < *(float *)&v69 || v37 < v29 )
    v42 = 0.0;
  else
    v42 = (float)(*((float *)&v69 + 2) - *(float *)&v69) * (float)(v37 - v29);
  v43 = *((float *)&v71 + 3);
  v44 = *((float *)&v71 + 1);
  if ( v32 >= v28.m128_f32[0] && *((float *)&v71 + 3) >= *((float *)&v71 + 1) )
    v22 = (float)(*((float *)&v71 + 3) - *((float *)&v71 + 1)) * (float)(v32 - v28.m128_f32[0]);
  if ( v42 < v22 )
  {
    if ( v24 <= v22 )
    {
      v46 = a3;
      if ( v28.m128_f32[0] > *a2 )
      {
        v53 = *((_DWORD *)a2 + 1);
        *(float *)&v69 = *a2;
        v54 = *((_DWORD *)a2 + 3);
        *(_QWORD *)((char *)&v69 + 4) = __PAIR64__(v28.m128_u32[0], v53);
        v46 = a3 & 0xFCFFFFFF;
        HIDWORD(v69) = v54;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 v11,
                                 (unsigned int)&v69,
                                 a3 & 0xFFFFFCFF,
                                 a4,
                                 (__int64)a5) )
        {
          v55 = v69;
          v56 = detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
                  a5,
                  0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5[1] - *a5) >> 3));
          *(_OWORD *)v56 = v55;
          *(_DWORD *)(v56 + 16) = a3 & 0xFFFFFCFF;
          *(_BYTE *)(v56 + 20) = 0;
        }
        v11 = v70;
      }
      if ( a2[2] > v32 )
      {
        v57 = *((_DWORD *)a2 + 1);
        *((float *)&v69 + 2) = a2[2];
        v58 = a3 & 0xFCFFFFFF;
        *((float *)&v69 + 3) = a2[3];
        *(_QWORD *)&v69 = __PAIR64__(v57, LODWORD(v32));
        v46 &= 0xFFFFFCFF;
        if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                                 v11,
                                 (unsigned int)&v69,
                                 v58,
                                 v7,
                                 (__int64)a5) )
        {
          v59 = v69;
          v60 = detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
                  a5,
                  0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5[1] - *a5) >> 3));
          *(_OWORD *)v60 = v59;
          *(_DWORD *)(v60 + 16) = v58;
          *(_BYTE *)(v60 + 20) = 0;
        }
      }
      v48 = (__m128 *)detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
                        a5,
                        0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5[1] - *a5) >> 3));
      v61 = _mm_shuffle_ps(v28, v28, 225);
      v61.m128_f32[0] = v44;
      v62 = _mm_shuffle_ps(v61, v61, 198);
      v62.m128_f32[0] = v32;
      v63 = _mm_shuffle_ps(v62, v62, 39);
      v63.m128_f32[0] = v43;
      *v48 = _mm_shuffle_ps(v63, v63, 57);
      goto LABEL_33;
    }
    return 0;
  }
  if ( v24 > v42 )
    return 0;
  v45 = a2[1];
  v46 = a3;
  if ( v29 > v45 )
  {
    v68 = *((_DWORD *)a2 + 2);
    *(float *)&v69 = *a2;
    *(_QWORD *)((char *)&v69 + 4) = __PAIR64__(v68, LODWORD(v45));
    *((float *)&v69 + 3) = v29;
    v46 = a3 & 0xFFFFFFFC;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             v11,
                             (unsigned int)&v69,
                             a3 & 0xFFFCFFFF,
                             a4,
                             (__int64)a5) )
    {
      v71 = v69;
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        a5,
        &v71,
        a3 & 0xFFFCFFFF,
        0LL);
    }
    v11 = v70;
  }
  v47 = a2[3];
  if ( v47 > v37 )
  {
    v64 = *((_DWORD *)a2 + 2);
    v65 = a3 & 0xFFFFFFFC;
    *(float *)&v69 = *a2;
    *(_QWORD *)((char *)&v69 + 4) = __PAIR64__(v64, LODWORD(v37));
    *((float *)&v69 + 3) = v47;
    v46 &= 0xFFFCFFFF;
    if ( !(unsigned __int8)CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
                             v11,
                             (unsigned int)&v69,
                             v65,
                             v7,
                             (__int64)a5) )
    {
      v66 = v69;
      v67 = detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
              a5,
              0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5[1] - *a5) >> 3));
      *(_OWORD *)v67 = v66;
      *(_DWORD *)(v67 + 16) = v65;
      *(_BYTE *)(v67 + 20) = 0;
    }
  }
  v48 = (__m128 *)detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
                    a5,
                    0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5[1] - *a5) >> 3));
  v49 = _mm_shuffle_ps(v41, v41, 225);
  v49.m128_f32[0] = v29;
  v50 = _mm_shuffle_ps(v49, v49, 198);
  v50.m128_f32[0] = v40;
  v51 = _mm_shuffle_ps(v50, v50, 39);
  v51.m128_f32[0] = v37;
  *v48 = _mm_shuffle_ps(v51, v51, 57);
LABEL_33:
  v48[1].m128_i8[4] = 1;
  v48[1].m128_i32[0] = v46;
  return 1;
}
