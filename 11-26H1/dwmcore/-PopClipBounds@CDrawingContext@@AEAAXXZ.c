/*
 * XREFs of ?PopClipBounds@CDrawingContext@@AEAAXXZ @ 0x180174190
 * Callers:
 *     ?Pop@CDrawingContext@@QEAAJXZ @ 0x18003EE08 (-Pop@CDrawingContext@@QEAAJXZ.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180081C40 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::PopClipBounds(CDrawingContext *this)
{
  int v1; // eax
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __m128 v6; // xmm1
  float v7; // xmm7_4
  float v8; // xmm6_4
  __m128 v9; // xmm1
  __int64 v10; // rcx
  int v11; // eax
  __m128 v12; // xmm0
  __m128 si128; // xmm2
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  unsigned __int64 v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+64h] [rbp+Ch]

  v1 = *((_DWORD *)this + 66);
  if ( v1 )
    *((_DWORD *)this + 66) = v1 - 1;
  v3 = *((_DWORD *)this + 784);
  if ( v3 )
    *((_DWORD *)this + 784) = v3 - 1;
  v21 = 0LL;
  --*(_QWORD *)(*((_QWORD *)this + 93) - 168LL);
  v4 = *((_QWORD *)this + 93);
  if ( v4 == *((_QWORD *)this + 92) )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v7) = _mm_shuffle_ps(si128, si128, 255).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(si128, si128, 170).m128_u32[0];
    LODWORD(v14) = _mm_shuffle_ps(si128, si128, 85).m128_u32[0];
    goto LABEL_24;
  }
  if ( *(_QWORD *)(v4 - 184) )
  {
    v5 = *((_DWORD *)this + 778);
    if ( !v5 )
    {
      v9 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
      LODWORD(v7) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
      LODWORD(v8) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
      v21 = v9.m128_u64[0];
      goto LABEL_10;
    }
    v6 = *(__m128 *)(*((_QWORD *)this + 388) + 16LL * (unsigned int)(v5 - 1));
    LODWORD(v7) = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
    v21 = v6.m128_u64[0];
    LODWORD(v8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v4 - 192) + 88LL))(*(_QWORD *)(v4 - 192), &v22);
    v8 = (float)v22;
    v7 = (float)v23;
  }
  v9 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
LABEL_10:
  v10 = *((_QWORD *)this + 93);
  if ( v10 == *((_QWORD *)this + 92) || !*(_QWORD *)(v10 - 168) )
  {
    v14 = *((float *)&v21 + 1);
    si128.m128_i32[0] = v21;
  }
  else
  {
    v11 = *((_DWORD *)this + 784);
    if ( v11 )
      v12 = *(__m128 *)(*((_QWORD *)this + 391) + 16LL * (unsigned int)(v11 - 1));
    else
      v12 = v9;
    si128.m128_i32[0] = v21;
    if ( v12.m128_f32[0] > *(float *)&v21 )
      si128.m128_i32[0] = v12.m128_i32[0];
    v14 = *((float *)&v21 + 1);
    v15 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
    v16 = *((float *)&v21 + 1);
    if ( v15 > *((float *)&v21 + 1) )
    {
      v14 = v15;
      v16 = v15;
    }
    v17 = v8;
    v18 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
    if ( v8 > v18 )
    {
      v8 = v18;
      v17 = v18;
    }
    v19 = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
    v20 = v7;
    if ( v7 > v19 )
    {
      v7 = v19;
      v20 = v19;
    }
    if ( v17 <= si128.m128_f32[0] || v20 <= v16 )
    {
      si128.m128_i32[0] = 0;
      v7 = 0.0;
      v8 = 0.0;
      v14 = 0.0;
    }
  }
LABEL_24:
  if ( v8 > si128.m128_f32[0]
    && v7 > v14
    && (si128.m128_f32[0] < *((float *)this + 54)
     || v14 < *((float *)this + 55)
     || *((float *)this + 56) < v8
     || *((float *)this + 57) < v7) )
  {
    *((_BYTE *)this + 8065) = 1;
  }
}
