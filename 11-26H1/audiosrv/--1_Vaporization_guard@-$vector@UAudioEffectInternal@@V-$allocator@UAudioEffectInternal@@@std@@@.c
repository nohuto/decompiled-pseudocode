/*
 * XREFs of ??1_Vaporization_guard@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA@XZ @ 0x1800D4384
 * Callers:
 *     _std::vector_AudioEffectInternal_std::allocator_AudioEffectInternal___::_Insert_counted_range_AudioEffectInternal____::_1_::dtor$2 @ 0x1801684CA (_std--vector_AudioEffectInternal_std--allocator_AudioEffectInternal___--_Insert_counted_range_Au.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<AudioEffectInternal>::_Vaporization_guard::~_Vaporization_guard(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = a1[1];
    *(_QWORD *)(*a1 + 8LL) = result;
  }
  return result;
}
