/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800EE920
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800E91B0 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x18014E2C0 (-do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::wstring::resize(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  if ( a2 > a1[2] )
    return std::wstring::append(a1, a2 - a1[2]);
  a1[2] = a2;
  if ( a1[3] > 7uLL )
    a1 = (_QWORD *)*a1;
  result = 0LL;
  *((_WORD *)a1 + a2) = 0;
  return result;
}
