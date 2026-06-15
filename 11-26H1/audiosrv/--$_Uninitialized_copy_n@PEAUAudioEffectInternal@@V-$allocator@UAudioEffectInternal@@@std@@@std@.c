/*
 * XREFs of ??$_Uninitialized_copy_n@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x1800D41E8
 * Callers:
 *     ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800D3FA0 (--$_Insert_counted_range@PEAUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@U.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0@Z @ 0x1800D3CE8 (--$_Copy_memmove_n@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0@Z.c)
 */

char *__fastcall std::_Uninitialized_copy_n<AudioEffectInternal *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove_n<AudioEffectInternal *,AudioEffectInternal *>(a1, a2, a3);
  return &a3[24 * a2];
}
