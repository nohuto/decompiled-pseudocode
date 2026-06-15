/*
 * XREFs of ??$regex_replace@V?$regex_traits@G@std@@G@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@0W4match_flag_type@regex_constants@0@@Z @ 0x180149D10
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigurationSettings@@@Z @ 0x180058868 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@00W4ValidEffectPackConfigur.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180013A08 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$regex_replace@V?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@2@V?$regex_traits@G@2@GU?$char_traits@G@2@V?$allocator@G@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@V10@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@1AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180149CD0 (--$regex_replace@V-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::regex_replace<std::regex_traits<unsigned short>,unsigned short>(
        __int64 a1,
        _WORD *a2,
        __int64 a3)
{
  void **v5; // rcx
  void **v6; // r8
  __int64 v8; // [rsp+50h] [rbp-11h] BYREF
  void *v9[3]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+70h] [rbp+Fh]
  void *v11[4]; // [rsp+78h] [rbp+17h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  std::wstring::wstring((char **)v9, a2);
  std::wstring::wstring((char **)v11, L"\\\\");
  v5 = v9;
  if ( v10 > 7 )
    v5 = (void **)v9[0];
  v6 = v9;
  if ( v10 > 7 )
    v6 = (void **)v9[0];
  std::regex_replace<std::back_insert_iterator<std::wstring>,std::_String_const_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::regex_traits<unsigned short>,unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    &v8,
    (void **)a1,
    (__int64)v6,
    (unsigned __int16 *)v5 + (__int64)v9[2],
    a3,
    (unsigned __int16 *)v11);
  std::wstring::~wstring(v11);
  std::wstring::~wstring(v9);
  return a1;
}
