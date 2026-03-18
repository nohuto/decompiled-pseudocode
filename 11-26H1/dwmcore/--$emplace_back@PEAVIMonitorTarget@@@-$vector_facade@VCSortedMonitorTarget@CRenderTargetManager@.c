/*
 * XREFs of ??$emplace_back@PEAVIMonitorTarget@@@?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1801716D0
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

__int64 __fastcall detail::vector_facade<CRenderTargetManager::CSortedMonitorTarget,detail::buffer_impl<CRenderTargetManager::CSortedMonitorTarget,4,1,detail::liberal_expansion_policy>>::emplace_back<IMonitorTarget *>(
        __int64 *a1,
        __int64 a2)
{
  _OWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  __int64 v6; // rsi
  __int64 v7; // rax
  _OWORD *v8; // r13
  __int64 v9; // r15
  __int64 result; // rax
  unsigned __int64 v11; // r14
  LPVOID v12; // rsi
  __int64 v13; // rbx
  void *v14; // rdi
  void *v15; // rax
  void *v16; // rcx
  bool v17; // zf
  __int64 v18; // r14
  __int128 v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h]
  _BYTE v23[32]; // [rsp+60h] [rbp-20h] BYREF

  v2 = (_OWORD *)a1[1];
  v3 = *a1;
  v4 = ((__int64)v2 - *a1) >> 4;
  if ( !((a1[2] - (__int64)v2) >> 4) )
  {
    if ( v4 + 1 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801718D4LL);
    }
    v11 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (a1[2] - v3) >> 4, v4 + 1);
    v12 = operator new[](saturated_mul(v11, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, (__int64)v12, v4);
    v13 = a1[1];
    v14 = (void *)*a1;
    v19 = v21;
    v20 = v22;
    v15 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v19);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v14, v13, v15);
    v16 = (void *)*a1;
    v17 = *a1 == (_QWORD)(a1 + 3);
    *a1 = (__int64)v12;
    if ( v17 )
      v16 = 0LL;
    operator delete(v16);
    v3 = *a1;
    v2 = (_OWORD *)(*a1 + 16 * v4);
    v18 = *a1 + 16 * v11;
    a1[1] = (__int64)v2;
    a1[2] = v18;
  }
  v6 = ((__int64)v2 - v3) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, v3 + 16 * v6, 1LL);
  v19 = v21;
  v20 = v22;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v19, 1LL);
  v7 = v6 - v4;
  if ( v6 - v4 > 1 )
    v7 = 1LL;
  v21 = v19;
  v8 = &v2[-v7];
  v22 = v20;
  while ( v2 != v8 )
  {
    --v2;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v21);
    *(_OWORD *)stdext::checked_array_iterator<D2D_RECT_F *>::operator->(&v21) = *v2;
  }
  if ( v6 - v4 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v21, v3, v6);
    v19 = v21;
    v20 = v22;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v19, v6);
    v21 = v19;
    v22 = v20;
    std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
      v23,
      v3 + 16 * v4,
      v3 + 16 * v6 - 16,
      &v21);
  }
  a1[1] += 16LL;
  v9 = 2 * v4;
  *(_QWORD *)(v3 + 8 * v9) = a2;
  result = 0LL;
  *(_QWORD *)(v3 + 8 * v9 + 8) = 0LL;
  return result;
}
