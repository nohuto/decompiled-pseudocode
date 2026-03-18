/*
 * XREFs of ??1_Simple_reallocation_guard@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA@XZ @ 0x1802883D4
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x180019BF0 (--$_Reallocate@$0A@@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<EffectInput>::_Simple_reallocation_guard::~_Simple_reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), 112LL * *(_QWORD *)(a1 + 16));
}
