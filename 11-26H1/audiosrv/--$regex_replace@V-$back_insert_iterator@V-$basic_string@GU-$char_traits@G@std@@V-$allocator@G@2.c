/*
 * XREFs of ??$regex_replace@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149CD0
 * Callers:
 *     ??$regex_replace@V?$regex_traits@G@std@@G@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@0W4match_flag_type@regex_constants@0@@Z @ 0x180149D10 (--$regex_replace@V-$regex_traits@G@std@@G@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??$regex_replace@V?$regex_traits@G@std@@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@PEBGW4match_flag_type@regex_constants@0@@Z @ 0x180149DE4 (--$regex_replace@V-$regex_traits@G@std@@GU-$char_traits@G@2@V-$allocator@G@2@@std@@YA-AV-$basic_.c)
 * Callees:
 *     ??$_Regex_replace1@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBGV?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@PEBG1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149498 (--$_Regex_replace1@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 */

_QWORD *__fastcall std::regex_replace<std::back_insert_iterator<std::wstring>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        _QWORD *a1,
        void **a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  void *v7; // rdx
  _QWORD *result; // rax
  void *v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = *std::_Regex_replace1<std::back_insert_iterator<std::wstring>,unsigned short const *,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
          &v9,
          a2,
          a3,
          a4,
          a5,
          a6);
  result = a1;
  *a1 = v7;
  return result;
}
