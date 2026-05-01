/*
 * XREFs of _anonymous_namespace_::TimeStringToTimePoint @ 0x18013B524
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18013B2A0 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$?5GU?$char_traits@G@std@@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@AEAV10@AEBU?$_Timeobj@GPEAUtm@@@0@@Z @ 0x18013B650 (--$-5GU-$char_traits@G@std@@@std@@YAAEAV-$basic_istream@GU-$char_traits@G@std@@@0@AEAV10@AEBU-$_.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18013BA68 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x18013BCD0 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall anonymous_namespace_::TimeStringToTimePoint(_QWORD *a1, __int64 *a2)
{
  unsigned __int64 v3; // rax
  const void *v4; // rcx
  const wchar_t *v5; // rax
  _QWORD v7[19]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[104]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v9; // [rsp+120h] [rbp+20h] BYREF
  __int128 v10; // [rsp+130h] [rbp+30h]
  struct tm Tm; // [rsp+140h] [rbp+40h] BYREF

  memset(&Tm, 0, sizeof(Tm));
  v9 = 0LL;
  v10 = 0LL;
  v3 = std::_WChar_traits<wchar_t>::length(*a2);
  std::wstring::_Construct<1,unsigned short const *>((char **)&v9, v4, v3);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v7,
    &v9);
  std::wstring::_Tidy_deallocate(&v9);
  *(_QWORD *)&v9 = &Tm;
  v5 = L"%Y-%m-%dT%H:%M:%SZ";
  *((_QWORD *)&v9 + 1) = L"%Y-%m-%dT%H:%M:%SZ";
  do
    ++v5;
  while ( *v5 );
  *(_QWORD *)&v10 = v5;
  std::operator>><unsigned short,std::char_traits<unsigned short>>(v7, &v9);
  if ( std::ios_base::fail((std::ios_base *)((char *)v7 + *(int *)(v7[0] + 4LL))) )
    *a1 = 0LL;
  else
    *a1 = 10000000 * _mkgmtime64(&Tm);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v8);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v8);
  return a1;
}
