/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCGdiSpriteBitmap@@V?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@@detail@@IEAAPEAPEAVCGdiSpriteBitmap@@_K0@Z @ 0x1800DF9D4
 * Callers:
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x1802693C4 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCResource@@V?$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18001F480 (-size@-$vector_facade@PEAVCResource@@V-$pointer_buffer_impl@PEAVCResource@@$0A@@detail@@@detail@.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??C?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEBAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18008FA54 (--C-$checked_array_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@.c)
 *     ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEAAX_K@Z @ 0x1800DFDD0 (-ensure_extra_capacity@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEAAX_K@Z.c)
 *     ?last@?$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ @ 0x1800E0830 (-last@-$pointer_buffer_impl@PEAVCGdiSpriteBitmap@@$0A@@detail@@QEBAPEAPEAVCGdiSpriteBitmap@@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CGdiSpriteBitmap *,detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r15
  __int64 v6; // rax
  _QWORD *v7; // r12
  __int64 v8; // r8
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v17; // [rsp+A0h] [rbp+40h]

  detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::ensure_extra_capacity(a1, 1LL);
  v17 = detail::vector_facade<CResource *,detail::pointer_buffer_impl<CResource *,0>>::size(a1);
  v4 = (_QWORD *)detail::pointer_buffer_impl<CGdiSpriteBitmap *,0>::last(a1);
  v5 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v5 + 8 * v17, 1LL);
  v12 = v14;
  v13 = v15;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, 1LL);
  v6 = v17 - a2;
  if ( (unsigned __int64)(v17 - a2) > 1 )
    v6 = 1LL;
  v14 = v12;
  v7 = &v4[-v6];
  v15 = v13;
  while ( v4 != v7 )
  {
    --v4;
    stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v14);
    *(_QWORD *)stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>::operator->(&v14) = *v4;
  }
  if ( (unsigned __int64)(v17 - a2) <= 1 )
  {
    v9 = 8 * a2;
  }
  else
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v5, v17);
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v8);
    v9 = 8 * a2;
    v14 = v12;
    v15 = v13;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v14, -((8 * v17 - v9 - 8) >> 3));
    memmove_0((void *)(v12 + 8 * v13 - (8 * v17 - v9 - 8)), (const void *)(v9 + v5), 8 * v17 - v9 - 8);
  }
  if ( (*(_DWORD *)a1 & 3) != 0 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v10 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
      ++*(_QWORD *)(v10 - 16);
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
  return v9 + v5;
}
