/*
 * XREFs of ?_Buy_raw@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A8C7C
 * Callers:
 *     ??0?$vector@_KV?$allocator@_K@std@@@std@@QEAA@AEBV01@@Z @ 0x1805A686C (--0-$vector@_KV-$allocator@_K@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1805A8CC0 (-_Clear_and_reserve_geometric@-$vector@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180137374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned __int64>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<8>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[8 * a2];
  a1[2] = result;
  return result;
}
