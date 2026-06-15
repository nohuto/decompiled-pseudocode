/*
 * XREFs of ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x180133A0C
 * Callers:
 *     ?_Do_class@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013EEEC (-_Do_class@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ?_Skip@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z @ 0x18014DB58 (-_Skip@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAAPEBGPEBG0PEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800AC0B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800B0C54 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??$transform_primary@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@@?$_Regex_traits@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@1@0@Z @ 0x180134BAC (--$transform_primary@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@@-$_.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180135584 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1801401C8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::_Lookup_equiv<unsigned short,std::regex_traits<unsigned short>>(
        unsigned __int16 a1,
        unsigned int *a2,
        __int64 a3)
{
  char v5; // di
  __int128 *v6; // rcx
  __int128 *v7; // r8
  __int64 v8; // rax
  unsigned int v9; // esi
  __int128 *v10; // rcx
  __int128 *v11; // r8
  __int64 v12; // rax
  const wchar_t *v13; // r8
  const wchar_t *v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-29h] BYREF
  __m128i v17; // [rsp+30h] [rbp-19h]
  __int128 v18; // [rsp+40h] [rbp-9h] BYREF
  __m128i si128; // [rsp+50h] [rbp+7h]
  void *v20[4]; // [rsp+60h] [rbp+17h] BYREF

  v18 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v5 = 0;
  LOWORD(v18) = 0;
  v16 = 0LL;
  v17 = si128;
  LOWORD(v16) = 0;
  std::wstring::push_back(&v16, a1);
  v6 = &v16;
  if ( v17.m128i_i64[1] > 7uLL )
    v6 = (__int128 *)v16;
  v7 = &v16;
  if ( v17.m128i_i64[1] > 7uLL )
    v7 = (__int128 *)v16;
  v8 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
         a3,
         v20,
         v7,
         (char *)v6 + 2 * v17.m128i_i64[0]);
  std::wstring::operator=(&v16, v8);
  std::wstring::~wstring(v20);
  while ( a2 )
  {
    v9 = 0;
    if ( a2[3] )
    {
      while ( 1 )
      {
        std::wstring::assign((char *)&v18, (const void *)(*((_QWORD *)a2 + 2) + 2LL * v9), *a2);
        v10 = &v18;
        if ( si128.m128i_i64[1] > 7uLL )
          v10 = (__int128 *)v18;
        v11 = &v18;
        if ( si128.m128i_i64[1] > 7uLL )
          v11 = (__int128 *)v18;
        v12 = std::_Regex_traits<unsigned short>::transform_primary<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>>(
                a3,
                v20,
                v11,
                (char *)v10 + 2 * si128.m128i_i64[0]);
        std::wstring::operator=(&v18, v12);
        std::wstring::~wstring(v20);
        v13 = (const wchar_t *)&v16;
        if ( v17.m128i_i64[1] > 7uLL )
          v13 = (const wchar_t *)v16;
        v14 = (const wchar_t *)&v18;
        if ( si128.m128i_i64[1] > 7uLL )
          v14 = (const wchar_t *)v18;
        if ( std::_Traits_equal<std::char_traits<unsigned short>>(v14, si128.m128i_u64[0], v13, v17.m128i_i64[0]) )
          break;
        v9 += *a2;
        if ( v9 >= a2[3] )
          goto LABEL_17;
      }
      v5 = 1;
      break;
    }
LABEL_17:
    a2 = (unsigned int *)*((_QWORD *)a2 + 3);
  }
  std::wstring::~wstring((void **)&v16);
  std::wstring::~wstring((void **)&v18);
  return v5;
}
