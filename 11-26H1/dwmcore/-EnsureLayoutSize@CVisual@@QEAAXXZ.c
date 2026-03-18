/*
 * XREFs of ?EnsureLayoutSize@CVisual@@QEAAXXZ @ 0x18008E040
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18001E9C8 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800264A4 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18008DB30 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

void __fastcall CVisual::EnsureLayoutSize(CVisual *this)
{
  _BYTE *v1; // r15
  __int64 v2; // r12
  CVisual **v3; // rbx
  CVisual *v4; // r13
  char *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r8
  SIZE_T v14; // r9
  unsigned __int64 v15; // r14
  SIZE_T v16; // rax
  void *v17; // rsi
  __int64 v18; // rbx
  void *v19; // rdi
  void *v20; // rax
  _BYTE *v21; // rax
  void *v22; // rcx
  char *v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  CVisual **v29; // r14
  CVisual **v30; // rax
  __int64 v31; // xmm6_8
  _BYTE *v32; // rbx
  signed __int64 v33; // rdi
  __int64 v34; // rax
  float v35; // xmm2_4
  float v36; // xmm3_4
  float v37; // xmm8_4
  float v38; // xmm7_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  bool v44; // r14
  char v45; // si
  __int64 v46; // rax
  unsigned __int64 v47; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h]
  __int128 v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h]
  CVisual **v55; // [rsp+90h] [rbp-70h]
  char *v56; // [rsp+98h] [rbp-68h]
  _BYTE Mem[512]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v58[2]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v1 = Mem;
  v2 = 0LL;
  Src = Mem;
  v3 = (CVisual **)Mem;
  v4 = this;
  v55 = (CVisual **)Mem;
  v5 = (char *)v58;
  v56 = (char *)v58;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 110);
  if ( this )
  {
    while ( *((_QWORD *)v4 + 39) != v2 )
    {
      v12 = ((char *)v3 - v1) >> 3;
      v47 = v12;
      if ( !((v5 - (char *)v3) >> 3) )
      {
        v13 = v12 + 1;
        if ( v12 + 1 < v12 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
        }
        v15 = detail::liberal_expansion_policy::expand(this, (v5 - v1) >> 3, v13);
        v16 = 8 * v15;
        if ( !is_mul_ok(v15, 8uLL) )
          v16 = v14;
        v17 = operator new[](v16);
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v48, (__int64)v17, v47);
        v18 = (__int64)v55;
        v19 = Src;
        v50 = v48;
        v51 = v49;
        v20 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(
                        &v50,
                        ((char *)v55 - (_BYTE *)Src) >> 3);
        std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v19, v18, v20);
        v21 = Src;
        v22 = 0LL;
        Src = v17;
        if ( v21 != Mem )
          v22 = v21;
        operator delete(v22);
        v1 = Src;
        v3 = (CVisual **)((char *)Src + 8 * v47);
        v23 = (char *)Src + 8 * v15;
        v55 = v3;
        v12 = v47;
        v56 = v23;
      }
      v24 = ((char *)v3 - v1) >> 3;
      v25 = v24 - v12;
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v52, (__int64)&v1[8 * v24], 1LL);
      v50 = v52;
      v51 = v53;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v50, v26);
      v27 = v24 - v12;
      if ( v24 - v12 > 1 )
        v27 = 1LL;
      v48 = v50;
      v49 = v51;
      v28 = 8 * v27;
      this = (CVisual *)&v3[v28 / 0xFFFFFFFFFFFFFFF8uLL];
      if ( v3 != &v3[v28 / 0xFFFFFFFFFFFFFFF8uLL] )
      {
        v29 = &v3[v28 / 0xFFFFFFFFFFFFFFF8uLL];
        do
        {
          --v3;
          stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v48);
          v30 = (CVisual **)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v48);
          this = *v3;
          *v30 = *v3;
        }
        while ( v3 != v29 );
        v12 = v47;
      }
      if ( v25 > 1 )
      {
        stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v48, (__int64)v1, v24);
        v52 = v48;
        v53 = v49;
        stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v52, v24);
        v31 = v52;
        v49 = v53;
        v48 = v52;
        v32 = &v1[8 * v24 - 8];
        v33 = 8 * (v24 - 1) - 8 * v12;
        stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v48, -(v33 >> 3));
        memmove_0(&v1[8 * v12 + v31 + 8 * v53 - (_QWORD)v32], &v1[8 * v12], v33);
      }
      ++v55;
      *(_QWORD *)&v1[8 * v12] = v4;
      v4 = (CVisual *)*((_QWORD *)v4 + 11);
      v3 = v55;
      v1 = Src;
      if ( !v4 )
        break;
      v5 = v56;
    }
  }
  v6 = ((char *)v3 - v1) >> 3;
  v7 = (int)v6;
  if ( (int)v6 > 0 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)&v1[8 * v7 - 8];
      if ( (*(_BYTE *)(v10 + 102) & 0x20) != 0 )
      {
        v11 = *(_QWORD *)(v10 + 88);
        if ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 96) & 1) == 0 )
            goto LABEL_15;
        }
      }
      v34 = *(_QWORD *)(v10 + 88);
      v35 = 0.0;
      v36 = 0.0;
      v37 = *(float *)(v10 + 128);
      v38 = *(float *)(v10 + 144);
      if ( v34 )
      {
        v35 = *(float *)(v34 + 140);
        v36 = *(float *)(v34 + 144);
      }
      CVisual::GetRelativeOffsetInternal(*(CVisual **)&v1[8 * v7 - 8], (struct D2D_VECTOR_3F *)&v52);
      v39 = (float)(*(float *)&v52 * v35) + *(float *)(v10 + 112);
      *(float *)(v10 + 128) = (float)(*((float *)&v52 + 1) * v36) + *(float *)(v10 + 116);
      *(float *)(v10 + 124) = v39;
      CVisual::GetRelativeLayoutSizeInternal((CVisual *)v10, &v47);
      v42 = (float)(*(float *)&v47 * v35) + *(float *)(v10 + 132);
      v43 = (float)(*((float *)&v47 + 1) * v36) + *(float *)(v10 + 136);
      *(float *)(v10 + 140) = v42;
      *(float *)(v10 + 144) = v43;
      if ( v42 < 0.0 )
      {
        *(_DWORD *)(v10 + 140) = 0;
        v42 = 0.0;
      }
      if ( v43 < 0.0 )
      {
        *(_DWORD *)(v10 + 144) = 0;
        v43 = 0.0;
      }
      v44 = v40 != *(float *)(v10 + 124) || v37 != *(float *)(v10 + 128);
      if ( v41 == v42 && v38 == v43 )
      {
        v45 = 0;
      }
      else
      {
        v46 = *(_QWORD *)(v10 + 240);
        v45 = 1;
        if ( v46 && *(_BYTE *)(v46 + 132) )
          CVisual::OnClipChanged((CVisual *)v10);
        CVisual::OnLayoutChanged((CVisual *)v10);
      }
      if ( v44 )
        break;
      if ( v45 )
        goto LABEL_55;
LABEL_15:
      --v7;
      *(_QWORD *)(v10 + 312) = v2;
      v1 = Src;
      if ( v7 <= 0 )
      {
        v3 = v55;
        goto LABEL_6;
      }
    }
    CVisual::OnOuterTransformChanged((CVisual *)v10);
LABEL_55:
    *(_BYTE *)(v10 + 96) |= 1u;
    goto LABEL_15;
  }
LABEL_6:
  v8 = ((char *)v3 - v1) >> 3;
  if ( v8 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v48, (__int64)v1, v8);
    v1 = Src;
    v55 -= v8;
  }
  Src = 0LL;
  if ( v1 != Mem )
  {
    if ( v1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v1);
    }
  }
}
