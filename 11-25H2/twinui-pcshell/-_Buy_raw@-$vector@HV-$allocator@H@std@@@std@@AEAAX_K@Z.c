/*
 * XREFs of ?_Buy_raw@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801261BC
 * Callers:
 *     _dynamic_initializer_for__error__ @ 0x180125400 (_dynamic_initializer_for__error__.c)
 *     _dynamic_initializer_for__idle__ @ 0x180126230 (_dynamic_initializer_for__idle__.c)
 *     _dynamic_initializer_for__responding__ @ 0x180126350 (_dynamic_initializer_for__responding__.c)
 *     _dynamic_initializer_for__BlockResponding__ @ 0x180127540 (_dynamic_initializer_for__BlockResponding__.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V?$initializer_list@UColor@UI@Windows@@@1@AEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x1801557C8 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@V-$initializer_l.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180164F40 (_dynamic_initializer_for__thinking__.c)
 *     ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1802BD490 (-_Clear_and_reserve_geometric@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180127670 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180295F8C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<int>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v3 = 4 * a2;
  if ( 4 * a2 >= 0x1000 )
  {
    v4 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(4 * a2);
  }
  else
  {
    v4 = 0LL;
    if ( v3 )
      v4 = (char *)operator new(4 * a2);
  }
  *a1 = v4;
  a1[1] = v4;
  result = &v4[v3];
  a1[2] = result;
  return result;
}
