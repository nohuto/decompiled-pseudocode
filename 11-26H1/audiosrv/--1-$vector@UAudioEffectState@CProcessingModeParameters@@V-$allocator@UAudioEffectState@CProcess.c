/*
 * XREFs of ??1?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@QEAA@XZ @ 0x180076564
 * Callers:
 *     _HasSameOverrideWithDifferentStates_::_1_::dtor$0 @ 0x180166D5F (_HasSameOverrideWithDifferentStates_--_1_--dtor$0.c)
 *     _HasSameOverrideWithDifferentStates_::_1_::dtor$1 @ 0x180166D71 (_HasSameOverrideWithDifferentStates_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<CProcessingModeParameters::AudioEffectState>::~vector<CProcessingModeParameters::AudioEffectState>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 2)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
