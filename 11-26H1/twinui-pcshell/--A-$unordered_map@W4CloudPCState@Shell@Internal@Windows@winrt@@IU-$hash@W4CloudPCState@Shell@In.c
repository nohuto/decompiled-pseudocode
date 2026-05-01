/*
 * XREFs of ??A?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@std@@QEAAAEAI$$QEAW4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x180671A44
 * Callers:
 *     ?AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180671AEC (-AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ??$_Try_emplace@W4CloudPCState@Shell@Internal@Windows@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@_N@1@$$QEAW4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x180671680 (--$_Try_emplace@W4CloudPCState@Shell@Internal@Windows@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Cloud.c)
 */

__int64 __fastcall std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>::operator[](
        _QWORD *a1,
        unsigned __int8 *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>::_Try_emplace<enum winrt::Windows::Internal::Shell::CloudPCState,>(
                      a1,
                      (__int64)v3,
                      a2)
       + 20LL;
}
