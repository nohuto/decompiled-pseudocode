/*
 * XREFs of ?clear_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180017CEC
 * Callers:
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z @ 0x180017AAC (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@PEBX@Z.c)
 *     ??1?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18015C3E4 (--1-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CBlurredBackdro.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180017180 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 *     ??_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z @ 0x180017DEC (--_GCachedBlur@CBlurredBackdropCache@@QEAAPEAXI@Z.c)
 */

void *__fastcall detail::vector_facade<CBlurredBackdropCache::CachedBlur,detail::buffer_impl<CBlurredBackdropCache::CachedBlur,2,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  char *v8; // rdi
  void *result; // rax
  unsigned int v10; // edx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rsi
  CBlurredBackdropCache::CachedBlur *i; // rbx
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 7;
  v7 = a2 + a3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x180017DE3LL);
  }
  v8 = (char *)(v3 + (v6 << 7));
  result = stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v17, v3, v6);
  if ( v7 != v12 )
  {
    v15 = v17;
    v16 = v18;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v15, v11);
    v17 = v15;
    v18 = v16;
    result = (void *)std::move<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>>(
                       (__int64)&v15,
                       (char *)((v7 << 7) + v3),
                       v8,
                       &v17);
  }
  v13 = a3 << 7;
  for ( i = (CBlurredBackdropCache::CachedBlur *)&v8[-v13];
        i != (CBlurredBackdropCache::CachedBlur *)v8;
        i = (CBlurredBackdropCache::CachedBlur *)((char *)i + 128) )
  {
    result = CBlurredBackdropCache::CachedBlur::`scalar deleting destructor'(i, v10);
  }
  a1[1] -= v13;
  return result;
}
