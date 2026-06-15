/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@std@@QEAA@XZ @ 0x1800F98B0
 * Callers:
 *     ??$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAX_KAEBQEAUAudioEffectInternal@@1@Z @ 0x1800AC7EC (--$_Construct_n@AEBQEAUAudioEffectInternal@@AEBQEAU1@@-$vector@UAudioEffectInternal@@V-$allocato.c)
 * Callees:
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800B0970 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Tidy_guard<std::vector<AudioEffectInternal>>::~_Tidy_guard<std::vector<AudioEffectInternal>>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<AudioEffectInternal>::_Tidy(v1);
}
