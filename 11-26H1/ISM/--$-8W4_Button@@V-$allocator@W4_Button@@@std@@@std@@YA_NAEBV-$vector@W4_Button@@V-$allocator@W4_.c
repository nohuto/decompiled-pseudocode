/*
 * XREFs of ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x1801A9874
 * Callers:
 *     std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x1801A9FC8 (std--find_if_std--_Tree_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_unsigned_int_c.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801AA940 (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801AACF0 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::operator==<enum _Button,std::allocator<enum _Button>>(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r9

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD **)a2;
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 != *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 )
    return 0;
  while ( v2 != *(_DWORD **)(a1 + 8) )
  {
    if ( *v2 != *v3 )
      return 0;
    ++v2;
    ++v3;
  }
  return 1;
}
