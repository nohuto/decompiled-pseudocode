/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CF830
 * Callers:
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801CF6DC (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801CF7F8 (--$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwap.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802A594C (--$uninitialized_move@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V-$checked_ar.c)
 */

void __fastcall detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CD2DFactory **a1,
        unsigned __int64 a2)
{
  CD2DFactory *v2; // rsi
  CD2DFactory *v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdi
  CD2DFactory *v8; // rbx
  CD2DFactory *v9; // r8
  CD2DFactory *v10; // rdx
  CD2DFactory *v11; // rcx
  __int64 v12; // rdi
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h]
  void *v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1[1];
  v4 = a1[2];
  if ( (v4 - v2) >> 4 < a2 )
  {
    v5 = (v2 - *a1) >> 4;
    v6 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 4),
           (v4 - *a1) >> 4,
           v6);
    v8 = (CD2DFactory *)operator new[](saturated_mul(v7, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, (__int64)v8, v5);
    v9 = a1[1];
    v10 = *a1;
    v15 = v13;
    v16 = v14;
    std::uninitialized_move<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
      &v13,
      v10,
      v9,
      &v15);
    detail::destruct_range<CLegacySwapChain::CBufferResource>(*a1, a1[1]);
    v11 = *a1;
    *a1 = v8;
    v17 = 0LL;
    if ( v11 == (CD2DFactory *)(a1 + 3) )
      v11 = 0LL;
    operator delete(v11);
    v12 = (__int64)*a1 + 16 * v7;
    a1[1] = (CD2DFactory *)((char *)*a1 + 16 * v5);
    a1[2] = (CD2DFactory *)v12;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v17);
  }
}
