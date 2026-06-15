/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch$4 @ 0x18016856A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@QEAU1@0PEAU1@AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x18007C930 (--$_Uninitialized_move@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@Y.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch_4(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // r8
  __int64 v4; // rdi
  void *v5; // rcx
  __int64 *v6; // rbx

  v3 = (char *)a2[19];
  a2[6] = v3;
  v4 = a2[18];
  a2[7] = v4;
  v5 = (void *)a2[21];
  a2[8] = v5;
  v6 = (__int64 *)a2[4];
  std::_Uninitialized_move<AudioEffectInternal *>(v5, *v6, v3);
  a2[5] = 0LL;
  *v6 = v4;
  throw;
}
