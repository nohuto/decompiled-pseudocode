/*
 * XREFs of _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18013B2A0
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013AFC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x18013B524 (_anonymous_namespace_--TimeStringToTimePoint.c)
 *     ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18013C428 (-GetNamedString@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x18013C568 (--$_Construct_in_place@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall anonymous_namespace_::JsonObjectToGameMruItem(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  const char *v5; // r9
  _QWORD *result; // rax
  const WCHAR *v7; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-B0h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-A0h]
  volatile signed __int32 *v10; // [rsp+50h] [rbp-98h] BYREF
  volatile signed __int32 *v11; // [rsp+58h] [rbp-90h] BYREF
  int *v12; // [rsp+60h] [rbp-88h] BYREF
  int v13; // [rsp+68h] [rbp-80h] BYREF
  int v14; // [rsp+6Ch] [rbp-7Ch]
  const wchar_t *v15; // [rsp+78h] [rbp-70h]
  _BYTE v16[8]; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v17[4]; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v18[7]; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]
  volatile signed __int32 *v21; // [rsp+100h] [rbp+18h] BYREF
  volatile signed __int32 *v22; // [rsp+108h] [rbp+20h] BYREF

  v17[0] = 0LL;
  if ( aLastlaunched[12] )
    abort();
  v13 = 1;
  v14 = 12;
  v15 = L"LastLaunched";
  v12 = &v13;
  try
  {
    ((void (*)(void))winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString)();
    if ( v11 )
    {
      v7 = (const WCHAR *)*((_QWORD *)v11 + 2);
      v8[0] = *((unsigned int *)v11 + 1);
    }
    else
    {
      v7 = &pvData;
      v8[0] = 0LL;
    }
    anonymous_namespace_::TimeStringToTimePoint(v16, &v7);
    v18[0] = 0LL;
    if ( aTitle[5] )
      abort();
    v8[0] = 0x500000001LL;
    v9 = L"Title";
    v7 = (const WCHAR *)v8;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v10,
      &v7,
      v18);
    v17[0] = 0LL;
    if ( aAumid[5] )
      abort();
    v13 = 1;
    v14 = 5;
    v15 = L"Aumid";
    v12 = &v13;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v22,
      &v12,
      v17);
    v18[0] = 0LL;
    if ( aExepath[7] )
      abort();
    v8[0] = 0x700000001LL;
    v9 = L"ExePath";
    v7 = (const WCHAR *)v8;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v21,
      &v7,
      v18);
    v4 = operator new(0x78uLL);
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<GameMruItem>::`vftable';
    std::_Construct_in_place<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,winrt::hstring &,winrt::hstring &,winrt::hstring &>(
      (_DWORD)v4 + 16,
      (unsigned int)v16,
      (unsigned int)&v10,
      (unsigned int)&v22,
      (__int64)&v21);
    *a1 = v4 + 4;
    a1[1] = v4;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    return a1;
  }
  return result;
}
