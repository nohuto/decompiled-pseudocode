/*
 * XREFs of ??$_Move_unchecked@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@00@Z @ 0x1800D41DC
 * Callers:
 *     _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch$3 @ 0x1801684DC (_std--vector_AudioEffectInternal_std--allocator_AudioEffectInternal___--_Insert_cou_ea_1801684DC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_Move_unchecked<AudioEffectInternal *,AudioEffectInternal *>(void *Src, __int64 a2, void *a3)
{
  return std::_Copy_memmove<_GUID *,_GUID *>(Src, a2, a3);
}
