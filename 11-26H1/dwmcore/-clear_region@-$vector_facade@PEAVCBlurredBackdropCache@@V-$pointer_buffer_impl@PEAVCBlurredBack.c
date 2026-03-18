/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800181E8
 * Callers:
 *     ?erase_unchecked@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@V?$basic_iterator@QEAVCBlurredBackdropCache@@@2@0@Z @ 0x180017624 (-erase_unchecked@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredB.c)
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18015992C (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ??1?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA@XZ @ 0x1801AF40C (--1-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ?size@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEBA_KXZ @ 0x180018330 (-size@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBackdropCach.c)
 *     ??$move@V?$move_iterator@PEAPEAVIRenderTarget@@@std@@V?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIRenderTarget@@@stdext@@V?$move_iterator@PEAPEAVIRenderTarget@@@0@0V12@@Z @ 0x18014A184 (--$move@V-$move_iterator@PEAPEAVIRenderTarget@@@std@@V-$checked_array_iterator@PEAPEAVIRenderTar.c)
 */

__int64 __fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::clear_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  v7 = a2 + a3;
  v8 = detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::size();
  if ( v7 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v12, v3, v8);
  if ( v7 != v8 )
  {
LABEL_5:
    v10 = v12;
    v11 = v13;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v10, a2);
    v12 = v10;
    v13 = v11;
    std::move<std::move_iterator<IRenderTarget * *>,stdext::checked_array_iterator<IRenderTarget * *>>(
      &v10,
      v3 + 8 * v7,
      v3 + 8 * v8,
      &v12);
  }
  return detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::consume(a1, -a3);
}
