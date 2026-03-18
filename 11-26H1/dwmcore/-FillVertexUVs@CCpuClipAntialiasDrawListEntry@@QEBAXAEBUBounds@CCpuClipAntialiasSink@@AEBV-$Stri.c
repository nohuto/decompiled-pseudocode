/*
 * XREFs of ?FillVertexUVs@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@AEBV?$StridedSpan@UUVxN@CCpuClipAntialiasSink@@@@_K@Z @ 0x18011CD70
 * Callers:
 *     ?EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z @ 0x18011C0F0 (-EmitGeometry@CCpuClipAntialiasBatchCommand@@QEBAJPEAVCD3DBatchExecutionContext@@_N@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 */

void __fastcall CCpuClipAntialiasDrawListEntry::FillVertexUVs(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v4; // rax
  unsigned int v5; // r12d
  __int64 *v6; // r14
  unsigned __int64 v10; // r13
  float v11; // xmm1_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm2_4
  int v15; // r15d
  int v16; // r13d
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // ebx
  float v22; // xmm8_4
  __int64 v23; // r14
  __int64 v24; // rdx
  int v25; // r14d
  unsigned int v26; // ebx
  __int64 v27; // r15
  int v28; // esi
  float v29; // xmm0_4
  float v30; // xmm3_4
  unsigned int v31; // eax
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // r9
  unsigned int v36; // r11d
  __int64 v37; // r10
  __int64 v38; // rax
  float v39; // xmm4_4
  float v40; // xmm1_4
  size_t v41; // rbx
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  unsigned int v46; // ecx
  int v47; // edx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // r11d
  __int64 v51; // r10
  __int64 v52; // rax
  float v53; // xmm4_4
  float v54; // xmm1_4
  unsigned __int64 v55; // [rsp+20h] [rbp-78h]
  float Y; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v57; // [rsp+B8h] [rbp+20h]

  v57 = a4;
  v4 = *(unsigned __int64 **)(a1 + 80);
  v5 = 0;
  v6 = (__int64 *)(a1 + 80);
  v10 = 0LL;
  if ( !v4 )
    goto LABEL_19;
  v11 = *(float *)(a1 + 100);
  v10 = *v4;
  v12 = *(float *)(a2 + 4);
  v55 = *v4;
  v13 = 0.0;
  if ( v12 != v11 )
  {
    v14 = *(float *)(a1 + 104);
    v15 = (int)v11;
    v16 = (unsigned __int16)(int)v11;
    if ( v12 == v14 )
    {
      v12 = ceilf_0(*(float *)(a1 + 104));
    }
    else
    {
      if ( (float)(v16 + 1) > v12 )
      {
        v17 = (float)(v12 - v11) / (float)(fminf((float)v16 + 1.0, v14) - v11);
        goto LABEL_6;
      }
      Y = 0.0;
      v42 = modff(v14, &Y);
      v43 = (float)(unsigned __int16)(int)Y;
      if ( v12 >= v43 )
      {
        v17 = (float)((float)(v12 - v43) / v42) + (float)(unsigned __int16)((int)Y - v15);
        goto LABEL_6;
      }
    }
    v17 = v12 - (float)v16;
LABEL_6:
    v10 = v55;
    goto LABEL_7;
  }
  v17 = 0.0;
LABEL_7:
  v18 = *(float *)(a2 + 8);
  v19 = *(float *)(a1 + 100);
  if ( v18 != v19 )
  {
    v20 = *(float *)(a1 + 104);
    v21 = (unsigned __int16)(int)v19;
    if ( v18 == v20 )
    {
      v22 = ceilf_0(v20);
    }
    else
    {
      if ( (float)(v21 + 1) > v18 )
      {
        v13 = (float)(v18 - v19) / (float)(fminf((float)v21 + 1.0, v20) - v19);
        goto LABEL_11;
      }
      Y = 0.0;
      v44 = modff(v20, &Y);
      v22 = v18;
      v45 = (float)(unsigned __int16)(int)Y;
      if ( v18 >= v45 )
      {
        v13 = (float)((float)(v18 - v45) / v44) + (float)(unsigned __int16)((int)Y - (int)v19);
        goto LABEL_11;
      }
    }
    v13 = v22 - (float)v21;
  }
LABEL_11:
  v23 = *v6;
  if ( v23 )
  {
    v24 = *(_QWORD *)(v23 + 16);
    v25 = 8 * *(_DWORD *)v23;
  }
  else
  {
    v24 = 0LL;
    v25 = 0;
  }
  v26 = 0;
  v27 = v24 + 2 * v25 * (unsigned __int16)(int)v17;
  if ( *(_DWORD *)(a3 + 12) )
  {
    v28 = 0;
    do
    {
      memcpy_0((void *)(*(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v26++)), (const void *)(v27 + v28), 8 * v10);
      v28 += v25;
    }
    while ( v26 < *(_DWORD *)(a3 + 12) );
  }
  Y = 0.0;
  v29 = modff(v17, &Y);
  if ( v29 > 0.000081380211 )
  {
    v46 = 0;
    v47 = 0;
    do
    {
      v48 = v27 + v47;
      v49 = v27 + 2 * v25 + v47;
      v50 = 0;
      v51 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v46);
      if ( v10 )
      {
        v52 = 0LL;
        v53 = 1.0 - v29;
        do
        {
          ++v50;
          v54 = (float)(v29 * *(float *)(v49 + 8 * v52)) + (float)(v53 * *(float *)(v48 + 8 * v52));
          *(float *)(v51 + 8 * v52 + 4) = (float)(v53 * *(float *)(v48 + 8 * v52 + 4))
                                        + (float)(v29 * *(float *)(v49 + 8 * v52 + 4));
          *(float *)(v51 + 8 * v52) = v54;
          v52 = v50;
        }
        while ( v50 < v10 );
      }
      ++v46;
      v47 += v25;
    }
    while ( v46 < 2 );
  }
  Y = 0.0;
  v30 = modff(v13, &Y);
  if ( v30 > 0.000081380211 )
  {
    v31 = *(_DWORD *)(a3 + 12);
    v32 = v31 - 4 + 2;
    if ( v32 < v31 )
    {
      v33 = (v31 - 4) * v25;
      do
      {
        v34 = v27 + v33;
        v35 = v27 + v33 + 2 * v25;
        v36 = 0;
        v37 = *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v32);
        if ( v10 )
        {
          v38 = 0LL;
          v39 = 1.0 - v30;
          do
          {
            ++v36;
            v40 = (float)(v30 * *(float *)(v35 + 8 * v38)) + (float)(v39 * *(float *)(v34 + 8 * v38));
            *(float *)(v37 + 8 * v38 + 4) = (float)(v39 * *(float *)(v34 + 8 * v38 + 4))
                                          + (float)(v30 * *(float *)(v35 + 8 * v38 + 4));
            *(float *)(v37 + 8 * v38) = v40;
            v38 = v36;
          }
          while ( v36 < v10 );
        }
        v33 += v25;
        ++v32;
      }
      while ( v32 < *(_DWORD *)(a3 + 12) );
    }
  }
LABEL_19:
  if ( v10 < v57 && *(_DWORD *)(a3 + 12) )
  {
    v41 = 8 * (v57 - v10);
    do
      memset_0((void *)(8 * v10 + *(_QWORD *)a3 + (int)(*(_DWORD *)(a3 + 8) * v5++)), 0, v41);
    while ( v5 < *(_DWORD *)(a3 + 12) );
  }
}
