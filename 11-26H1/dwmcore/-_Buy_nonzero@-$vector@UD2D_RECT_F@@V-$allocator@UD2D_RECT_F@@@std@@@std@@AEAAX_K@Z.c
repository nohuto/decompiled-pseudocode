/*
 * XREFs of ?_Buy_nonzero@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@AEAAX_K@Z @ 0x180236DAC
 * Callers:
 *     ??0?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180234720 (--0-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0PEAUD2D_RECT_F@@$0A@@?$vector@UD2D_RECT_F@@V?$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD2D_RECT_F@@0AEBV?$allocator@UD2D_RECT_F@@@1@@Z @ 0x1802600B0 (--$-0PEAUD2D_RECT_F@@$0A@@-$vector@UD2D_RECT_F@@V-$allocator@UD2D_RECT_F@@@std@@@std@@QEAA@PEAUD.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<D2D_RECT_F>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  SIZE_T size_of; // rax
  __int64 v5; // rdx
  char *result; // rax

  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  size_of = std::_Get_size_of_n<16>(a2);
  result = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v5);
  *a1 = result;
  a1[1] = result;
  a1[2] = &result[16 * a2];
  return result;
}
