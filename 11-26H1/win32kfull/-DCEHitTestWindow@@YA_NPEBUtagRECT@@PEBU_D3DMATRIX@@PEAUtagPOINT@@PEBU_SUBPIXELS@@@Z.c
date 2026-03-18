/*
 * XREFs of ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008DB28
 * Callers:
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008C37C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x14008C7D0 (EditionPostDwmSpeedHitTest.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     EditionQueryInertiaWorker @ 0x14023C6E0 (EditionQueryInertiaWorker.c)
 * Callees:
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x14008FA50 (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 */

char __fastcall DCEHitTestWindow(
        const struct tagRECT *a1,
        const struct _D3DMATRIX *a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  __m128i v4; // xmm2
  char v5; // r11
  __m128i v6; // xmm3
  __m128i v8; // xmm1
  __m128i v10; // xmm0
  __int64 v12; // rcx
  __m128i v13; // xmm7
  unsigned __int32 *v14; // rax
  __m128i v15; // xmm8
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm5_4
  unsigned int v21; // r8d
  char v22; // al
  const struct _D3DVERTEX *v23; // rdx
  float y; // xmm1_4
  int v25; // r10d
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // ebx
  __int64 v31; // rcx
  __int64 v33; // r9
  float v34; // xmm0_4
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  unsigned __int32 v38; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int32 v39; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  unsigned __int32 v41; // [rsp+58h] [rbp-B0h]
  unsigned __int32 v42; // [rsp+5Ch] [rbp-ACh]
  __int64 v43; // [rsp+70h] [rbp-98h]
  unsigned __int32 v44; // [rsp+78h] [rbp-90h]
  unsigned __int32 v45; // [rsp+7Ch] [rbp-8Ch]
  int v46; // [rsp+90h] [rbp-78h]
  int v47; // [rsp+94h] [rbp-74h]
  unsigned __int32 v48; // [rsp+98h] [rbp-70h]
  unsigned __int32 v49; // [rsp+9Ch] [rbp-6Ch]
  int v50; // [rsp+B0h] [rbp-58h]
  int v51; // [rsp+B4h] [rbp-54h]
  unsigned __int32 v52; // [rsp+B8h] [rbp-50h]
  unsigned __int32 v53; // [rsp+BCh] [rbp-4Ch]
  int v54; // [rsp+D0h] [rbp-38h]
  int v55; // [rsp+D4h] [rbp-34h]
  unsigned __int32 v56; // [rsp+D8h] [rbp-30h]
  unsigned __int32 v57; // [rsp+DCh] [rbp-2Ch]
  __int64 v58; // [rsp+F0h] [rbp-18h]

  v4 = _mm_cvtsi32_si128(a1->left);
  v5 = 0;
  v6 = _mm_cvtsi32_si128(a1->top);
  v8 = _mm_cvtsi32_si128(a1->right);
  v10 = _mm_cvtsi32_si128(a1->bottom);
  v12 = 6LL;
  v13 = _mm_cvtsi32_si128(a3->x);
  v40 = 0LL;
  v43 = 1065353216LL;
  v46 = 0;
  v47 = 1065353216;
  v50 = 1065353216;
  v51 = 1065353216;
  v14 = &v39;
  v15 = _mm_cvtsi32_si128(a3->y);
  v54 = 0;
  v55 = 1065353216;
  v58 = 1065353216LL;
  v38 = _mm_cvtepi32_ps(v4).m128_u32[0];
  v39 = _mm_cvtepi32_ps(v6).m128_u32[0];
  v41 = _mm_cvtepi32_ps(v8).m128_u32[0];
  v42 = v39;
  v44 = v38;
  v45 = _mm_cvtepi32_ps(v10).m128_u32[0];
  v48 = v41;
  v49 = v45;
  v52 = v38;
  v53 = v45;
  v56 = v41;
  v57 = v39;
  LODWORD(v16) = _mm_cvtepi32_ps(v13).m128_u32[0];
  LODWORD(v17) = _mm_cvtepi32_ps(v15).m128_u32[0];
  do
  {
    v14[1] = 1065353216;
    v14[2] = 1065353216;
    v18 = (float)((float)((float)(*((float *)v14 - 1) * a2->_13) + (float)(*(float *)v14 * a2->_23)) + a2->_33)
        + a2->_43;
    v19 = (float)((float)((float)(*((float *)v14 - 1) * a2->_14) + (float)(*(float *)v14 * a2->_24)) + a2->_34)
        + a2->_44;
    v20 = (float)((float)((float)(*((float *)v14 - 1) * a2->_12) + (float)(*(float *)v14 * a2->_22)) + a2->_32)
        + a2->_42;
    *((float *)v14 - 1) = (float)((float)((float)(*((float *)v14 - 1) * a2->_11) + (float)(*(float *)v14 * a2->_21))
                                + a2->_31)
                        + a2->_41;
    *(float *)v14 = v20;
    *((float *)v14 + 1) = v18;
    *((float *)v14 + 2) = v19;
    v14 += 8;
    --v12;
  }
  while ( v12 );
  v21 = 0;
  while ( 2 )
  {
    if ( v21 >= 2 )
      return v5;
    v22 = 0;
    v23 = (const struct _D3DVERTEX *)(&v38 + 24 * v21);
    y = v23->y;
    if ( y == v23[1].y && y == v17 && v16 >= v23->x && v23[1].x >= v16 )
      break;
    v25 = -1;
    v26 = 0LL;
    v27 = 3LL;
    if ( (float)(y - v17) >= 0.0 )
      v25 = 1;
    do
    {
      v28 = v26 + 1;
      v29 = 0LL;
      if ( v26 + 1 < 3 )
        v29 = v26 + 1;
      v30 = -1;
      v31 = v29;
      if ( (float)(v23[v31].y - v17) >= 0.0 )
        v30 = 1;
      if ( v25 != v30 )
      {
        v33 = v26;
        v34 = v23[v31].x - v16;
        v35 = v23[v33].x - v16;
        if ( v35 <= 0.0 )
        {
          if ( v34 <= 0.0 )
            goto LABEL_25;
        }
        else if ( v34 > 0.0 )
        {
LABEL_24:
          ++v22;
LABEL_25:
          v25 = v30;
          goto LABEL_14;
        }
        v36 = v23[v33].y;
        v37 = v23[v31].y - v36;
        if ( COERCE_FLOAT(LODWORD(v37) & _xmm) <= 0.00000011920929
          || (float)(v35 - (float)((float)((float)(v23[v31].x - v23[v33].x) * (float)(v36 - v17)) / v37)) <= 0.0 )
        {
          goto LABEL_25;
        }
        goto LABEL_24;
      }
LABEL_14:
      v26 = v28;
      --v27;
    }
    while ( v27 );
    if ( (v22 & 1) == 0 )
    {
      ++v21;
      continue;
    }
    break;
  }
  if ( DCEInverseTransform(a1, v23, a4, a3) )
    return 1;
  return v5;
}
