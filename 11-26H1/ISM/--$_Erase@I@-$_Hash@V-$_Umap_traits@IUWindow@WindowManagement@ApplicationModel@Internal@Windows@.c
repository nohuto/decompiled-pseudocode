/*
 * XREFs of ??$_Erase@I@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEBI@Z @ 0x18004A9C8
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180049EA0 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180049A38 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@I.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Erase<unsigned int>(
        _QWORD *a1,
        unsigned __int8 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(a2);
  v5 = a1[3];
  v6 = a1[6] & v4;
  v7 = a1[1];
  v8 = 2 * v6;
  v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_2:
    v9 = 0LL;
  }
  else
  {
    while ( *(_DWORD *)a2 != *(_DWORD *)(v9 + 16) )
    {
      if ( v9 == *(_QWORD *)(v5 + 8 * v8) )
        goto LABEL_2;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(_QWORD *)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(_QWORD *)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = *(_QWORD *)(v9 + 8);
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(_QWORD *)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)v9;
  }
  v10 = *(_QWORD *)v9;
  --a1[2];
  **(_QWORD **)(v9 + 8) = v10;
  *(_QWORD *)(v10 + 8) = *(_QWORD *)(v9 + 8);
  std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>(
    v10,
    v9);
  return 1LL;
}
