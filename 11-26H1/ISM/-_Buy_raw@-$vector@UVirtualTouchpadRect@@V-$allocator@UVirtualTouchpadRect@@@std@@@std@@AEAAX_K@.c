/*
 * XREFs of ?_Buy_raw@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_K@Z @ 0x1801A5CEC
 * Callers:
 *     ??$_Assign_counted_range@PEAUVirtualTouchpadRect@@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAXPEAUVirtualTouchpadRect@@_K@Z @ 0x1801A52E8 (--$_Assign_counted_range@PEAUVirtualTouchpadRect@@@-$vector@UVirtualTouchpadRect@@V-$allocator@U.c)
 *     ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x1801A53EC (--$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@-$vector@UVirtualTouchpadRect@@V-$allocato.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<VirtualTouchpadRect>::_Buy_raw(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 size_of; // rax
  char *v5; // rax
  char *result; // rax

  size_of = std::_Get_size_of_n<24>(a2);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[24 * a2];
  a1[2] = result;
  return result;
}
