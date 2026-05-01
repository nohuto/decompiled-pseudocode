/*
 * XREFs of ?_Buy_nonzero@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1801CAB08
 * Callers:
 *     ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1801CA860 (--0-$vector@GV-$allocator@G@std@@@std@@QEAA@_KAEBV-$allocator@G@1@@Z.c)
 *     ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x1801CA8C4 (-IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall std::vector<unsigned short>::_Buy_nonzero(__int64 *a1, unsigned __int64 a2)
{
  __int64 size_of; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<2>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = v5 + 2 * a2;
  a1[2] = result;
  return result;
}
