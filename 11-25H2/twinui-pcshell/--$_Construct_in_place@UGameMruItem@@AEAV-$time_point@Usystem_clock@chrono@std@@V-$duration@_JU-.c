/*
 * XREFs of ??$_Construct_in_place@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAUhstring@winrt@@AEAU56@AEAU56@@std@@YAXAEAUGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAUhstring@winrt@@22@Z @ 0x1801FC980
 * Callers:
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x18006489C (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180028358 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall std::_Construct_in_place<GameMruItem,std::chrono::time_point<std::chrono::system_clock,std::chrono::duration<__int64,std::ratio<1,10000000>>> &,winrt::hstring &,winrt::hstring &,winrt::hstring &>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF

  v6 = *a5;
  if ( *a5 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(unsigned int *)(v6 + 4);
    *(_QWORD *)&v16 = v7;
    *((_QWORD *)&v16 + 1) = v8;
  }
  else
  {
    *(_QWORD *)&v16 = &LocaleName;
    *((_QWORD *)&v16 + 1) = 0LL;
  }
  v9 = *a4;
  if ( *a4 )
  {
    v10 = *(_QWORD *)(v9 + 16);
    v11 = *(unsigned int *)(v9 + 4);
    *(_QWORD *)&v17 = v10;
    *((_QWORD *)&v17 + 1) = v11;
  }
  else
  {
    *(_QWORD *)&v17 = &LocaleName;
    *((_QWORD *)&v17 + 1) = 0LL;
  }
  v12 = *a3;
  if ( *a3 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    v14 = *(unsigned int *)(v12 + 4);
    *(_QWORD *)&v18 = v13;
    *((_QWORD *)&v18 + 1) = v14;
  }
  else
  {
    *(_QWORD *)&v18 = &LocaleName;
    *((_QWORD *)&v18 + 1) = 0LL;
  }
  *(_QWORD *)a1 = *a2;
  std::wstring::wstring((char **)(a1 + 8), &v18);
  std::wstring::wstring((char **)(a1 + 40), &v17);
  return std::wstring::wstring((char **)(a1 + 72), &v16);
}
