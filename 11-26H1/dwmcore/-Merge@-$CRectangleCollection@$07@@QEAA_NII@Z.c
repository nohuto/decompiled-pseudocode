/*
 * XREFs of ?Merge@?$CRectangleCollection@$07@@QEAA_NII@Z @ 0x180059864
 * Callers:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005AB30 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CRectangleCollection<8>::Merge(unsigned int *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r9
  __m128 v6; // xmm1
  float *v7; // rcx
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  _BOOL8 v11; // rdx
  float v12; // xmm3_4
  BOOL v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // xmm0_4
  unsigned int v21; // r10d
  __int64 v22; // r8
  unsigned int v23; // xmm0_4
  unsigned int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rcx
  unsigned int v27; // r10d
  const __m128i *v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // xmm0_4
  __m128 v34; // [rsp+20h] [rbp-28h]

  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (__m128)_mm_loadu_si128((const __m128i *)&a1[4 * a2 + 1]);
  v7 = (float *)&a1[4 * (unsigned int)a3 + 1];
  v8 = _mm_shuffle_ps(v6, v6, 170).m128_f32[0];
  LODWORD(v9) = _mm_shuffle_ps(v6, v6, 255).m128_u32[0];
  v34 = v6;
  LODWORD(v10) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  v11 = v8 <= v6.m128_f32[0] || v9 <= v10;
  v12 = v7[2];
  v13 = v12 <= *v7 || v7[3] <= v7[1];
  if ( v11 )
  {
    if ( v13
      || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(v7, v11, a3) )
    {
      v34 = 0uLL;
      goto LABEL_17;
    }
    v6 = (__m128)_mm_loadu_si128(v29);
  }
  else if ( !v13 )
  {
    if ( v6.m128_f32[0] > *v7 )
    {
      v34.m128_f32[0] = *v7;
      v6 = v34;
    }
    if ( v10 > v7[1] )
    {
      v34.m128_f32[1] = v7[1];
      v6 = v34;
    }
    if ( v12 > v8 )
    {
      v34.m128_f32[2] = v7[2];
      v6 = v34;
    }
    if ( v7[3] > v9 )
    {
      v34.m128_f32[3] = v7[3];
LABEL_17:
      v6 = v34;
    }
  }
  *(__m128 *)&a1[4 * v5 + 1] = v6;
  CRectangleCollection<8>::UpdateOverhead(a1, (unsigned int)v5, (unsigned int)v4);
  v14 = *a1 - 1;
  *a1 = v14;
  if ( (unsigned int)v4 >= v14 )
    return 0;
  *(_OWORD *)&a1[4 * v4 + 1] = *(_OWORD *)&a1[4 * v14 + 1];
  v15 = *a1;
  if ( (_DWORD)v4 )
  {
    v16 = v4;
    v17 = (unsigned int)(v4 * (v4 - 1)) >> 1;
    v18 = ((v15 * (v15 - 1)) >> 1) - v17;
    do
    {
      v19 = (unsigned int)(v18 + v17);
      v20 = a1[2 * v19 + 38];
      a1[2 * v17 + 37] = a1[2 * v19 + 37];
      a1[2 * v17 + 38] = v20;
      v17 = (unsigned int)(v17 + 1);
      --v16;
    }
    while ( v16 );
  }
  v21 = v4 + 1;
  if ( (int)v4 + 1 < v15 )
  {
    v22 = v21 + ((v15 * (v15 - 1)) >> 1);
    do
    {
      v23 = a1[2 * v22 + 38];
      v24 = a1[2 * v22 + 37];
      v22 = (unsigned int)(v22 + 1);
      v25 = v21 * (v21 - 1);
      ++v21;
      v26 = (unsigned int)v4 + (v25 >> 1);
      a1[2 * v26 + 37] = v24;
      a1[2 * v26 + 38] = v23;
    }
    while ( v21 < v15 );
  }
  v27 = v15 + 1;
  while ( v27 < *a1 )
  {
    v30 = (v27 * (v27 - 1)) >> 1;
    ++v27;
    v31 = (unsigned int)v4 + v30;
    v32 = v30 + v15;
    v33 = a1[2 * v32 + 38];
    a1[2 * v31 + 37] = a1[2 * v32 + 37];
    a1[2 * v31 + 38] = v33;
  }
  return 1;
}
