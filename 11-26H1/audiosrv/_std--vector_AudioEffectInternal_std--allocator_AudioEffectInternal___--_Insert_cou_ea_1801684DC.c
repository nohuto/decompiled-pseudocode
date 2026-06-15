/*
 * XREFs of _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch$3 @ 0x1801684DC
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Uninitialized_move@PEAUAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@YAPEAUAudioEffectInternal@@QEAU1@0PEAU1@AEAV?$allocator@UAudioEffectInternal@@@0@@Z @ 0x18007C930 (--$_Uninitialized_move@PEAUAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@Y.c)
 *     ??$_Move_unchecked@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@00@Z @ 0x1800D41DC (--$_Move_unchecked@PEAUAudioEffectInternal@@PEAU1@@std@@YAPEAUAudioEffectInternal@@PEAU1@00@Z.c)
 *     _CxxThrowException_0 @ 0x1801626E0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::catch_3(
        __int64 a1,
        _QWORD *a2)
{
  char *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  char *v6; // r8
  char *v7; // rcx
  __int64 *v8; // rbx

  v3 = (char *)a2[19];
  a2[6] = v3;
  v4 = a2[18];
  a2[7] = v4;
  v5 = a2[21];
  a2[8] = &v3[24 * v5];
  std::_Uninitialized_move<AudioEffectInternal *>(&v3[24 * v5], (__int64)&v3[48 * v5], v3);
  a2[5] = 0LL;
  v6 = &v3[24 * v5];
  v7 = &v3[48 * v5];
  v8 = (__int64 *)a2[4];
  std::_Move_unchecked<AudioEffectInternal *,AudioEffectInternal *>(v7, *v8, v6);
  *v8 = v4;
  throw;
}
