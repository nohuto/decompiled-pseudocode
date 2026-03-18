/*
 * XREFs of ??$_Uninitialized_move@PEAUEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@QEAU1@0PEAU1@AEAV?$allocator@UEffectInput@@@0@@Z @ 0x180018AA4
 * Callers:
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801FEBEC (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAPEA.c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 */

EffectInput *__fastcall std::_Uninitialized_move<EffectInput *>(
        struct EffectInput *a1,
        const struct EffectInput *a2,
        EffectInput *a3)
{
  const struct EffectInput *i; // rdi

  for ( i = a1; i != a2; i = (const struct EffectInput *)((char *)i + 112) )
  {
    EffectInput::EffectInput(a3, i);
    a3 = (EffectInput *)((char *)a3 + 112);
  }
  return a3;
}
