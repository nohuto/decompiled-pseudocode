/*
 * XREFs of ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180064790
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18003F1EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z @ 0x180064CE0 (-Is2DAffineOrNaN@CMILMatrix@@QEBA_N_N@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007E1B0 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18007ECC0 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x18007EE50 (-Grow@-$CWatermarkStack@_N$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::ApplyTransformToDrawingContext(
        CShapeDrawingContext *this,
        const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v4; // rdx
  __m128i v5; // xmm0
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  FLOAT m12; // xmm1_4
  FLOAT m22; // xmm0_4
  FLOAT m21; // xmm1_4
  __int64 v14; // r15
  FLOAT dx; // xmm0_4
  FLOAT dy; // xmm1_4
  int v17; // eax
  unsigned int v18; // eax
  __int64 *v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  int v24; // eax
  CMILMatrix *v25; // rcx
  bool v26; // di
  unsigned int v27; // edi
  unsigned int v28; // eax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  int v40; // esi
  int v41; // r14d
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int128 v47; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v48; // [rsp+40h] [rbp-C0h]
  __m128i si128; // [rsp+50h] [rbp-B0h]
  _BYTE v50[20]; // [rsp+60h] [rbp-A0h]
  __int128 v51; // [rsp+80h] [rbp-80h]
  __m128 v52[4]; // [rsp+90h] [rbp-70h] BYREF
  int v53; // [rsp+D0h] [rbp-30h]
  _BYTE v54[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v55; // [rsp+120h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  if ( !a2 )
  {
    if ( *((_BYTE *)this + 522) )
    {
      v29 = *((_QWORD *)this + 40);
      v30 = 0LL;
      v31 = *(_DWORD *)(v29 + 264);
      if ( v31 )
      {
        v32 = (unsigned int)(v31 - 1);
        *(_DWORD *)(v29 + 264) = v32;
        v30 = *(__m128i *)(*(_QWORD *)(v29 + 256) + 16 * v32);
      }
      if ( _mm_srli_si128(v30, 8).m128i_u64[0] )
      {
        v33 = *(_DWORD *)(v29 + 336);
        if ( v33 )
          *(_DWORD *)(v29 + 336) = v33 - 1;
      }
      v34 = *(_DWORD *)(v29 + 288);
      if ( v34 )
        *(_DWORD *)(v29 + 288) = v34 - 1;
      v35 = *(_DWORD *)(v29 + 312);
      if ( v35 )
        *(_DWORD *)(v29 + 312) = v35 - 1;
      *((_BYTE *)this + 522) = 0;
    }
    return 0LL;
  }
  if ( *((_BYTE *)this + 520) && *((_BYTE *)this + 522) )
  {
    v4 = *((_QWORD *)this + 40);
    v5 = 0LL;
    v6 = *(_DWORD *)(v4 + 264);
    if ( v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      *(_DWORD *)(v4 + 264) = v7;
      v5 = *(__m128i *)(*(_QWORD *)(v4 + 256) + 16 * v7);
    }
    if ( _mm_srli_si128(v5, 8).m128i_u64[0] )
    {
      v8 = *(_DWORD *)(v4 + 336);
      if ( v8 )
        *(_DWORD *)(v4 + 336) = v8 - 1;
    }
    v9 = *(_DWORD *)(v4 + 288);
    if ( v9 )
      *(_DWORD *)(v4 + 288) = v9 - 1;
    v10 = *(_DWORD *)(v4 + 312);
    if ( v10 )
      *(_DWORD *)(v4 + 312) = v10 - 1;
    *((_BYTE *)this + 522) = 0;
  }
  if ( *((_BYTE *)this + 522) )
    return 0LL;
  m12 = a2->m12;
  *(FLOAT *)&v47 = a2->m11;
  m22 = a2->m22;
  *(_QWORD *)&v50[12] = 1065353216LL;
  *((FLOAT *)&v48 + 1) = m22;
  *((FLOAT *)&v47 + 1) = m12;
  m21 = a2->m21;
  v14 = *((_QWORD *)this + 40);
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  dx = a2->dx;
  *(FLOAT *)&v48 = m21;
  dy = a2->dy;
  *(FLOAT *)v50 = dx;
  *(_QWORD *)&v50[4] = LODWORD(dy);
  *((_QWORD *)&v47 + 1) = 0LL;
  *((_QWORD *)&v48 + 1) = 0LL;
  *(_WORD *)&v50[16] = 10248;
  v17 = *(_DWORD *)(v14 + 268);
  v51 = 5uLL;
  if ( *(_DWORD *)(v14 + 264) == v17 )
  {
    v43 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow(v14 + 256);
    v41 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v43,
        v14 + 256);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xCF7u, 0LL);
      v27 = v41;
      goto LABEL_50;
    }
  }
  *(_OWORD *)(*(_QWORD *)(v14 + 256) + 16LL * (unsigned int)(*(_DWORD *)(v14 + 264))++) = v51;
  v18 = *(_DWORD *)(v14 + 276);
  if ( v18 <= *(_DWORD *)(v14 + 264) )
    v18 = *(_DWORD *)(v14 + 264);
  *(_DWORD *)(v14 + 276) = v18;
  v19 = (__int64 *)(v14 + 280);
  v20 = *(_DWORD *)(v14 + 288);
  if ( v20 )
  {
    v53 = 0;
    v37 = (unsigned int)(v20 - 1);
    v38 = *v19;
    v55 = 0;
    v52[0] = *(__m128 *)(68 * v37 + v38);
    v52[1] = *(__m128 *)(68 * v37 + v38 + 16);
    v52[2] = *(__m128 *)(68 * v37 + v38 + 32);
    v52[3] = *(__m128 *)(68 * v37 + v38 + 48);
    v53 = *(_DWORD *)(68 * v37 + v38 + 64);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v47, v52, (struct CMILMatrix *)v54);
    v39 = CWatermarkStack<CMILMatrix,8,2,8>::Push(v14 + 280, v54);
    v40 = v39;
    v41 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x45u, 0LL);
LABEL_46:
      v27 = v41;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0xCFCu, 0LL);
      goto LABEL_48;
    }
  }
  else
  {
    if ( !*(_DWORD *)(v14 + 292) )
    {
      v44 = CWatermarkStack<CMILMatrix,8,2,8>::Grow(v14 + 280);
      v41 = v44;
      if ( v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v44,
          v14 + 280);
        v40 = v41;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x36u, 0LL);
        goto LABEL_46;
      }
    }
    v21 = *v19;
    v22 = 68LL * *(unsigned int *)(v14 + 288);
    *(_OWORD *)(v22 + v21) = v47;
    *(_OWORD *)(v22 + v21 + 16) = v48;
    *(__m128i *)(v22 + v21 + 32) = si128;
    *(_OWORD *)(v22 + v21 + 48) = *(_OWORD *)v50;
    *(_DWORD *)(v22 + v21 + 64) = *(_DWORD *)&v50[16];
    v23 = *(_DWORD *)(v14 + 300);
    if ( v23 <= ++*(_DWORD *)(v14 + 288) )
      v23 = *(_DWORD *)(v14 + 288);
    *(_DWORD *)(v14 + 300) = v23;
  }
  v24 = *(_DWORD *)(v14 + 288);
  if ( v24 )
    v25 = (CMILMatrix *)(*v19 + 68LL * (unsigned int)(v24 - 1));
  else
    v25 = (CMILMatrix *)&CMILMatrix::Identity;
  v26 = !CMILMatrix::Is2DAffineOrNaN(v25, v22);
  if ( *(_DWORD *)(v14 + 312) != *(_DWORD *)(v14 + 316)
    || (v45 = CWatermarkStack<bool,64,2,10>::Grow(v14 + 304), v41 = v45, v45 >= 0) )
  {
    *(_BYTE *)(*(unsigned int *)(v14 + 312) + *(_QWORD *)(v14 + 304)) = v26;
    v27 = 0;
    v28 = *(_DWORD *)(v14 + 324);
    if ( v28 <= ++*(_DWORD *)(v14 + 312) )
      v28 = *(_DWORD *)(v14 + 312);
    *(_DWORD *)(v14 + 324) = v28;
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v45,
    v14 + 304);
  v27 = v41;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xD00u, 0LL);
  v46 = *(_DWORD *)(v14 + 288);
  if ( v46 )
    *(_DWORD *)(v14 + 288) = v46 - 1;
LABEL_48:
  v42 = *(_DWORD *)(v14 + 264);
  if ( v42 )
  {
    *(_DWORD *)(v14 + 264) = v42 - 1;
    goto LABEL_50;
  }
  v27 = v41;
  if ( v41 < 0 )
  {
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x186u, 0LL);
    return v27;
  }
LABEL_42:
  *((_BYTE *)this + 520) = 0;
  *((_BYTE *)this + 522) = 1;
  return v27;
}
