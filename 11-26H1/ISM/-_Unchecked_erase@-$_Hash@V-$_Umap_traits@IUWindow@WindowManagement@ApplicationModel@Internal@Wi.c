/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x180048E0C
 * Callers:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAAXXZ @ 0x180048D94 (-clear@-$_Hash@V-$_Umap_traits@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180049A38 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUWindow@WindowManagement@ApplicationModel@I.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>,0>>::_Unchecked_erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int8 *v6; // rdi
  __int64 v7; // rbp
  unsigned __int8 **v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r12
  unsigned __int8 *v12; // rdx
  __int64 *v13; // rbx
  unsigned __int8 **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 *v18; // r12
  unsigned __int8 *v19; // rdx
  __int64 *v20; // rbx
  __int64 *v22; // [rsp+68h] [rbp+10h]
  unsigned __int8 **v23; // [rsp+70h] [rbp+18h]
  __int64 *v24; // [rsp+78h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = (unsigned __int8 *)a2;
    v7 = a1[3];
    v8 = (unsigned __int8 **)a2[1];
    v23 = (unsigned __int8 **)a1[1];
    v9 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()((unsigned __int8 *)a2 + 16);
    v11 = 2 * (a1[6] & v9);
    v22 = *(__int64 **)(v7 + 16 * (a1[6] & v9));
    v24 = *(__int64 **)(v7 + 16 * (a1[6] & v9) + 8);
    while ( 1 )
    {
      v12 = v6;
      v13 = (__int64 *)v6;
      v6 = *(unsigned __int8 **)v6;
      std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>(
        v10,
        v12);
      --a1[2];
      if ( v13 == v24 )
        break;
      if ( v6 == (unsigned __int8 *)a3 )
      {
        if ( v22 == a2 )
          *(_QWORD *)(v7 + 8 * v11) = v6;
        goto LABEL_16;
      }
    }
    if ( v22 == a2 )
    {
      *(_QWORD *)(v7 + 8 * v11) = v23;
      v14 = v23;
    }
    else
    {
      v14 = v8;
    }
    *(_QWORD *)(v7 + 8 * v11 + 8) = v14;
    while ( v6 != (unsigned __int8 *)a3 )
    {
      v15 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v6 + 16);
      v17 = 2 * (a1[6] & v15);
      v18 = *(__int64 **)(v7 + 16 * (a1[6] & v15) + 8);
      while ( 1 )
      {
        v19 = v6;
        v20 = (__int64 *)v6;
        v6 = *(unsigned __int8 **)v6;
        std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>,void *>>>(
          v16,
          v19);
        --a1[2];
        if ( v20 == v18 )
          break;
        if ( v6 == (unsigned __int8 *)a3 )
        {
          *(_QWORD *)(v7 + 8 * v17) = v6;
          goto LABEL_16;
        }
      }
      *(_QWORD *)(v7 + 8 * v17) = v23;
      *(_QWORD *)(v7 + 8 * v17 + 8) = v23;
    }
LABEL_16:
    *v8 = v6;
    *((_QWORD *)v6 + 1) = v8;
  }
  return a3;
}
