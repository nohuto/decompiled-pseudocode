/*
 * XREFs of ?ComputeColorAndUV@CDrawListEntryBuilder@@AEBAXPEBUPrimitiveVertexAttributesDesc@@V?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@V?$StridedSpan@UVertexAAFixup_UVxN@@@@@Z @ 0x18000CEF0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListEntryBuilder::ComputeColorAndUV(unsigned int *a1, __m128 *a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  unsigned __int64 v9; // rdx
  bool *v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // ecx
  bool v14; // al
  char v15; // cl
  __m128 si128; // xmm5
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // edi
  float v20; // xmm0_4
  float v21; // eax
  float v22; // xmm0_4
  unsigned int v23; // edi
  float v24; // eax
  __int64 result; // rax
  unsigned int v26; // edi
  unsigned int v27; // r14d
  unsigned __int32 v28; // xmm5_4
  unsigned int i; // r11d
  __int64 v30; // r10
  float *v31; // r9
  __int64 v32; // rcx
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm4_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // edi
  float v45; // xmm0_4
  float v46; // eax
  float v47; // xmm0_4
  float v48; // [rsp+20h] [rbp-88h]
  float v49; // [rsp+2Ch] [rbp-7Ch]
  _BYTE v50[12]; // [rsp+34h] [rbp-74h] BYREF

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 10) + 24LL))(*((_QWORD *)a1 + 10));
  v11 = *a1;
  v12 = v8;
  if ( (_DWORD)v11 )
  {
    v13 = 1;
    v10 = v50;
    v9 = 0LL;
    do
    {
      v14 = a2 && v9 < a2[2].m128_u64[0] && (v13 & v12) != 0;
      *v10 = v14;
      ++v9;
      ++v10;
      v13 = __ROL4__(v13, 1);
      --v11;
    }
    while ( v11 );
  }
  if ( a2 && *((_BYTE *)a1 + 29) )
  {
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( !a2 )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      goto LABEL_12;
    }
  }
  si128 = *a2;
  if ( !v15 )
  {
LABEL_12:
    v17 = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
    v18 = (float)(v17 * 255.0) + 6291456.25;
    v19 = v18;
    v20 = (float)(_mm_shuffle_ps(si128, si128, 170).m128_f32[0] * 255.0) + 6291456.25;
    v21 = v20;
    v22 = (float)(_mm_shuffle_ps(si128, si128, 85).m128_f32[0] * 255.0) + 6291456.25;
    v23 = ((int)(LODWORD(v22) << 10) >> 3) | (LODWORD(v21) << 15) & 0xFFFF00FF | (LODWORD(v19) << 23) & 0xFF0000FF;
    v48 = (float)(si128.m128_f32[0] * 255.0) + 6291456.25;
    v24 = v48;
    goto LABEL_13;
  }
  v17 = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
  v43 = (float)(v17 * 255.0) + 6291456.25;
  v44 = v43;
  v45 = (float)(_mm_shuffle_ps(si128, si128, 170).m128_f32[0] * 255.0) + 6291456.25;
  v46 = v45;
  v47 = (float)(_mm_shuffle_ps(si128, si128, 85).m128_f32[0] * 255.0) + 6291456.25;
  v23 = ((int)(LODWORD(v47) << 10) >> 3) | (LODWORD(v46) << 15) & 0xFFFF00FF | (LODWORD(v44) << 23) & 0xFF0000FF;
  v49 = (float)(si128.m128_f32[0] * 255.0) + 6291456.25;
  v24 = v49;
LABEL_13:
  result = (unsigned int)((int)(LODWORD(v24) << 10) >> 11);
  v26 = result | v23 & 0xFFFFFF00;
  v27 = v26 & 0xFFFFFF;
  if ( !v15 )
    v27 = 0;
  if ( (a1[6] & 0x800) != 0 )
  {
    if ( v17 == 0.0 )
    {
      v26 = 0;
      v27 = -16777216;
    }
    else
    {
      v27 = v26;
    }
  }
  v28 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  for ( i = 0; i < *(_DWORD *)(a3 + 12); ++i )
  {
    v30 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * i);
    v31 = (float *)(*(_QWORD *)a4 + (int)(*(_DWORD *)(a4 + 8) * i));
    if ( v31[3] == 0.0 )
      result = v27;
    else
      result = v26;
    v32 = 0LL;
    for ( *(_DWORD *)(v30 + 12) = result; (unsigned int)v32 < *a1; v32 = (unsigned int)(v32 + 1) )
    {
      result = (unsigned int)v32;
      if ( v50[(unsigned int)v32] )
      {
        if ( (unsigned int)v32 >= a2[2].m128_u64[0] )
        {
          ((void (__fastcall *)(__int64, unsigned __int64, bool *))`gsl::details::get_terminate_handler'::`2'::handler)(
            v32,
            v9,
            v10);
          __debugbreak();
        }
        v10 = (bool *)a2[2].m128_u64[1];
        v9 = 56LL * (unsigned int)v32;
        v33 = (float)((float)(*(float *)v30 * *(float *)&v10[v9])
                    + (float)(*(float *)(v30 + 4) * *(float *)&v10[v9 + 12]))
            + *(float *)&v10[v9 + 24];
        v34 = (float)((float)(*(float *)v30 * *(float *)&v10[v9 + 4])
                    + (float)(*(float *)(v30 + 4) * *(float *)&v10[v9 + 16]))
            + *(float *)&v10[v9 + 28];
        v35 = (float)((float)(*(float *)v30 * *(float *)&v10[v9 + 8])
                    + (float)(*(float *)(v30 + 4) * *(float *)&v10[v9 + 20]))
            + *(float *)&v10[v9 + 32];
        if ( COERCE_FLOAT(LODWORD(v35) & v28) >= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v35 - 1.0) & v28) >= 0.000081380211 )
        {
          v33 = v33 / v35;
          v34 = v34 / v35;
        }
        *(float *)(v30 + 8LL * (unsigned int)v32 + 16) = v33;
        *(float *)(v30 + 8LL * (unsigned int)v32 + 20) = v34;
        if ( v10[v9 + 52] )
        {
          v36 = *(float *)&v10[v9 + 44];
          if ( v33 <= v36 )
            v36 = fmaxf(v33, *(float *)&v10[v9 + 36]);
          *(float *)(v30 + 8LL * (unsigned int)v32 + 16) = v36;
          v37 = *(float *)&v10[v9 + 48];
          if ( v34 <= v37 )
            v37 = fmaxf(v34, *(float *)&v10[v9 + 40]);
          *(float *)(v30 + 8LL * (unsigned int)v32 + 20) = v37;
        }
        v38 = (float)((float)(*v31 * *(float *)&v10[56 * (unsigned int)v32])
                    + (float)(v31[1] * *(float *)&v10[56 * (unsigned int)v32 + 12]))
            + *(float *)&v10[56 * (unsigned int)v32 + 24];
        v39 = (float)((float)(v31[1] * *(float *)&v10[v9 + 16]) + (float)(*v31 * *(float *)&v10[v9 + 4]))
            + *(float *)&v10[v9 + 28];
        v40 = (float)((float)(v31[1] * *(float *)&v10[v9 + 20]) + (float)(*v31 * *(float *)&v10[v9 + 8]))
            + *(float *)&v10[v9 + 32];
        if ( COERCE_FLOAT(LODWORD(v40) & v28) >= 0.000081380211
          && COERCE_FLOAT(COERCE_UNSIGNED_INT(v40 - 1.0) & v28) >= 0.000081380211 )
        {
          v38 = v38 / v40;
          v39 = v39 / v40;
        }
        v31[2 * (unsigned int)v32 + 4] = v38;
        v31[2 * (unsigned int)v32 + 5] = v39;
        if ( v10[v9 + 52] )
        {
          v41 = *(float *)&v10[v9 + 44];
          if ( v38 <= v41 )
            v41 = fmaxf(v38, *(float *)&v10[v9 + 36]);
          v31[2 * (unsigned int)v32 + 4] = v41;
          v42 = *(float *)&v10[v9 + 48];
          if ( v39 <= v42 )
            v42 = fmaxf(v39, *(float *)&v10[v9 + 40]);
          v31[2 * (unsigned int)v32 + 5] = v42;
        }
      }
      else
      {
        v9 = 0LL;
        *(_QWORD *)(v30 + 8LL * (unsigned int)v32 + 16) = 0LL;
        *(_QWORD *)&v31[2 * (unsigned int)v32 + 4] = 0LL;
      }
    }
  }
  return result;
}
