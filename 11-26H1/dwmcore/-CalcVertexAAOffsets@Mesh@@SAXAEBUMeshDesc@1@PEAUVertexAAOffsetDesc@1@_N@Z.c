/*
 * XREFs of ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1800D9CB0
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1800D9B54 (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802B978C (sqrtf_0.c)
 */

void __fastcall Mesh::CalcVertexAAOffsets(
        const struct Mesh::MeshDesc *a1,
        struct Mesh::VertexAAOffsetDesc *a2,
        char a3)
{
  const struct Mesh::MeshDesc *v4; // rdx
  unsigned __int32 v5; // xmm10_4
  unsigned __int64 v6; // r14
  unsigned int v7; // r8d
  float v8; // xmm9_4
  __int64 v9; // rdi
  int v10; // ebx
  unsigned int v11; // esi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __m128 v14; // xmm6
  __m128 v15; // xmm7
  float v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rax
  unsigned int v19; // ebp
  __int64 v20; // rax
  float *v21; // rbx
  unsigned int v22; // edi
  __int64 v23; // r12
  __int64 v24; // rax
  float v25; // xmm3_4
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // edx
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm0_4
  char v36; // si
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float *v40; // r13
  float *v41; // rax
  float *v42; // r14
  float *v43; // rdx
  int v44; // edx
  float v45; // xmm1_4
  float *v46; // r14
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm6_4
  float v53; // xmm0_4
  unsigned __int64 i; // rdx
  int v55; // edx
  int v56; // edx
  bool v57; // zf
  __int64 v58; // rcx
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v63; // [rsp+100h] [rbp+18h]
  unsigned __int64 v64; // [rsp+108h] [rbp+20h]

  v4 = a1;
  v5 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  if ( a3 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v7 = 0;
    v8 = *(float *)a1;
    v9 = *((_QWORD *)a1 + 2);
    if ( v6 )
    {
      v10 = 0;
      do
      {
        v11 = v7 + 1;
        v12 = (v7 + 1) % v6;
        v13 = v7 + 1;
        v14 = (__m128)*(unsigned int *)(v9 + 8 * v12);
        v14.m128_f32[0] = v14.m128_f32[0] - *(float *)(v9 + 8LL * v7);
        v15 = (__m128)*(unsigned int *)(v9 + 8 * v12 + 4);
        v15.m128_f32[0] = v15.m128_f32[0] - *(float *)(v9 + 8LL * v7 + 4);
        if ( v8 <= COERCE_FLOAT(v14.m128_i32[0] & v5) || v8 <= COERCE_FLOAT(v15.m128_i32[0] & v5) )
        {
          v16 = (float)(v15.m128_f32[0] * v15.m128_f32[0]) + (float)(v14.m128_f32[0] * v14.m128_f32[0]);
          if ( v16 < 0.0 )
            v17 = sqrtf_0(v16);
          else
            v17 = fsqrt(v16);
          v14.m128_f32[0] = v14.m128_f32[0] * (float)(1.0 / v17);
          v15.m128_f32[0] = v15.m128_f32[0] * (float)(1.0 / v17);
          v64 = _mm_unpacklo_ps(v14, v15).m128_u64[0];
        }
        else
        {
          v64 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        }
        v18 = v10;
        v7 = v11;
        v10 += 32;
        *(_QWORD *)((char *)a2 + v18) = v64;
      }
      while ( v13 < v6 );
      v4 = a1;
    }
  }
  v19 = *((_DWORD *)v4 + 2);
  do
  {
    if ( !v19 )
      goto LABEL_57;
    v20 = 32LL * --v19;
  }
  while ( *(float *)((char *)a2 + v20) == 0.0 && *(float *)((char *)a2 + v20 + 4) == 0.0 );
  if ( v19 )
  {
    v21 = (float *)((char *)a2 + 24);
    v22 = 0;
    v23 = 0LL;
    v24 = v19;
    v63 = v19;
    while ( 1 )
    {
      v25 = *(v21 - 6);
      v26 = (unsigned int)v24;
      v27 = 32 * v24;
      if ( v25 != 0.0 || *(v21 - 5) != 0.0 )
        break;
      v24 = v63;
LABEL_34:
      ++v22;
      v21 += 8;
      v23 += 4LL;
      if ( v22 > v19 )
        return;
    }
    v28 = *((_QWORD *)v4 + 3);
    v29 = *(_DWORD *)(v23 + v28);
    if ( !v29 && !*(_DWORD *)(v28 + 4 * v26) )
    {
      v46 = v21 - 2;
      *((_QWORD *)v21 - 2) = 0LL;
      *(v21 - 2) = 0.0;
      *(_QWORD *)(v21 - 1) = 0LL;
      goto LABEL_46;
    }
    v30 = *(float *)((char *)a2 + v27 + 4);
    LODWORD(v31) = LODWORD(v25) ^ _xmm;
    v32 = *(float *)((char *)a2 + v27);
    v33 = *(v21 - 5);
    v34 = (float)(v30 * v31) + (float)(v32 * v33);
    if ( COERCE_FLOAT(LODWORD(v34) & v5) < 0.0000011920929 )
    {
      v32 = *(v21 - 5);
      v30 = v31;
      v34 = FLOAT_2_0;
      v35 = v32;
    }
    else
    {
      v35 = v31;
      LODWORD(v31) = LODWORD(v33) ^ _xmm;
    }
    v36 = 0;
    v37 = 0.5 / v34;
    if ( v29 == 3 )
    {
      v38 = v30;
      v39 = v32;
      LODWORD(v30) ^= _xmm;
      LODWORD(v32) ^= _xmm;
      v36 = 1;
    }
    else
    {
      v56 = v29 - 1;
      if ( v56 )
      {
        v57 = v56 == 1;
        v42 = v21 - 3;
        v43 = v21 - 1;
        v41 = v21;
        v40 = v21 - 4;
        if ( v57 )
        {
          v38 = v30;
          v39 = v32;
        }
        else
        {
          v38 = 0.0;
          v39 = 0.0;
          v30 = 0.0;
          v32 = 0.0;
        }
LABEL_23:
        *v40 = v32;
        *v42 = v30;
        *v43 = v39;
        *v41 = v38;
        v44 = *(_DWORD *)(v28 + 4 * v26);
        if ( v44 == 3 )
        {
          v36 = 1;
          v32 = v32 - v35;
          v30 = v30 - v31;
        }
        else
        {
          v55 = v44 - 1;
          if ( !v55 )
          {
            v39 = v39 - v35;
            v38 = v38 - v31;
            v32 = v32 - v35;
            v30 = v30 - v31;
            goto LABEL_26;
          }
          if ( v55 != 1 )
          {
LABEL_27:
            v45 = v30 * v37;
            v46 = v21 - 2;
            v47 = v32 * v37;
            *(v21 - 3) = v45;
            *(v21 - 4) = v47;
            v48 = (float)(v45 * v45) + (float)(v47 * v47);
            if ( v48 < 0.0 )
              v49 = sqrtf_0(v48);
            else
              v49 = fsqrt(v48);
            *v46 = v49;
            if ( v36 )
            {
              v50 = v38 * v37;
              v51 = v39 * v37;
              *v21 = v50;
              *(v21 - 1) = v51;
              v52 = (float)(v50 * v50) + (float)(v51 * v51);
              if ( v52 < 0.0 )
                v53 = sqrtf_0(v52);
              else
                v53 = fsqrt(v52);
              goto LABEL_32;
            }
LABEL_46:
            v53 = 0.0;
LABEL_32:
            v21[1] = v53;
            for ( i = (unsigned __int64)(v63 + 1) % *((_QWORD *)a1 + 1);
                  (_DWORD)i != v22;
                  i = (unsigned __int64)(unsigned int)(i + 1) % *((_QWORD *)a1 + 1) )
            {
              v58 = 32LL * (unsigned int)i;
              *(_QWORD *)((char *)a2 + v58 + 8) = *((_QWORD *)v21 - 2);
              *(float *)((char *)a2 + v58 + 16) = *v46;
              *(_QWORD *)((char *)a2 + v58 + 20) = *(_QWORD *)(v21 - 1);
              *(float *)((char *)a2 + v58 + 28) = v21[1];
            }
            v4 = a1;
            v24 = v22;
            v63 = v22;
            goto LABEL_34;
          }
          v32 = v32 + v35;
          v30 = v30 + v31;
        }
        v38 = v38 + v31;
        v39 = v35 + *(v21 - 1);
LABEL_26:
        *(v21 - 1) = v39;
        *v21 = v38;
        goto LABEL_27;
      }
      LODWORD(v39) = LODWORD(v32) ^ _xmm;
      LODWORD(v38) = LODWORD(v30) ^ _xmm;
      LODWORD(v30) ^= _xmm;
      LODWORD(v32) ^= _xmm;
    }
    v40 = v21 - 4;
    v41 = v21;
    v42 = v21 - 3;
    v43 = v21 - 1;
    goto LABEL_23;
  }
LABEL_57:
  v59 = 0;
  if ( *((_QWORD *)v4 + 1) )
  {
    v60 = 0LL;
    do
    {
      v61 = 32 * v60;
      ++v59;
      *(_QWORD *)((char *)a2 + v61 + 8) = 0LL;
      *(_QWORD *)((char *)a2 + v61 + 16) = 0LL;
      *(_QWORD *)((char *)a2 + v61 + 24) = 0LL;
      v60 = v59;
    }
    while ( (unsigned __int64)v59 < *((_QWORD *)v4 + 1) );
  }
}
