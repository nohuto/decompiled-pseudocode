/*
 * XREFs of ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@$0A@@detail@@@detail@@QEAAXXZ @ 0x18002D440
 * Callers:
 *     ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18002D3C0 (--_GCDrawListCache@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCCompositionSurfaceBitmap@@V?$pointer_buffer_impl@PEAVCCompositionSurfaceBitmap@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x18000E770 (-size@-$vector_facade@PEAVCCompositionSurfaceBitmap@@V-$pointer_buffer_impl@PEAVCCompositionSurf.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *,0>>::clear(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-10h]
  void *retaddr; // [rsp+68h] [rbp+8h]

  result = detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(a1);
  v3 = 0LL;
  v4 = result;
  if ( !result )
    return result;
  v5 = detail::vector_facade<CCompositionSurfaceBitmap *,detail::pointer_buffer_impl<CCompositionSurfaceBitmap *,0>>::size(a1);
  if ( v4 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_21;
  }
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3) == 1 )
    {
      v3 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_9;
    }
    if ( (*a1 & 3) == 2 )
      goto LABEL_9;
    if ( (*a1 & 3) != 3 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v3 = (unsigned __int64)a1;
LABEL_9:
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v9, v3, v5);
  if ( v4 != v5 )
  {
LABEL_21:
    v7 = v9;
    v8 = v10;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v7, 0LL);
    v9 = v7;
    v10 = v8;
    std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
      &v7,
      v3 + 8 * v4,
      v3 + 8 * v5,
      &v9);
  }
  result = *(_DWORD *)a1 & 3;
  if ( (*(_DWORD *)a1 & 3) == 0 )
  {
LABEL_15:
    *a1 = 2LL;
    return result;
  }
  v6 = result - 1;
  if ( v6 )
  {
    result = v6 - 1;
    if ( result )
    {
      if ( result != 1 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( v4 != -1LL )
        goto LABEL_15;
    }
  }
  else
  {
    result = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
    *(_QWORD *)(result - 16) -= v4;
  }
  return result;
}
