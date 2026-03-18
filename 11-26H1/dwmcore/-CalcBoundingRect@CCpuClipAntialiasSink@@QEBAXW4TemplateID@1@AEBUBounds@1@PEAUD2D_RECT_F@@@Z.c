/*
 * XREFs of ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x180173AB0
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800C0E10 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall CCpuClipAntialiasSink::CalcBoundingRect(__int64 a1, unsigned int a2, __int64 a3, float *a4)
{
  unsigned __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm6_4
  unsigned int v10; // ebp
  __int64 v11; // r14
  float v12; // xmm0_4
  int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  float v17; // xmm0_4
  float v18; // xmm5_4
  __int64 v19; // rax
  float v20; // xmm1_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm4_4
  unsigned int v29; // ecx
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  unsigned int v34; // ecx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  float v38; // xmm2_4
  float v39; // xmm3_4
  __int64 v40; // rcx
  unsigned int v41; // edx
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm0_4
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  float Y; // [rsp+80h] [rbp+18h] BYREF

  result = (unsigned __int64)&retaddr;
  *a4 = 3.4028235e38;
  a4[1] = 3.4028235e38;
  a4[2] = -3.4028235e38;
  a4[3] = -3.4028235e38;
  v7 = *(float *)(a3 + 8);
  v8 = *(float *)(a3 + 4);
  if ( v8 < v7 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * a2 + 40);
    Y = 0.0;
    v12 = modff(v7, &Y);
    v13 = (int)Y;
    if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 0.000081380211 )
      LOWORD(v13) = v13 - 1;
    v14 = (unsigned __int16)v13 - (unsigned __int16)(int)v8 + 1;
    v15 = 2 * v14 + 2;
    v16 = *(_QWORD *)(v11 + 40) + 8LL * (unsigned __int16)(2 * (int)v8);
    if ( !v16 && 2 * v14 != -2 || !*(_QWORD *)(v11 + 48) && 6 * v14 )
      goto LABEL_6;
    v17 = *(float *)(a3 + 4);
    Y = 0.0;
    v18 = modff(v17, &Y);
    if ( v18 <= 0.000081380211 )
    {
      while ( 1 )
      {
        v19 = v10;
        if ( v10 >= v15 )
          break;
        ++v10;
        v20 = a4[1];
        v21 = a4[2];
        v22 = a4[3];
        v23 = fminf(*a4, *(float *)(v16 + 8 * v19));
        *a4 = v23;
        v24 = fminf(v20, *(float *)(v16 + 8 * v19 + 4));
        a4[1] = v24;
        v25 = fmaxf(v21, *(float *)(v16 + 8 * v19));
        a4[2] = v25;
        v26 = fmaxf(v22, *(float *)(v16 + 8 * v19 + 4));
        a4[3] = v26;
        if ( v10 >= 2 )
          goto LABEL_11;
      }
LABEL_6:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    do
    {
      v36 = v10;
      if ( v10 >= v15 )
        goto LABEL_6;
      v37 = v10 + 2;
      if ( v37 >= v15 )
        goto LABEL_6;
      ++v10;
      v38 = (float)(v18 * *(float *)(v16 + 8 * v37 + 4)) + (float)((float)(1.0 - v18) * *(float *)(v16 + 8 * v36 + 4));
      v39 = (float)(v18 * *(float *)(v16 + 8 * v37)) + (float)((float)(1.0 - v18) * *(float *)(v16 + 8 * v36));
      v24 = fminf(a4[1], v38);
      v23 = fminf(*a4, v39);
      v25 = fmaxf(a4[2], v39);
      v26 = fmaxf(a4[3], v38);
      a4[1] = v24;
      *a4 = v23;
      a4[2] = v25;
      a4[3] = v26;
    }
    while ( v10 < 2 );
LABEL_11:
    if ( a2 != 1 )
    {
      v34 = 2;
      if ( v15 - 2 > 2 )
      {
        v35 = 2LL;
        while ( v35 < v15 )
        {
          v23 = fminf(v23, *(float *)(v16 + 8 * v35));
          ++v34;
          *a4 = v23;
          v24 = fminf(v24, *(float *)(v16 + 8 * v35 + 4));
          a4[1] = v24;
          v25 = fmaxf(v25, *(float *)(v16 + 8 * v35));
          a4[2] = v25;
          v26 = fmaxf(v26, *(float *)(v16 + 8 * v35 + 4));
          v35 = v34;
          a4[3] = v26;
          if ( v34 >= v15 - 2 )
            goto LABEL_12;
        }
        goto LABEL_6;
      }
    }
LABEL_12:
    v27 = *(float *)(a3 + 8);
    Y = 0.0;
    v28 = modff(v27, &Y);
    if ( v28 > 0.000081380211 )
    {
      v40 = (unsigned int)(v15 - 4);
      v41 = v40 + 2;
      result = (unsigned int)(v40 + 2);
      if ( result < v15 )
      {
        while ( (unsigned int)v40 < v15 && result < v15 )
        {
          v42 = v28 * *(float *)(v16 + 8 * result);
          ++v41;
          v43 = v28 * *(float *)(v16 + 8 * result + 4);
          result = v41;
          v44 = (float)(1.0 - v28) * *(float *)(v16 + 8 * v40 + 4);
          v45 = (float)(1.0 - v28) * *(float *)(v16 + 8 * v40);
          v40 = (unsigned int)(v40 + 1);
          v46 = v43 + v44;
          v47 = v45 + v42;
          v48 = fminf(*a4, v47);
          a4[1] = fminf(a4[1], v46);
          v49 = a4[3];
          *a4 = v48;
          v50 = fmaxf(a4[2], v47);
          a4[3] = fmaxf(v49, v46);
          a4[2] = v50;
          if ( v41 >= v15 )
            return result;
        }
        goto LABEL_6;
      }
    }
    else
    {
      v29 = v15 - 2;
      result = (unsigned int)(v15 - 2);
      if ( result < v15 )
      {
        do
        {
          ++v29;
          v30 = a4[1];
          *a4 = fminf(*a4, *(float *)(v16 + 8 * result));
          v31 = a4[2];
          a4[1] = fminf(v30, *(float *)(v16 + 8 * result + 4));
          v32 = a4[3];
          a4[2] = fmaxf(v31, *(float *)(v16 + 8 * result));
          v33 = fmaxf(v32, *(float *)(v16 + 8 * result + 4));
          result = v29;
          a4[3] = v33;
        }
        while ( v29 < v15 );
      }
    }
  }
  return result;
}
