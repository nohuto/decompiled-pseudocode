/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@IEAAPEAPEAVCResource@@_K0@Z @ 0x180024AB0
 * Callers:
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x180023C38 (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?push_back@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEAAX$$QEAPEAVCResource@@@Z @ 0x180024DAC (-push_back@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@de.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180112540 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ?last@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ @ 0x180021E10 (-last@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEBAPEAPEAVCResource@@XZ.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z @ 0x180160574 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@QEAAX_K@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18016C5C0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // r13
  unsigned __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+40h] [rbp-40h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  _BYTE v17[32]; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+28h]

  detail::pointer_buffer_impl<CResource *,0>::ensure_extra_capacity(a1, 1LL);
  v4 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(a1);
  v5 = v4 - a2;
  v6 = v4;
  v7 = (_QWORD *)detail::pointer_buffer_impl<CResource *,0>::last(a1);
  v8 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v8 + 8 * v6, 1LL);
  v13 = v15;
  v14 = v16;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, 1LL);
  v9 = v5;
  if ( v5 > 1 )
    v9 = 1LL;
  v15 = v13;
  v10 = &v7[-v9];
  v16 = v14;
  while ( v7 != v10 )
  {
    --v7;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v15);
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v15) = *v7;
  }
  if ( v5 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, v8, v6);
    v13 = v15;
    v14 = v16;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v13, v6);
    v15 = v13;
    v16 = v14;
    std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
      v17,
      v8 + 8 * a2,
      v8 + 8 * (v6 - 1),
      &v15);
  }
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v11 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
      ++*(_QWORD *)(v11 - 16);
    }
    else if ( (unsigned __int64)(*(_DWORD *)a1 & 3) - 2 >= 2 )
    {
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
  }
  else
  {
    *a1 = 2LL;
  }
  return v8 + 8 * a2;
}
