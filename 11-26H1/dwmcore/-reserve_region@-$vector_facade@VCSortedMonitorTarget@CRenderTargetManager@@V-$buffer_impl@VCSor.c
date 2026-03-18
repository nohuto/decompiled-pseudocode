/*
 * XREFs of ?reserve_region@?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCSortedMonitorTarget@CRenderTargetManager@@_K0@Z @ 0x1801718DC
 * Callers:
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ @ 0x180142FD8 (--C-$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@QEBAPEAUD2D_RECT_F@@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x180211174 (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 */

__int64 __fastcall detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  _OWORD *v2; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  _OWORD *v9; // r15
  __int64 v10; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  LPVOID v14; // r14
  __int64 v15; // rbx
  _QWORD *v16; // rdi
  void *v17; // rax
  _QWORD *v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h]
  char v23[32]; // [rsp+60h] [rbp-20h] BYREF

  v2 = (_OWORD *)*((_QWORD *)a1 + 1);
  if ( !((__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v2) >> 4) )
  {
    v12 = ((__int64)v2 - *(_QWORD *)a1) >> 4;
    if ( v12 + 1 < v12 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180171ACBLL);
    }
    v13 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v12 + 1);
    v14 = operator new[](saturated_mul(v13, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, (__int64)v14, v12);
    v15 = *((_QWORD *)a1 + 1);
    v16 = *(_QWORD **)a1;
    v19 = v21;
    v20 = v22;
    v17 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v19);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v16, v15, v17);
    v18 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v14;
    if ( v18 == (_QWORD *)((char *)a1 + 24) )
      v18 = 0LL;
    operator delete(v18);
    v2 = (_OWORD *)(*(_QWORD *)a1 + 16 * v12);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v13;
    *((_QWORD *)a1 + 1) = v2;
  }
  v5 = *(_QWORD *)a1;
  v6 = ((__int64)v2 - *(_QWORD *)a1) >> 4;
  v7 = v6 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, *(_QWORD *)a1 + 16 * v6, 1LL);
  v19 = v21;
  v20 = v22;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v19, 1LL);
  v8 = v6 - a2;
  if ( (unsigned __int64)(v6 - a2) > 1 )
    v8 = 1LL;
  v21 = v19;
  v9 = &v2[-v8];
  v22 = v20;
  while ( v2 != v9 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v21);
    *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v21) = *v2;
  }
  v10 = 2 * a2;
  if ( v7 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, v5, v6);
    v19 = v21;
    v20 = v22;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v19, v6);
    v21 = v19;
    v22 = v20;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      v23,
      v5 + 8 * v10,
      16 * v6 + v5 - 16,
      &v21);
  }
  *((_QWORD *)a1 + 1) += 16LL;
  return v5 + 8 * v10;
}
