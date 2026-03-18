/*
 * XREFs of ??C?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@QEBAPEAUCachedBlur@CBlurredBackdropCache@@XZ @ 0x180288C40
 * Callers:
 *     ?reserve_region@?$vector_facade@UCachedBlur@CBlurredBackdropCache@@V?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUCachedBlur@CBlurredBackdropCache@@_K0@Z @ 0x180017B84 (-reserve_region@-$vector_facade@UCachedBlur@CBlurredBackdropCache@@V-$buffer_impl@UCachedBlur@CB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + (v1 << 7);
}
