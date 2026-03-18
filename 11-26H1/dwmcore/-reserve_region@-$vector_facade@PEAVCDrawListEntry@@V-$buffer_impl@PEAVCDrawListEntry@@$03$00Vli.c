/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$buffer_impl@PEAVCDrawListEntry@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18000D9A0
 * Callers:
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::buffer_impl<CDrawListEntry *,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v4; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *i; // r12
  __int64 v11; // r13
  signed __int64 v12; // rbx
  char *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r12
  void *v18; // r15
  __int64 v19; // rbx
  char *v20; // rdi
  __int64 v21; // rdx
  void *v22; // rax
  char *v23; // rdx
  void *v24; // rcx
  __int64 v25; // rax
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  if ( !((v4 - (__int64)v2) >> 3) )
  {
    v14 = *(char **)a1;
    v15 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand(a1, (v4 - (__int64)v14) >> 3, v16);
    v18 = operator new[](saturated_mul(v17, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, (__int64)v18, v15);
    v19 = *((_QWORD *)a1 + 1);
    v20 = *(char **)a1;
    v21 = (v19 - *(_QWORD *)a1) >> 3;
    v26 = v28;
    v27 = v29;
    v22 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v26, v21);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v20, v19, v22);
    v23 = *(char **)a1;
    v24 = 0LL;
    *(_QWORD *)a1 = v18;
    if ( v23 != (char *)a1 + 24 )
      v24 = v23;
    operator delete(v24);
    v2 = (_QWORD *)(*(_QWORD *)a1 + 8 * v15);
    v25 = *(_QWORD *)a1 + 8 * v17;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v25;
  }
  v6 = *(_QWORD *)a1;
  v7 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, *(_QWORD *)a1 + 8 * v7, 1LL);
  v26 = v28;
  v27 = v29;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v26, 1LL);
  v8 = v7 - a2;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v8 = 1LL;
  v28 = v26;
  v29 = v27;
  v9 = 8 * v8;
  for ( i = &v2[v9 / 0xFFFFFFFFFFFFFFF8uLL];
        v2 != i;
        *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v28) = *v2 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v28);
  }
  if ( (unsigned __int64)(v7 - a2) <= 1 )
  {
    v11 = 8 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v28, v6, v7);
    v26 = v28;
    v27 = v29;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v26, v7);
    v11 = 8 * a2;
    v28 = v26;
    v29 = v27;
    v12 = 8 * v7 - v11 - 8;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v28, -(v12 >> 3));
    memmove_0((void *)(v26 + 8 * v27 - v12), (const void *)(v6 + v11), v12);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  return v6 + v11;
}
