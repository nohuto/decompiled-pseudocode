/*
 * XREFs of ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800BFCE0
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800DB414 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800BFBEC (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x18020700C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180207FEC (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??C?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ @ 0x18021FDBC (--C-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@QEBAPEAW4Type@IRenderTarget@@XZ.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
        __int64 *a1,
        unsigned __int64 a2,
        int *a3)
{
  _DWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  int *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v19; // r15
  _DWORD *v20; // r14
  unsigned __int64 v21; // r14
  LPVOID v22; // rsi
  void *v23; // rbx
  __int64 v24; // rdi
  void *v25; // rax
  void *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int128 v29; // [rsp+20h] [rbp-49h] BYREF
  __int64 v30; // [rsp+30h] [rbp-39h]
  __int128 v31; // [rsp+40h] [rbp-29h] BYREF
  __int64 v32; // [rsp+50h] [rbp-19h]
  char v33[96]; // [rsp+60h] [rbp-9h] BYREF

  v3 = (_DWORD *)a1[1];
  v4 = *a1;
  v5 = a1;
  v6 = ((__int64)v3 - *a1) >> 2;
  if ( a2 <= v6 )
    return detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             (__int64)(4 * a2) >> 2,
             (__int64)((__int64)v3 - v4 + -4 * a2) >> 2);
  v7 = 0LL;
  v8 = a2 - v6;
  if ( (a1[2] - (__int64)v3) >> 2 < a2 - v6 )
  {
    v21 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (a1[2] - v4) >> 2, a2);
    v22 = operator new[](saturated_mul(v21, 4uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, (__int64)v22, v6);
    v23 = (void *)*a1;
    v24 = a1[1];
    v29 = v31;
    v30 = v32;
    v25 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                    &v29,
                    (v24 - (__int64)v23) >> 2);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v23, v24, v25);
    v26 = (void *)*a1;
    v27 = *a1 == (_QWORD)(a1 + 3);
    *a1 = (__int64)v22;
    if ( v27 )
      v26 = 0LL;
    operator delete(v26);
    v4 = *a1;
    v28 = *a1 + 4 * v21;
    v5 = a1;
    v3 = (_DWORD *)(*a1 + 4 * v6);
    a1[2] = v28;
    a1[1] = (__int64)v3;
  }
  v9 = ((__int64)v3 - v4) >> 2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, v4 + 4 * v9, v8);
  v29 = v31;
  v30 = v32;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29, v8);
  v10 = v9 - v6;
  v11 = v9 - v6;
  if ( v8 < v9 - v6 )
    v11 = v8;
  v31 = v29;
  v12 = 4 * v11;
  v32 = v30;
  if ( v3 != &v3[v12 / 0xFFFFFFFFFFFFFFFCuLL] )
  {
    v20 = &v3[v12 / 0xFFFFFFFFFFFFFFFCuLL];
    do
    {
      --v3;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v31);
      *(_DWORD *)stdext::checked_array_iterator<enum IRenderTarget::Type *>::operator->(&v31) = *v3;
    }
    while ( v3 != v20 );
    v5 = a1;
    v10 = v9 - v6;
  }
  if ( v10 > v8 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v31, v4, v9);
    v29 = v31;
    v30 = v32;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v29, v9);
    v31 = v29;
    v32 = v30;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      v33,
      v4 + 4 * v6,
      v4 + 4 * (v9 - v8),
      &v31);
  }
  result = v5[1];
  v14 = (int *)(v4 + 4 * v6);
  v5[1] = result + 4 * v8;
  if ( v8 )
  {
    result = (__int64)a3;
    if ( v8 < 4 || v14 <= a3 && &v14[v8 - 1] >= a3 )
      goto LABEL_19;
    v15 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
    do
      v7 += 4LL;
    while ( v7 < v15 );
    v16 = 4 * v15;
    result = *a3;
    v17 = (_DWORD *)(v4 + 4 * v6);
    for ( i = v16 >> 2; i; --i )
      *v17++ = result;
    v14 = (int *)((char *)v14 + v16);
    if ( v7 < v8 )
    {
      result = (__int64)a3;
LABEL_19:
      v19 = v8 - v7;
      do
      {
        *v14++ = *(_DWORD *)result;
        result = (__int64)a3;
        --v19;
      }
      while ( v19 );
    }
  }
  return result;
}
