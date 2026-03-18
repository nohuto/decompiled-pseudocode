/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B74B4
 * Callers:
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUEffectInput@@@std@@PEAUEffectInput@@@std@@YAPEAUEffectInput@@V?$move_iterator@PEAUEffectInput@@@0@V20@PEAU1@@Z @ 0x1802B73B0 (--$_Uninitialized_move_unchecked@V-$move_iterator@PEAUEffectInput@@@std@@PEAUEffectInput@@@std@@.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        struct EffectInput *a2,
        struct EffectInput *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // xmm1_8

  stdext::checked_array_iterator<char *>::_Verify_offset((__int64)a4, 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 4));
  a4[2] = 0x6DB6DB6DB6DB6DB7LL
        * (((__int64)std::_Uninitialized_move_unchecked<std::move_iterator<EffectInput *>,EffectInput *>(
                       a2,
                       a3,
                       (EffectInput *)(*a4 + 112LL * a4[2]))
          - *a4) >> 4);
  result = a1;
  v9 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
