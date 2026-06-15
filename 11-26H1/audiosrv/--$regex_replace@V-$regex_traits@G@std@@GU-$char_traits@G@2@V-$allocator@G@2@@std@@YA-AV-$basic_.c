/*
 * XREFs of ??$regex_replace@V?$regex_traits@G@std@@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@PEBGW4match_flag_type@regex_constants@0@@Z @ 0x180149DE4
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$regex_replace@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149CD0 (--$regex_replace@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::regex_replace<std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v6; // rcx
  unsigned __int16 *v7; // r9
  __int64 v9; // [rsp+50h] [rbp-38h] BYREF
  void *v10[4]; // [rsp+58h] [rbp-30h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::wstring((char **)v10, L".*");
  v6 = a2;
  if ( a2[3] > 7uLL )
    v6 = (_QWORD *)*a2;
  v7 = (unsigned __int16 *)v6 + a2[2];
  if ( a2[3] > 7uLL )
    a2 = (_QWORD *)*a2;
  std::regex_replace<std::back_insert_iterator<std::wstring>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    &v9,
    (void **)a1,
    (__int64)a2,
    v7,
    a3,
    (unsigned __int16 *)v10);
  std::wstring::~wstring(v10);
  return a1;
}
