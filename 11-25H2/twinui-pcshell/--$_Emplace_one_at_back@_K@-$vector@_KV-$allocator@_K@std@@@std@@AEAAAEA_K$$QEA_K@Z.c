/*
 * XREFs of ??$_Emplace_one_at_back@_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAAEA_K$$QEA_K@Z @ 0x18059E968
 * Callers:
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x1800F69F0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<unsigned __int64>::_Emplace_one_at_back<unsigned __int64>(__int64 a1, _QWORD *a2)
{
  _BYTE *v3; // rdx
  char *result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( v3 == *(_BYTE **)(a1 + 16) )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64>((const void **)a1, v3, a2);
  *(_QWORD *)v3 = *a2;
  result = *(char **)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 8;
  return result;
}
