/*
 * XREFs of ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18020DED0
 * Callers:
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x18020DE48 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned char>::_Buy_raw(_QWORD *a1, SIZE_T a2)
{
  char *v4; // rax
  char *result; // rax

  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(a2, a2);
  *a1 = v4;
  a1[1] = v4;
  result = &v4[a2];
  a1[2] = result;
  return result;
}
