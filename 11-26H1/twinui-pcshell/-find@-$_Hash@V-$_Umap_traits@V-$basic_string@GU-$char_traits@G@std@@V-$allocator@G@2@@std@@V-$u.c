/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180672EC0
 * Callers:
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x180671D24 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180106D00 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180656AD8 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_180656AD8.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::find(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // r8
  const unsigned __int8 *v6; // rdx
  __int64 appended; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r11
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 *result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  v6 = (const unsigned __int8 *)a3;
  if ( *(_QWORD *)(a3 + 24) > 7uLL )
    v6 = *(const unsigned __int8 **)a3;
  appended = std::_Fnv1a_append_bytes(a1, v6, 2 * v5);
  v10 = std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Find_last<std::wstring>(
          v8,
          v13,
          v9,
          appended);
  v11 = qword_1808DF188;
  if ( v10[1] )
    v11 = v10[1];
  result = a2;
  *a2 = v11;
  return result;
}
