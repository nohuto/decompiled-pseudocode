/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@PEAUCachedBlur@CBlurredBackdropCache@@@std@@YAPEAUCachedBlur@CBlurredBackdropCache@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@V30@PEAU12@@Z @ 0x180212DA0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180017E10 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

_QWORD *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<CBlurredBackdropCache::CachedBlur *>,CBlurredBackdropCache::CachedBlur *>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  while ( a1 != a2 )
  {
    *a3 = *a1;
    a3[1] = a1[1];
    EffectInput::EffectInput((EffectInput *)(a3 + 2), (const struct EffectInput *)(a1 + 2));
    a3 += 16;
    a1 += 16;
  }
  return a3;
}
