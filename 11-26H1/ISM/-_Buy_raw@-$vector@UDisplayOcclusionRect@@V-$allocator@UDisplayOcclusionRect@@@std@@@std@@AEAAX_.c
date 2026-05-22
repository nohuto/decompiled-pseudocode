/*
 * XREFs of ?_Buy_raw@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A68B0
 * Callers:
 *     ??$_Assign_counted_range@PEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXPEAUDisplayOcclusionRect@@_K@Z @ 0x1801A5E18 (--$_Assign_counted_range@PEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator.c)
 *     ??$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAX_KAEBQEAUDisplayOcclusionRect@@1@Z @ 0x1801A5F30 (--$_Construct_n@AEBQEAUDisplayOcclusionRect@@AEBQEAU1@@-$vector@UDisplayOcclusionRect@@V-$alloca.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0LA@@std@@YA_K_K@Z @ 0x18013C908 (--$_Get_size_of_n@$0LA@@std@@YA_K_K@Z.c)
 */

char *__fastcall std::vector<DisplayOcclusionRect>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<176>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[176 * a2];
  return result;
}
