/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@_J@Z @ 0x180015638
 * Callers:
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180017180 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180017E10 (-ensure_extra_capacity@-$buffer_impl@UCachedBlur@CBlurredBackdropCache@@$01$00Vliberal_expansion.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180288B94 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CBlurredBackdropCache::CachedBlur *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a1, a2);
  return *a1 + (a1[2] << 7);
}
