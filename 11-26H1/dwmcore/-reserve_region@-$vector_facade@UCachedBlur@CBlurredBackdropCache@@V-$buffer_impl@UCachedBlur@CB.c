/*
 * XREFs of ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x180017B84
 * Callers:
 *     ??$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCBackdropVisualImage@@PEBXUEffectInput@@@Z @ 0x180018AF4 (--$emplace_back@PEAVCBackdropVisualImage@@PEBXUEffectInput@@@-$vector_facade@UCachedBlur@CBlurre.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x180017DEC (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180017E10 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ??F?$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ @ 0x18008FA08 (--F-$checked_array_iterator@PEAUClippingScopeState@CScopedClipStack@@@stdext@@QEAAAEAV01@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180288B94 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??C?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@QEBAPEAUCachedBlur@CBlurredBackdropCache@@XZ @ 0x180288C40 (--C-$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@QEBAPEAUCachedBlur@CB.c)
 */

CBlurredBackdropCache::CachedBlur *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int64 v8; // r13
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  CBlurredBackdropCache::CachedBlur *v13; // r15
  unsigned int v14; // edx
  CBlurredBackdropCache::CachedBlur *v15; // rbx
  CBlurredBackdropCache::CachedBlur *v16; // rdi
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h]
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h]
  char v25[32]; // [rsp+60h] [rbp-20h] BYREF

  v3 = a1;
  detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *v3;
  v5 = (_QWORD *)v3[1];
  v6 = ((__int64)v5 - *v3) >> 7;
  v7 = v6 << 7;
  v8 = v6 - a2;
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, (v6 << 7) + *v3, 1LL);
  v21 = v23;
  v22 = v24;
  stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v9);
  v10 = v6 - a2;
  v23 = v21;
  if ( (unsigned __int64)(v6 - a2) > 1 )
    v10 = 1LL;
  v24 = v22;
  v11 = v10 << 7;
  if ( v5 != (_QWORD *)((char *)v5 - v11) )
  {
    v18 = (_QWORD *)((char *)v5 - v11);
    do
    {
      v5 -= 16;
      stdext::checked_array_iterator<CScopedClipStack::ClippingScopeState *>::operator--(&v23);
      v19 = (_QWORD *)stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>::operator->(&v23);
      *v19 = *v5;
      v19[1] = v5[1];
      EffectInput::EffectInput((EffectInput *)(v19 + 2), (const struct EffectInput *)(v5 + 2));
    }
    while ( v5 != v18 );
    v3 = a1;
  }
  v12 = a2 << 7;
  if ( v8 > 1 )
  {
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v23, v4, v6);
    v21 = v23;
    v22 = v24;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v21, v6);
    v20 = (v6 << 7) + v4 - 128;
    v23 = v21;
    v13 = (CBlurredBackdropCache::CachedBlur *)(v12 + v4);
    v24 = v22;
    std::move_backward<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
      v25,
      v12 + v4,
      v20,
      &v23);
  }
  else
  {
    v13 = (CBlurredBackdropCache::CachedBlur *)(v4 + v12);
  }
  v14 = v7 + v4;
  v15 = v13;
  if ( v7 + v4 >= (unsigned __int64)(v12 + 128 + v4) )
    v7 = v12 + 128;
  v16 = (CBlurredBackdropCache::CachedBlur *)(v4 + v7);
  if ( v13 != v16 )
  {
    do
    {
      CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(v15, v14);
      v15 = (CBlurredBackdropCache::CachedBlur *)((char *)v15 + 128);
    }
    while ( v15 != v16 );
  }
  v3[1] += 128LL;
  return v13;
}
