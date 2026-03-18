/*
 * XREFs of ?Initialize@CDrawListPrimitive@@IEAAXAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@_N@Z @ 0x180009790
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x180009380 (-Create@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18000EE70 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 * Callees:
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CDrawListPrimitive::Initialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void *Src,
        unsigned int a6,
        _QWORD *a7,
        char a8)
{
  bool v8; // zf
  __int64 v10; // rbx
  __int64 result; // rax
  float v14; // xmm6_4
  float v15; // xmm7_4
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebp
  __int64 v19; // r15
  unsigned int v20; // edi
  __int32 v21; // xmm2_4
  unsigned int v22; // r14d
  int v23; // r15d
  size_t v24; // r12
  __int64 v25; // rbp
  float *v26; // rdi
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // r12d
  size_t v34; // r12
  int v35; // r14d
  __int64 v36; // rcx
  const void *v37; // r13
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+30h] [rbp-68h]
  int v41; // [rsp+A0h] [rbp+8h]
  __int64 v42; // [rsp+A0h] [rbp+8h]
  unsigned int v44; // [rsp+D0h] [rbp+38h]
  void *v45; // [rsp+D0h] [rbp+38h]
  int v46; // [rsp+D8h] [rbp+40h]

  v8 = *(_DWORD *)(a1 + 20) == 0;
  v10 = a3;
  *(_BYTE *)(a1 + 81) = a8;
  result = (__int64)a7;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 72) = *a7;
  if ( v8 )
  {
    *(_OWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    memcpy_0(*(void **)(a1 + 48), Src, 2LL * a6);
    v14 = FLOAT_1_0;
    result = *(unsigned int *)(a1 + 16);
    v15 = 1.0 / *(float *)(a1 + 72);
    v16 = *(_QWORD *)(a1 + 40);
    v17 = *(_QWORD *)(a1 + 24);
    v18 = 8 * result + 16;
    v19 = *(_QWORD *)(a1 + 32);
    v20 = *(_DWORD *)(a2 + 12);
    v40 = v16;
    v38 = v17;
    v46 = v18;
    v39 = v19;
    v44 = v20;
    COERCE_FLOAT(v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & v21) <= 0.000081380211 )
      v15 = FLOAT_1_0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(1.0 / *(float *)(a1 + 76)) - 1.0) & v21) > 0.000081380211 )
      v14 = 1.0 / *(float *)(a1 + 76);
    v22 = 0;
    *(__m128i *)(a1 + 56) = _mm_load_si128((const __m128i *)&_xmm_ff7fffffff7fffff7f7fffff7f7fffff);
    if ( v20 )
    {
      v23 = 0;
      v41 = 8 * a4;
      v24 = (unsigned int)(8 * a4 + 16);
      v25 = v16 + 4;
      do
      {
        v26 = (float *)(*(_QWORD *)v10 + (int)(*(_DWORD *)(v10 + 8) * v22));
        memcpy_0((void *)(v17 + v23), (const void *)(*(_QWORD *)a2 + (int)(*(_DWORD *)(a2 + 8) * v22)), v24);
        result = (__int64)memcpy_0((void *)(v23 + v39), v26, v24);
        v23 += v46;
        v25 += 8LL;
        v10 = a3;
        v27 = v15 * *v26;
        ++v22;
        v17 = v38;
        v28 = v14 * v26[1];
        v20 = v44;
        *(float *)(v25 - 12) = v27;
        *(float *)(v25 - 8) = v28;
        v29 = fminf(*(float *)(a1 + 56), v27);
        v30 = *(float *)(a1 + 60);
        *(float *)(a1 + 56) = v29;
        v31 = *(float *)(a1 + 64);
        *(float *)(a1 + 60) = fminf(v30, *(float *)(v25 - 8));
        v32 = *(float *)(a1 + 68);
        *(float *)(a1 + 64) = fmaxf(v31, *(float *)(v25 - 12));
        *(float *)(a1 + 68) = fmaxf(v32, *(float *)(v25 - 8));
      }
      while ( v22 < v44 );
      v18 = v46;
      v19 = v39;
      v33 = v41;
    }
    else
    {
      v33 = 8 * a4;
    }
    if ( v20 < *(_DWORD *)(a1 + 8) )
    {
      v34 = (unsigned int)(v33 + 16);
      v35 = v20 * v18;
      v36 = (int)(v18 * (v20 - 1));
      v45 = (void *)(v36 + v19);
      v37 = (const void *)(v36 + v17);
      v42 = v20 - 1;
      do
      {
        memcpy_0((void *)(v17 + v35), v37, v34);
        memcpy_0((void *)(v19 + v35), v45, v34);
        v35 += v18;
        v17 = v38;
        result = v20++;
        *(_QWORD *)(v40 + 8 * result) = *(_QWORD *)(v40 + 8 * v42);
      }
      while ( v20 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
