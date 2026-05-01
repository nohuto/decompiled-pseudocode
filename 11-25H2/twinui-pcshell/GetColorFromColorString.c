/*
 * XREFs of GetColorFromColorString @ 0x180461094
 * Callers:
 *     ?GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z @ 0x180097730 (-GetBorderColor@TouchKeyboardExperienceManager@@AEBAKAEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18002A054 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1800AF974 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800AF9D0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180154950 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802236C0 (-stoi@std@@YAHAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?push_back@?$vector@HV?$allocator@H@std@@@std@@QEAAX$$QEAH@Z @ 0x180469C3C (-push_back@-$vector@HV-$allocator@H@std@@@std@@QEAAX$$QEAH@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetColorFromColorString(__int64 a1)
{
  int v2; // r14d
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  wchar_t *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  wchar_t *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  const char *v14; // r9
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h]
  wchar_t String[8]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = 0;
  v17 = 0;
  v3 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v4 = -1LL;
  try
  {
    while ( 1 )
    {
      v5 = std::wstring::find((char *)a1, L",", v3);
      *(_OWORD *)String = 0LL;
      if ( v5 == -1 )
        break;
      v21 = 0uLL;
      std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(a1, v3);
      v6 = *(_QWORD *)(a1 + 16) - v3;
      if ( v6 >= v5 - v3 )
        v6 = v5 - v3;
      v7 = a1;
      if ( *(_QWORD *)(a1 + 24) > 7uLL )
        v7 = *(_QWORD *)a1;
      std::wstring::_Construct<1,unsigned short const *>((char **)String, (const void *)(v7 + 2 * v3), v6);
      v2 |= 1u;
      std::stoi(String, v8, v9);
      v17 = v10;
      std::vector<int>::push_back(&v18, &v17);
      std::wstring::_Tidy_deallocate((void **)String);
      v3 = v5 + 1;
    }
    v21 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset(a1, v3);
    if ( *(_QWORD *)(a1 + 16) - v3 != -1LL )
      v4 = *(_QWORD *)(a1 + 16) - v3;
    if ( *(_QWORD *)(a1 + 24) > 7uLL )
      a1 = *(_QWORD *)a1;
    std::wstring::_Construct<1,unsigned short const *>((char **)String, (const void *)(a1 + 2 * v3), v4);
    std::stoi(String, v11, v12);
    v17 = v13;
    std::vector<int>::push_back(&v18, &v17);
    std::wstring::_Tidy_deallocate((void **)String);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1667,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v14);
    goto LABEL_18;
  }
  if ( *((_QWORD *)&v18 + 1) - (_QWORD)v18 == 12LL
    && *(_DWORD *)v18 <= 0xFFu
    && *(_DWORD *)(v18 + 4) <= 0xFFu
    && *(_DWORD *)(v18 + 8) <= 0xFFu )
  {
    v15 = *(unsigned __int8 *)v18 | (*(unsigned __int8 *)(v18 + 8) << 16) | (*(unsigned __int8 *)(v18 + 4) << 8);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v18);
    return v15;
  }
  else
  {
LABEL_18:
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)&v18);
    return 0LL;
  }
}
