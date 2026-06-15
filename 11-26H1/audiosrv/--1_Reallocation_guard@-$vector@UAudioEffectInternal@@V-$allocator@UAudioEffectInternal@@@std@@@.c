/*
 * XREFs of ??1_Reallocation_guard@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800C0384
 * Callers:
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x18008BEC4 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800D3FA0 (--$_Insert_counted_range@PEAUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@U.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$sub_match@PEBG@std@@V?$allocator@V?$sub_match@PEBG@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18013425C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$sub_match@PEBG@std@@V-$allocator@V-$sub.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<AudioEffectInternal>::_Reallocation_guard::~_Reallocation_guard(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    std::_Deallocate<16>(*(void **)(a1 + 8), (struct std::nothrow_t *)(24LL * *(_QWORD *)(a1 + 16)));
}
