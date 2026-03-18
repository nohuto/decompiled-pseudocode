/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B73FC
 * Callers:
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180019538 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<EffectInput *>,stdext::checked_array_iterator<EffectInput *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v7 = a3;
  stdext::checked_array_iterator<char *>::_Verify_offset(
    (__int64)a4,
    0x9249249249249249uLL * (((char *)a3 - (char *)a2) >> 4));
  v8 = (__int64 *)(*a4 + 112LL * a4[2]);
  while ( a2 != v7 )
  {
    v8 -= 14;
    v7 -= 14;
    EffectInput::operator=(v8, v7);
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v8 - *a4) >> 4);
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
