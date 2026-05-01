/*
 * XREFs of ??1?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@std@@QEAA@XZ @ 0x1802C86FC
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$39 @ 0x1806F83D9 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$39.c)
 *     _CloudPCTelemetryCore::AddNewCPCIdToStateChangedCountsMap_::_1_::dtor$0 @ 0x1807057EF (_CloudPCTelemetryCore--AddNewCPCIdToStateChangedCountsMap_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>::~unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>(
        _QWORD *a1)
{
  return std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>::~_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>(a1);
}
