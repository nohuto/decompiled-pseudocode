/*
 * XREFs of ?_Cache_locale@?$_Regex_traits@G@std@@AEAAXXZ @ 0x18014C3FC
 * Callers:
 *     ??$construct@V?$basic_regex@GV?$regex_traits@G@std@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@1@QEAV?$basic_regex@GV?$regex_traits@G@std@@@1@AEBV31@@Z @ 0x1801498E8 (--$construct@V-$basic_regex@GV-$regex_traits@G@std@@@std@@AEBV12@@-$_Default_allocator_traits@V-.c)
 *     ??0?$regex_traits@G@std@@QEAA@XZ @ 0x18014A4D4 (--0-$regex_traits@G@std@@QEAA@XZ.c)
 * Callees:
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18014A0A8 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18014A184 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 */

struct std::_Facet_base *__fastcall std::_Regex_traits<unsigned short>::_Cache_locale(struct std::_Facet_base **a1)
{
  struct std::_Facet_base *result; // rax

  *a1 = std::use_facet<std::collate<unsigned short>>((std::locale *)(a1 + 2));
  result = std::use_facet<std::ctype<unsigned short>>((std::locale *)(a1 + 2));
  a1[1] = result;
  return result;
}
