/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180017E10
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x180017B84 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@Z @ 0x180015638 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@.c)
 *     ??$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdropCache@@0@Z @ 0x180017B4C (--$destruct_range@UCachedBlur@CBlurredBackdropCache@@@detail@@YAXPEAUCachedBlur@CBlurredBackdrop.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@PEAUCachedBlur@CBlurredBackdropCache@@@std@@YAPEAUCachedBlur@CBlurredBackdropCache@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@V30@PEAU12@@Z @ 0x180212DA0 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@PE.c)
 */

void __fastcall detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        CBlurredBackdropCache::CachedBlur **a1,
        unsigned __int64 a2)
{
  CBlurredBackdropCache::CachedBlur *v2; // r14
  CBlurredBackdropCache::CachedBlur *v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  CBlurredBackdropCache::CachedBlur *v7; // rsi
  CBlurredBackdropCache::CachedBlur *v8; // rbx
  CBlurredBackdropCache::CachedBlur *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  CBlurredBackdropCache::CachedBlur *v12; // rcx
  unsigned __int64 v13; // r14
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  if ( (v4 - v2) >> 7 < a2 )
  {
    v5 = (v2 - *a1) >> 7;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x180017F43LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 7),
           (v4 - *a1) >> 7,
           v5 + a2);
    v7 = (CBlurredBackdropCache::CachedBlur *)operator new[](saturated_mul(v6, 0x80uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, (__int64)v7, v5);
    v8 = a1[1];
    v9 = *a1;
    v10 = (v8 - *a1) >> 7;
    v16 = v14;
    v17 = v15;
    v11 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *> &,__int64>(
            &v16,
            v10);
    std::_Uninitialized_move_unchecked<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,CBlurredBackdropCache::CachedBlur *>(
      v9,
      v8,
      v11);
    detail::destruct_range<CBlurredBackdropCache::CachedBlur>(*a1, a1[1]);
    v12 = *a1;
    *a1 = v7;
    if ( v12 == (CBlurredBackdropCache::CachedBlur *)(a1 + 3) )
      v12 = 0LL;
    operator delete(v12);
    v13 = (unsigned __int64)*a1 + 128 * v5;
    a1[2] = (CBlurredBackdropCache::CachedBlur *)((char *)*a1 + 128 * v6);
    a1[1] = (CBlurredBackdropCache::CachedBlur *)v13;
  }
}
