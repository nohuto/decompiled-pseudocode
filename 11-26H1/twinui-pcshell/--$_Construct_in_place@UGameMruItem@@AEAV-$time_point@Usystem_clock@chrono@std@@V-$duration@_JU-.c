/*
 * XREFs of ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x18013C568
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18013B2A0 (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Construct_in_place<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,winrt::hstring &,winrt::hstring &,winrt::hstring &>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v8; // r10
  __int64 v9; // r11
  const WCHAR *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rdx
  const WCHAR *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v8 = *a5;
  if ( *a5 )
  {
    v9 = *(unsigned int *)(v8 + 4);
    v10 = *(const WCHAR **)(v8 + 16);
  }
  else
  {
    v9 = 0LL;
    v10 = &pvData;
  }
  v11 = *a4;
  if ( *a4 )
  {
    v12 = *(unsigned int *)(v11 + 4);
    v13 = *(const WCHAR **)(v11 + 16);
  }
  else
  {
    v12 = 0LL;
    v13 = &pvData;
  }
  v14 = *a3;
  if ( *a3 )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(v14 + 16);
    *((_QWORD *)&v17 + 1) = *(unsigned int *)(v14 + 4);
  }
  else
  {
    v17 = (unsigned __int64)&pvData;
  }
  v15 = *a2;
  v19[0] = v10;
  v19[1] = v9;
  v18[0] = v13;
  v18[1] = v12;
  *a1 = v15;
  std::wstring::wstring((__int64)(a1 + 1), (__int64)&v17);
  std::wstring::wstring((__int64)(a1 + 5), (__int64)v18);
  return std::wstring::wstring((__int64)(a1 + 9), (__int64)v19);
}
