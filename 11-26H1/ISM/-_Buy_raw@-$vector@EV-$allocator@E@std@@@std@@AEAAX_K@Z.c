/*
 * XREFs of ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800ED3F8
 * Callers:
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EC148 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<unsigned char>::_Buy_raw(_QWORD *a1)
{
  char *v2; // rax
  char *result; // rax

  v2 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(6uLL);
  *a1 = v2;
  a1[1] = v2;
  result = v2 + 6;
  a1[2] = result;
  return result;
}
