/*
 * XREFs of ??$_Copy_memmove_n@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0@Z @ 0x1800D3CE8
 * Callers:
 *     ??$_Uninitialized_copy_n@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@PEAU1@_K0AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x1800D41E8 (--$_Uninitialized_copy_n@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@.c)
 * Callees:
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove_n<AudioEffectInternal *,AudioEffectInternal *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = 24 * a2;
  memmove_0(a3, Src, 24 * a2);
  return (__int64)a3 + v4;
}
