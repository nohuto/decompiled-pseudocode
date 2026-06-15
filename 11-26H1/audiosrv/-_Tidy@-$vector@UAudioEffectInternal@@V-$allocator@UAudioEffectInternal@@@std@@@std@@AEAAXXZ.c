/*
 * XREFs of ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800B0970
 * Callers:
 *     ?CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180070320 (-CompareStreamingEffectsOverrideProcessingModeParameters@CSharedStreamGroupProxy@@IEAAJAEBVCProc.c)
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800707F0 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180082F44 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18008312C (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 *     ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800B0964 (--1-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ.c)
 *     ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800D54F8 (-SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@std@@QEAA@XZ @ 0x1800F98B0 (--1-$_Tidy_guard@V-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<AudioEffectInternal>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
