/*
 * XREFs of ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x180396824
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180396050 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039641C (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x1800AF974 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800AF9D0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Emplace_one_at_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x1802C280C (--$_Emplace_one_at_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x18033533C (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall RetailDemoExperienceManager::_SplitString(_QWORD *a1, __int64 *a2, __int16 a3)
{
  int v6; // esi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  v7 = 0LL;
  v8 = a2[2];
  do
  {
    v9 = (__int64)a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v9 = *a2;
    v10 = std::_Traits_find_ch<std::char_traits<unsigned short>>(v9, v8, v7, a3);
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)a2, v7);
    v11 = a2[2] - v7;
    if ( v11 >= v10 - v7 )
      v11 = v10 - v7;
    v12 = (__int64)a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v12 = *a2;
    std::wstring::_Construct<1,unsigned short const *>((char **)&v14, (const void *)(v12 + 2 * v7), v11);
    v6 |= 2u;
    std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>((__int64)a1, (__int64)&v14);
    std::wstring::_Tidy_deallocate((void **)&v14);
    v7 = v10 + 1;
    v8 = a2[2];
  }
  while ( v10 < v8 );
  return a1;
}
