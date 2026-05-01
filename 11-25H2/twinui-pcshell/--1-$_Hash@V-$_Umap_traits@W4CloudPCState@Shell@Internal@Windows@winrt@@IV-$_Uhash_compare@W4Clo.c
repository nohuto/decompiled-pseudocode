/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x18020FA8C
 * Callers:
 *     ??1?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@std@@QEAA@XZ @ 0x1802D1A04 (--1-$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU-$hash@W4CloudPCState@Shell@In.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18057A164 (--1CShellSnapComponent@@UEAA@XZ.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@QEAA@XZ @ 0x180632FD4 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unordered_map@W4C.c)
 *     ?AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18064BB40 (-AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_List_node@_KPEAX@std@@SAXAEAV?$allocator@U?$_List_node@_KPEAX@std@@@1@PEAU01@@Z @ 0x18020FAE4 (--$_Free_non_head@V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_List_node@_KPEAX@std@@SAXAEAV.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>::~_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 40) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  std::_List_node<unsigned __int64,void *>::_Free_non_head<std::allocator<std::_List_node<unsigned __int64,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), (const struct std::nothrow_t *)0x18);
}
