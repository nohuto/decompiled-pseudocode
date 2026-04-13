/*
 * XREFs of ??0range_error@std@@QEAA@PEBD@Z @ 0x180067EB0
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18006B88C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18006BB10 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     ??0runtime_error@std@@QEAA@PEBD@Z @ 0x18004BD4C (--0runtime_error@std@@QEAA@PEBD@Z.c)
 */

std::range_error *__fastcall std::range_error::range_error(std::range_error *this, const char *a2)
{
  std::runtime_error::runtime_error(this, "bad conversion");
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
