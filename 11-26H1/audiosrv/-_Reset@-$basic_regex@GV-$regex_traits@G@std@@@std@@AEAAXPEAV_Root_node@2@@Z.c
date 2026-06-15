/*
 * XREFs of ?_Reset@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEAV_Root_node@2@@Z @ 0x18014DB24
 * Callers:
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x180149800 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??$construct@V?$basic_regex@GV?$regex_traits@G@std@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@1@QEAV?$basic_regex@GV?$regex_traits@G@std@@@1@AEBV31@@Z @ 0x1801498E8 (--$construct@V-$basic_regex@GV-$regex_traits@G@std@@@std@@AEBV12@@-$_Default_allocator_traits@V-.c)
 * Callees:
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18014DEA8 (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 44));
  result = std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(a1);
  *a1 = a2;
  return result;
}
