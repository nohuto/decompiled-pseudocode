/*
 * XREFs of ?_Buy_raw@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802C3180
 * Callers:
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1800A7428 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??0?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801BAA3C (--0-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@AE.c)
 *     ?StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18029C290 (-StartGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAX_K@Z @ 0x1802BD268 (-_Clear_and_reserve_geometric@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@W.c)
 *     ??$_Assign_counted_range@PEBUtagRECT@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXPEBUtagRECT@@_K@Z @ 0x180581DF8 (--$_Assign_counted_range@PEBUtagRECT@@@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180029B90 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<Windows::Foundation::Rect>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<16>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * a2];
  return result;
}
