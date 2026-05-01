/*
 * XREFs of ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18039EE5C
 * Callers:
 *     ?_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039E670 (-_ParseExperienceArguments@RetailDemoExperienceManager@@AEAAXAEBV-$basic_string@GU-$char_traits@.c)
 *     ?_ParseScreenRect@RetailDemoExperienceManager@@CA?AUtagRECT@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18039EA40 (-_ParseScreenRect@RetailDemoExperienceManager@@CA-AUtagRECT@@AEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x180201B54 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Traits_find_ch@U?$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z @ 0x180334B78 (--$_Traits_find_ch@U-$char_traits@G@std@@@std@@YA_KQEBG_K1G@Z.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18039CDA0 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall RetailDemoExperienceManager::_SplitString(_QWORD *a1, __int64 *a2, __int16 a3)
{
  unsigned __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r8
  __int64 *v11; // rax
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF

  v6 = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = 1;
  do
  {
    v8 = (__int64)a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v8 = *a2;
    v9 = std::_Traits_find_ch<std::char_traits<unsigned short>>(v8, a2[2], v6, a3);
    memset(v13, 0, sizeof(v13));
    std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset((__int64)a2, v6);
    v10 = a2[2] - v6;
    if ( v10 >= v9 - v6 )
      v10 = v9 - v6;
    v11 = a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v11 = (__int64 *)*a2;
    std::wstring::_Construct<1,unsigned short const *>((char **)v13, (char *)v11 + 2 * v6, v10);
    v7 |= 2u;
    std::vector<std::wstring>::emplace_back<std::wstring>((__int64)a1, (__int64)v13);
    std::wstring::_Tidy_deallocate(v13);
    v6 = v9 + 1;
  }
  while ( v9 < a2[2] );
  return a1;
}
