/*
 * XREFs of ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x1800D7FB4
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z @ 0x18029764C (-DelayUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@U_LUID@@II@Z.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800D80E4 (-ensure_extra_capacity@-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@de.c)
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x1800D816C (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x1800D81A4 (--$move_backward_uninitialized@V-$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x180296048 (--$move_backward@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PE.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  char v19[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+50h] BYREF

  v21 = a3;
  detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((v6 - *a1) >> 3);
  v8 = *a1 + 8 * ((v6 - *a1) >> 3);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, v8, 1LL);
  v15 = v17;
  v16 = v18;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, v9);
  v21 = v6;
  v10 = v7 - a2;
  v17 = v15;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v10 = 1LL;
  v18 = v16;
  v20 = v6 - 24 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CDelayUnpin>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
    &v20,
    &v21,
    &v17);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, v5, v7);
    v15 = v17;
    v16 = v18;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, v7);
    v17 = v15;
    v18 = v16;
    v11 = 24 * a2;
    std::move_backward<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
      v19,
      24 * a2 + v5,
      v5 + 24 * (v7 - 1),
      &v17);
  }
  else
  {
    v11 = 24 * a2;
  }
  v12 = v11 + v5 + 24;
  v13 = v5 + v11;
  if ( v8 >= v12 )
    v8 = v12;
  detail::destruct_range<CD3DDevice::CDelayUnpin>(v13, v8);
  a1[1] += 24LL;
  return v13;
}
