/*
 * XREFs of ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@std@@$0A@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@V21@1@Z @ 0x1800D42B4
 * Callers:
 *     ?GetControllableEffects@CAudioStream@@AEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18008312C (-GetControllableEffects@CAudioStream@@AEAAJAEAV-$vector@UAudioEffectInternal@@V-$allocator@UAudi.c)
 * Callees:
 *     ??$_Insert_counted_range@PEAUAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UAudioEffectInternal@@@std@@@std@@@1@PEAUAudioEffectInternal@@_K@Z @ 0x1800D3FA0 (--$_Insert_counted_range@PEAUAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@U.c)
 */

_QWORD *__fastcall std::vector<AudioEffectInternal>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<AudioEffectInternal>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v6; // rbx
  _QWORD *result; // rax

  v6 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)&a3[-*a1] >> 3);
  std::vector<AudioEffectInternal>::_Insert_counted_range<AudioEffectInternal *>(
    a1,
    a3,
    a4,
    0xAAAAAAAAAAAAAAABuLL * ((a5 - a4) >> 3));
  result = a2;
  *a2 = *a1 + 24 * v6;
  return result;
}
