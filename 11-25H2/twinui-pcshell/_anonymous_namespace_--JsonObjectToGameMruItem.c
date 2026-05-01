/*
 * XREFs of _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18006489C
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800645C4 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::TimeStringToTimePoint @ 0x180064B1C (_anonymous_namespace_--TimeStringToTimePoint.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x1801FC980 (--$_Construct_in_place@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-.c)
 *     ?GetNamedString@?$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180242E00 (-GetNamedString@-$consume_Windows_Data_Json_IJsonObjectWithDefaultValues@UJsonObject@Json@Data@W.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall anonymous_namespace_::JsonObjectToGameMruItem(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // rdi
  const char *v6; // r9
  _QWORD *result; // rax
  const WCHAR *v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-C0h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-B0h]
  _BYTE v11[8]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A0h] BYREF
  int *v13; // [rsp+60h] [rbp-98h] BYREF
  int v14; // [rsp+68h] [rbp-90h] BYREF
  int v15; // [rsp+6Ch] [rbp-8Ch]
  const wchar_t *v16; // [rsp+78h] [rbp-80h]
  _BYTE v17[8]; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD v19[9]; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  char v22; // [rsp+110h] [rbp+18h] BYREF
  char v23; // [rsp+118h] [rbp+20h] BYREF

  v18[0] = 0LL;
  if ( aLastlaunched[12] )
    abort();
  v14 = 1;
  v15 = 12;
  v16 = L"LastLaunched";
  v13 = &v14;
  try
  {
    ((void (*)(void))winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString)();
    if ( v12 )
    {
      v4 = *(unsigned int *)(v12 + 4);
      v8 = *(const WCHAR **)(v12 + 16);
      v9[0] = v4;
    }
    else
    {
      v8 = &LocaleName;
      v9[0] = 0LL;
    }
    anonymous_namespace_::TimeStringToTimePoint(v17, &v8);
    v19[0] = 0LL;
    if ( aTitle[5] )
      abort();
    v9[0] = 0x500000001LL;
    v10 = L"Title";
    v8 = (const WCHAR *)v9;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      v11,
      &v8,
      v19);
    v18[0] = 0LL;
    if ( aAumid[5] )
      abort();
    v14 = 1;
    v15 = 5;
    v16 = L"Aumid";
    v13 = &v14;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v23,
      &v13,
      v18);
    v19[0] = 0LL;
    if ( aExepath[7] )
      abort();
    v9[0] = 0x700000001LL;
    v10 = L"ExePath";
    v8 = (const WCHAR *)v9;
    winrt::impl::consume_Windows_Data_Json_IJsonObjectWithDefaultValues<winrt::Windows::Data::Json::JsonObject>::GetNamedString(
      a2,
      &v22,
      &v8,
      v19);
    v5 = operator new(0x78uLL);
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<GameMruItem>::`vftable';
    std::_Construct_in_place<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,winrt::hstring &,winrt::hstring &,winrt::hstring &>(
      (_DWORD)v5 + 16,
      (unsigned int)v17,
      (unsigned int)v11,
      (unsigned int)&v23,
      (__int64)&v22);
    *a1 = v5 + 4;
    a1[1] = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v22);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v23);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
    result = a1;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x47,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v6);
    *a1 = 0LL;
    a1[1] = 0LL;
    return a1;
  }
  return result;
}
