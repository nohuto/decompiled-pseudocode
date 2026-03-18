/*
 * XREFs of ??$_Uninitialized_move_unchecked@V?$move_iterator@PEAUEffectInput@@@std@@PEAUEffectInput@@@std@@YAPEAUEffectInput@@V?$move_iterator@PEAUEffectInput@@@0@V20@PEAU1@@Z @ 0x1802B73B0
 * Callers:
 *     ??$uninitialized_move@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802B74B4 (--$uninitialized_move@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffe.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

EffectInput *__fastcall std::_Uninitialized_move_unchecked<std::move_iterator<EffectInput *>,EffectInput *>(
        struct EffectInput *a1,
        struct EffectInput *a2,
        EffectInput *a3)
{
  while ( a1 != a2 )
  {
    EffectInput::EffectInput(a3, a1);
    a3 = (EffectInput *)((char *)a3 + 112);
    a1 = (struct EffectInput *)((char *)a1 + 112);
  }
  return a3;
}
