/*
 * XREFs of ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x18039CDA0
 * Callers:
 *     ?_SplitString@RetailDemoExperienceManager@@CA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@G@Z @ 0x18039EE5C (-_SplitString@RetailDemoExperienceManager@@CA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::vector<std::wstring>::emplace_back<std::wstring>(__int64 a1, __int64 a2)
{
  return std::vector<std::wstring>::_Emplace_one_at_back<std::wstring>(a1, a2);
}
