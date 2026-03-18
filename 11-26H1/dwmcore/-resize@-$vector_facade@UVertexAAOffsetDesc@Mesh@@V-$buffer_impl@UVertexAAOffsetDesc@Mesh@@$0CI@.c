/*
 * XREFs of ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016EEDC
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18000B800 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800BB010 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18016F10C (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x180212DFC (--$uninitialized_move@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_itera.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x180259EF8 (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 *     ??C?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@QEBAPEAUVertexAAOffsetDesc@Mesh@@XZ @ 0x18025A064 (--C-$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@QEBAPEAUVertexAAOffsetDesc@Mes.c)
 */

__int64 __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
        detail::liberal_expansion_policy **a1,
        unsigned __int64 a2)
{
  __int64 *v2; // r15
  detail::liberal_expansion_policy *v3; // rcx
  __int64 v4; // r8
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  _OWORD *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  _OWORD *v13; // rsi
  _OWORD *v14; // r15
  _OWORD *v15; // rax
  unsigned __int64 v16; // rsi
  LPVOID v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rdx
  void *v20; // rcx
  bool v21; // zf
  __int64 v22; // rsi
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h]
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+50h] [rbp-30h]
  char v27[32]; // [rsp+60h] [rbp-20h] BYREF
  void *v29; // [rsp+C8h] [rbp+48h] BYREF

  v2 = (__int64 *)a1;
  v3 = *a1;
  v4 = v2[1];
  v5 = (v4 - (__int64)v3) >> 5;
  if ( a2 <= v5 )
    return detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
             v2,
             (__int64)(32 * a2) >> 5,
             (v4 - (__int64)((__int64)v3 + 32 * a2)) >> 5);
  v6 = a2 - v5;
  if ( (v2[2] - v4) >> 5 < a2 - v5 )
  {
    v16 = detail::liberal_expansion_policy::expand(v3, (v2[2] - (__int64)v3) >> 5, a2);
    v17 = operator new[](saturated_mul(v16, 0x20uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, (__int64)v17, v5);
    v18 = v2[1];
    v19 = *v2;
    v23 = v25;
    v24 = v26;
    std::uninitialized_move<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
      &v25,
      v19,
      v18,
      &v23);
    v20 = (void *)*v2;
    v21 = *v2 == (_QWORD)(v2 + 3);
    v29 = 0LL;
    *v2 = (__int64)v17;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v22 = *v2 + 32 * v16;
    v2[1] = *v2 + 32 * v5;
    v2[2] = v22;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v29);
  }
  v7 = *v2;
  v8 = (_OWORD *)v2[1];
  v9 = ((__int64)v8 - *v2) >> 5;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, *v2 + 32 * v9, v6);
  v23 = v25;
  v24 = v26;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v6);
  v10 = v9 - v5;
  if ( v6 < v9 - v5 )
    v10 = v6;
  v25 = v23;
  v11 = 32 * v10;
  v26 = v24;
  if ( v8 != &v8[v11 / 0xFFFFFFFFFFFFFFF0uLL] )
  {
    v14 = &v8[v11 / 0xFFFFFFFFFFFFFFF0uLL];
    do
    {
      v8 -= 2;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v25);
      v15 = (_OWORD *)stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>::operator->(&v25);
      *v15 = *v8;
      v15[1] = v8[1];
    }
    while ( v8 != v14 );
    v2 = (__int64 *)a1;
  }
  if ( v9 - v5 > v6 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v25, v7, v9);
    v23 = v25;
    v24 = v26;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v23, v9);
    v25 = v23;
    v26 = v24;
    std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
      v27,
      v7 + 32 * v5,
      32 * (v9 - v6) + v7,
      &v25);
  }
  result = 32 * v6;
  v2[1] += 32 * v6;
  v13 = (_OWORD *)(32 * v5 + v7);
  if ( v6 )
  {
    *v13 = 0LL;
    v13[1] = 0LL;
    qmemcpy(v13 + 2, v13, 8 * ((32 * v6 - 25) >> 3));
  }
  return result;
}
