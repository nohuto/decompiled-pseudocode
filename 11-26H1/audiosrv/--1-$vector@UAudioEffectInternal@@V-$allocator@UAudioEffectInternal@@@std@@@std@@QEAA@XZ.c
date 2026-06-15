/*
 * XREFs of ??1?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800B0964
 * Callers:
 *     _CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters_::_1_::dtor$0 @ 0x1801662CB (_CSharedStreamGroupProxy--CompareStreamingEffectsOverrideProcessingModeParameters_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::CompareStreamingEffectsOverrideProcessingModeParameters_::_1_::dtor$1 @ 0x1801662DD (_CSharedStreamGroupProxy--CompareStreamingEffectsOverrideProcessingModeParameters_--_1_--dtor$1.c)
 *     _CAudioStream::SetAudioEffect_::_1_::dtor$2 @ 0x180166BF1 (_CAudioStream--SetAudioEffect_--_1_--dtor$2.c)
 *     _CAudioStream::GetAudioEffects_::_1_::dtor$2 @ 0x180166C15 (_CAudioStream--GetAudioEffects_--_1_--dtor$2.c)
 *     _CAudioStream::GetControllableEffects_::_1_::dtor$2 @ 0x180166C27 (_CAudioStream--GetControllableEffects_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<AudioEffectInternal>::~vector<AudioEffectInternal>(__int64 a1)
{
  return std::vector<AudioEffectInternal>::_Tidy(a1);
}
