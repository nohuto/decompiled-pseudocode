/*
 * XREFs of ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x180134468
 * Callers:
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x180031114 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18008FF88 (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 */

_QWORD *__fastcall std::copy<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::shared_ptr<EffectPack>>>>,std::back_insert_iterator<std::vector<std::shared_ptr<EffectPack>>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *i; // rsi
  _QWORD *v8; // rcx
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 2 )
  {
    v8 = *(_QWORD **)(a4 + 8);
    if ( v8 == *(_QWORD **)(a4 + 16) )
    {
      std::vector<std::shared_ptr<EffectPack>>::_Emplace_reallocate<std::shared_ptr<EffectPack> const &>(
        (char **)a4,
        *(char **)(a4 + 8),
        i);
    }
    else
    {
      std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v8, i);
      *(_QWORD *)(a4 + 8) += 16LL;
    }
  }
  result = a1;
  *a1 = a4;
  return result;
}
