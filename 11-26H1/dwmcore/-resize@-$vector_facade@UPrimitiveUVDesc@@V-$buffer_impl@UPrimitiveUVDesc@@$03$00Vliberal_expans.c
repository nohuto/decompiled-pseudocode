/*
 * XREFs of ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016CBCC
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6BA0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_NPEA_N@Z @ 0x1800BE540 (-AppendCpuClipAntialiasEntry@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexA.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x18016CE70 (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansi.c)
 *     ??$move_backward@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x18020B9F4 (--$move_backward@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAUPrimi.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x180259F7C (--$uninitialized_move@V-$move_iterator@PEAUPrimitiveUVDesc@@@std@@V-$checked_array_iterator@PEAU.c)
 *     ??C?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@QEBAPEAUPrimitiveUVDesc@@XZ @ 0x18025A01C (--C-$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@QEBAPEAUPrimitiveUVDesc@@XZ.c)
 */

char __fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::resize(
        detail::liberal_expansion_policy *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  __int64 *v3; // r15
  detail::liberal_expansion_policy *v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char result; // al
  unsigned __int64 v15; // rcx
  __int128 v16; // xmm0
  int v17; // xmm1_4
  int v18; // xmm2_4
  int v19; // xmm3_4
  int v20; // xmm4_4
  int v21; // xmm5_4
  int v22; // xmm6_4
  int v23; // xmm7_4
  int v24; // xmm8_4
  int v25; // xmm9_4
  __int64 v26; // rdi
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdi
  LPVOID v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rdx
  void *v32; // rcx
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD v36[3]; // [rsp+20h] [rbp-B1h] BYREF
  __int64 v37; // [rsp+38h] [rbp-99h]
  _QWORD v38[3]; // [rsp+40h] [rbp-91h] BYREF
  __int64 v39; // [rsp+58h] [rbp-79h]
  __int128 v40; // [rsp+68h] [rbp-69h]
  __int128 v41; // [rsp+78h] [rbp-59h]
  _BYTE v42[24]; // [rsp+88h] [rbp-49h] BYREF
  char v43[88]; // [rsp+A0h] [rbp-31h] BYREF
  detail::liberal_expansion_policy *v44; // [rsp+138h] [rbp+67h] BYREF
  void *v45; // [rsp+140h] [rbp+6Fh] BYREF
  unsigned __int64 v46; // [rsp+148h] [rbp+77h] BYREF

  v44 = a1;
  v2 = *(_QWORD *)a1;
  v3 = (__int64 *)a1;
  v4 = (detail::liberal_expansion_policy *)*((_QWORD *)a1 + 1);
  v5 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v4 - v2) >> 3);
  v40 = 0LL;
  v41 = 0LL;
  memset(v42, 0, sizeof(v42));
  if ( a2 <= v5 )
  {
    v44 = v4;
    v45 = (void *)(v2 + 56 * a2);
    return detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::erase(
             v3,
             &v46,
             &v45,
             &v44);
  }
  else
  {
    v6 = a2 - v5;
    if ( 0x6DB6DB6DB6DB6DB7LL * ((v3[2] - (__int64)v4) >> 3) < a2 - v5 )
    {
      v28 = detail::liberal_expansion_policy::expand(v4, 0x6DB6DB6DB6DB6DB7LL * ((v3[2] - v2) >> 3), a2);
      v29 = operator new[](saturated_mul(v28, 0x38uLL));
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36[1], (__int64)v29, v5);
      v30 = v3[1];
      v31 = *v3;
      *(_OWORD *)&v38[1] = *(_OWORD *)&v36[1];
      v39 = v37;
      std::uninitialized_move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        &v36[1],
        v31,
        v30,
        &v38[1]);
      v32 = (void *)*v3;
      v33 = *v3 == (_QWORD)(v3 + 3);
      v45 = 0LL;
      *v3 = (__int64)v29;
      if ( v33 )
        v32 = 0LL;
      operator delete(v32);
      v3[1] = *v3 + 56 * v5;
      v3[2] = *v3 + 56 * v28;
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v45);
    }
    v7 = *v3;
    v8 = v3[1];
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((v8 - *v3) >> 3);
    v11 = *v3 + 8 * ((v8 - *v3) >> 3);
    v46 = v9 - v5;
    v10 = v9 - v5;
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36[1], v11, v6);
    *(_OWORD *)&v38[1] = *(_OWORD *)&v36[1];
    v39 = v37;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v38[1], v6);
    v12 = v9 - v5;
    if ( v6 < v9 - v5 )
      v12 = v6;
    *(_OWORD *)&v36[1] = *(_OWORD *)&v38[1];
    v37 = v39;
    v13 = v8 - 56 * v12;
    if ( v8 != v13 )
    {
      v26 = v8 + 8;
      v27 = v13;
      do
      {
        v34 = v26;
        v26 -= 56LL;
        stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v36[1]);
        v35 = stdext::checked_array_iterator<PrimitiveUVDesc *>::operator->(&v36[1]);
        *(_DWORD *)v35 = *(_DWORD *)(v26 - 8);
        *(_DWORD *)(v35 + 4) = *(_DWORD *)(v26 - 4);
        *(_DWORD *)(v35 + 8) = *(_DWORD *)v26;
        *(_DWORD *)(v35 + 12) = *(_DWORD *)(v26 + 4);
        *(_DWORD *)(v35 + 16) = *(_DWORD *)(v26 + 8);
        *(_DWORD *)(v35 + 20) = *(_DWORD *)(v26 + 12);
        *(_DWORD *)(v35 + 24) = *(_DWORD *)(v26 + 16);
        *(_DWORD *)(v35 + 28) = *(_DWORD *)(v26 + 20);
        *(_DWORD *)(v35 + 32) = *(_DWORD *)(v26 + 24);
        *(_OWORD *)(v35 + 36) = *(_OWORD *)(v26 + 28);
        *(_BYTE *)(v35 + 52) = *(_BYTE *)(v26 + 44);
      }
      while ( v34 - 64 != v27 );
      v3 = (__int64 *)v44;
      v10 = v46;
    }
    if ( v10 > v6 )
    {
      stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v36[1], v7, v9);
      *(_OWORD *)&v38[1] = *(_OWORD *)&v36[1];
      v39 = v37;
      stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v38[1], v9);
      *(_OWORD *)&v36[1] = *(_OWORD *)&v38[1];
      v37 = v39;
      ((void (__fastcall *)(char *, unsigned __int64, unsigned __int64, _QWORD *))std::move_backward<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>)(
        v43,
        v7 + 56 * v5,
        v7 + 56 * (v9 - v6),
        &v36[1]);
    }
    result = 56 * v6;
    v3[1] += 56 * v6;
    v15 = v7 + 56 * v5;
    if ( v6 )
    {
      result = v42[20];
      v16 = *(_OWORD *)&v42[4];
      v17 = *(_DWORD *)v42;
      v18 = HIDWORD(v41);
      v19 = DWORD2(v41);
      v20 = DWORD1(v41);
      v21 = v41;
      v22 = HIDWORD(v40);
      v23 = DWORD2(v40);
      v24 = DWORD1(v40);
      v25 = v40;
      do
      {
        *(_DWORD *)v15 = v25;
        *(_DWORD *)(v15 + 4) = v24;
        *(_DWORD *)(v15 + 8) = v23;
        *(_DWORD *)(v15 + 12) = v22;
        *(_DWORD *)(v15 + 16) = v21;
        *(_DWORD *)(v15 + 20) = v20;
        *(_DWORD *)(v15 + 24) = v19;
        *(_DWORD *)(v15 + 28) = v18;
        *(_DWORD *)(v15 + 32) = v17;
        *(_BYTE *)(v15 + 52) = result;
        *(_OWORD *)(v15 + 36) = v16;
        v15 += 56LL;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
