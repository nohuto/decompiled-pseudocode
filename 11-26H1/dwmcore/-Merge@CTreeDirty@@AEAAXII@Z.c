/*
 * XREFs of ?Merge@CTreeDirty@@AEAAXII@Z @ 0x18005953C
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F5F0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?UpdateOverhead@?$CRectangleCollection@$07@@AEAAXII@Z @ 0x18005AB30 (-UpdateOverhead@-$CRectangleCollection@$07@@AEAAXII@Z.c)
 *     ?HasValidValues@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18005B1E0 (-HasValidValues@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

void __fastcall CTreeDirty::Merge(CTreeDirty *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // r11
  __int64 v6; // r10
  _QWORD *v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int *v11; // rbx
  float *v12; // rcx
  __m128 v13; // xmm1
  float v14; // xmm6_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  _BOOL8 v17; // rdx
  float v18; // xmm3_4
  BOOL v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r9d
  __int64 v22; // r10
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // xmm0_4
  unsigned int v27; // r10d
  __int64 v28; // r8
  unsigned int v29; // xmm0_4
  unsigned int v30; // eax
  unsigned int v31; // ecx
  __int64 v32; // rcx
  unsigned int i; // r8d
  unsigned int v34; // eax
  _QWORD *v35; // r9
  const __m128i *v36; // rcx
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // xmm0_4
  __m128 v41; // [rsp+20h] [rbp-28h]

  v3 = a2;
  v5 = 16LL * (unsigned int)a3;
  v6 = a2;
  v7 = (_QWORD *)((char *)this + v5 + 456);
  v8 = (unsigned int)a3;
  v9 = (unsigned int)a3;
  if ( (_QWORD *)*v7 != v7 )
  {
    a3 = 2 * (v3 + 29);
    v10 = 2 * (v9 + 29);
    **((_QWORD **)this + 2 * v3 + 58) = *v7;
    *(_QWORD *)(*v7 + 8LL) = *((_QWORD *)this + 2 * v3 + 58);
    **((_QWORD **)this + v10) = (char *)this + 16 * (unsigned int)v3 + 456;
    *((_QWORD *)this + 2 * v3 + 58) = *((_QWORD *)this + v10);
    v7[1] = v7;
    *v7 = v7;
  }
  v11 = (unsigned int *)((char *)this + 16);
  v12 = (float *)((char *)this + v5 + 20);
  v13 = (__m128)_mm_loadu_si128((const __m128i *)((char *)this + 16 * v6 + 20));
  v14 = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
  v41 = v13;
  LODWORD(v15) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
  LODWORD(v16) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v17 = v14 <= v13.m128_f32[0] || v15 <= v16;
  v18 = v12[2];
  v19 = v18 <= *v12 || v12[3] <= v12[1];
  if ( v17 )
  {
    if ( v19
      || !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::HasValidValues(v12, v17, a3) )
    {
      v41 = 0uLL;
      goto LABEL_19;
    }
    v13 = (__m128)_mm_loadu_si128(v36);
  }
  else if ( !v19 )
  {
    if ( v13.m128_f32[0] > *v12 )
    {
      v41.m128_f32[0] = *v12;
      v13 = v41;
    }
    if ( v16 > v12[1] )
    {
      v41.m128_f32[1] = v12[1];
      v13 = v41;
    }
    if ( v18 > v14 )
    {
      v41.m128_f32[2] = v12[2];
      v13 = v41;
    }
    if ( v12[3] > v15 )
    {
      v41.m128_f32[3] = v12[3];
LABEL_19:
      v13 = v41;
    }
  }
  *(__m128 *)&v11[4 * v3 + 1] = v13;
  CRectangleCollection<8>::UpdateOverhead((char *)this + 16, (unsigned int)v3, (unsigned int)v8);
  v20 = *v11 - 1;
  *v11 = v20;
  if ( (unsigned int)v8 < v20 )
  {
    *(_OWORD *)&v11[4 * v8 + 1] = *(_OWORD *)&v11[4 * v20 + 1];
    v21 = *v11;
    if ( (_DWORD)v8 )
    {
      v22 = v8;
      v23 = (unsigned int)(v8 * (v8 - 1)) >> 1;
      v24 = ((v21 * (v21 - 1)) >> 1) - v23;
      do
      {
        v25 = (unsigned int)(v24 + v23);
        v26 = v11[2 * v25 + 38];
        v11[2 * v23 + 37] = v11[2 * v25 + 37];
        v11[2 * v23 + 38] = v26;
        v23 = (unsigned int)(v23 + 1);
        --v22;
      }
      while ( v22 );
    }
    v27 = v8 + 1;
    if ( (int)v8 + 1 < v21 )
    {
      v28 = v27 + ((v21 * (v21 - 1)) >> 1);
      do
      {
        v29 = v11[2 * v28 + 38];
        v30 = v11[2 * v28 + 37];
        v28 = (unsigned int)(v28 + 1);
        v31 = v27 * (v27 - 1);
        ++v27;
        v32 = (unsigned int)v8 + (v31 >> 1);
        v11[2 * v32 + 37] = v30;
        v11[2 * v32 + 38] = v29;
      }
      while ( v27 < v21 );
    }
    for ( i = v21 + 1; ; ++i )
    {
      v34 = *v11;
      if ( i >= *v11 )
        break;
      v37 = (i * (i - 1)) >> 1;
      v38 = v37 + v21;
      v39 = (unsigned int)v8 + v37;
      v40 = v11[2 * v38 + 38];
      v11[2 * v39 + 37] = v11[2 * v38 + 37];
      v11[2 * v39 + 38] = v40;
    }
    v35 = (_QWORD *)((char *)this + 16 * v34 + 456);
    if ( (_QWORD *)*v35 != v35 )
    {
      **((_QWORD **)this + 2 * v8 + 58) = *v35;
      *(_QWORD *)(*v35 + 8LL) = *((_QWORD *)this + 2 * v8 + 58);
      **((_QWORD **)this + 2 * v34 + 58) = (char *)this + 16 * v8 + 456;
      *((_QWORD *)this + 2 * v8 + 58) = *((_QWORD *)this + 2 * v34 + 58);
      v35[1] = v35;
      *v35 = v35;
    }
  }
}
