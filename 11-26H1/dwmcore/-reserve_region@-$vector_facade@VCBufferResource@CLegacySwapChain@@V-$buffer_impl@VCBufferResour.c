/*
 * XREFs of ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801CF6DC
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x180204C60 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801CF7F8 (--$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwap.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CF830 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCBufferResource@CLegacySwapChain@@@detail@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@detail@@YAXV?$basic_iterator@VCBufferResource@CLegacySwapChain@@@0@0V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@Z @ 0x18021B12C (--$move_backward_uninitialized@V-$basic_iterator@VCBufferResource@CLegacySwapChain@@@detail@@V-$.c)
 *     ??$move_backward@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802A58B0 (--$move_backward@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V-$checked_array_i.c)
 */

__int64 __fastcall detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rsi
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+50h] [rbp-30h]
  char v16[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+50h] BYREF

  v18 = a3;
  detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, *a1 + 16 * v7, 1LL);
  v12 = v14;
  v13 = v15;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v8);
  v18 = v6;
  v9 = v7 - a2;
  v14 = v12;
  if ( (unsigned __int64)(v7 - a2) > 1 )
    v9 = 1LL;
  v15 = v13;
  v17 = v6 - 16 * v9;
  detail::move_backward_uninitialized<detail::basic_iterator<CLegacySwapChain::CBufferResource>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
    &v17,
    &v18,
    &v14);
  if ( (unsigned __int64)(v7 - a2) > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v5, v7);
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v7);
    v10 = 16 * a2;
    v14 = v12;
    v15 = v13;
    std::move_backward<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
      v16,
      v10 + v5,
      16 * v7 + v5 - 16,
      &v14);
  }
  else
  {
    v10 = 16 * a2;
  }
  detail::destruct_range<CLegacySwapChain::CBufferResource>((CD2DFactory *)(v5 + v10));
  a1[1] += 16LL;
  return v5 + v10;
}
