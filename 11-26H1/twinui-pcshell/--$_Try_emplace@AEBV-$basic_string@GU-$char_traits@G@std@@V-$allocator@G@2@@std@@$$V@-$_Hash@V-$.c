/*
 * XREFs of ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18002CFAC
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18002D53C (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18002DA7C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18013C510 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x1801A56E8 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_1801A56E8.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18021F494 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_18021F494.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$?0V?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$tuple@$$V@1@$0A@$$Z$S@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@AEAA@AEAV?$tuple@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@AEAV?$tuple@$$V@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$S@1@@Z @ 0x1802BB840 (--$-0V-$tuple@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@V-$tuple@$$.c)
 *     ??R?$_Conditionally_enabled_hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$00@std@@SA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803EB7C8 (--R-$_Conditionally_enabled_hash@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180617018 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_180617018.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Try_emplace<std::wstring const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rbp
  _QWORD *v11; // r8
  unsigned __int8 *v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  _BYTE v23[16]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 *v24; // [rsp+80h] [rbp+8h] BYREF

  v6 = std::_Conditionally_enabled_hash<std::wstring,1>::operator()(a3);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD **)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v9 = *(_QWORD **)(a1 + 8);
  if ( v8 != v9 )
  {
    v10 = *(_QWORD **)(v7 + 16 * (v6 & *(_QWORD *)(a1 + 48)));
    while ( 1 )
    {
      v11 = v8 + 2;
      if ( v8[5] > 7uLL )
        v11 = (_QWORD *)*v11;
      v12 = a3;
      if ( *((_QWORD *)a3 + 3) > 7uLL )
        v12 = *(unsigned __int8 **)a3;
      if ( (unsigned __int8)std::_Traits_equal<std::char_traits<unsigned short>>(v12, *((_QWORD *)a3 + 2), v11, v8[4]) )
      {
        *(_QWORD *)a2 = v8;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v8 == v10 )
        break;
      v8 = (_QWORD *)v8[1];
    }
    v9 = v8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x492492492492492LL )
    std::_Xlength_error("unordered_map/set too long");
  v21 = a1 + 8;
  v14 = std::_Allocate<16,std::_Default_allocate_traits>(56LL);
  v22 = v14;
  v24 = a3;
  ____0V__tuple_AEBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___std__V__tuple___V_1__0A___Z_S___pair___CBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___K_std__AEAA_AEAV__tuple_AEBV__basic_string_GU__char_traits_G_std__V__allocator_G_2__std___1_AEAV__tuple___V_1_U__integer_sequence__K_0A__1_U__integer_sequence__K_S_1__Z(
    v14 + 16,
    &v24);
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v19 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v19 + (float)(int)v19;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v20 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Forced_rehash(
      a1,
      v20);
    v9 = *(_QWORD **)std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Find_last<std::wstring>(
                       a1,
                       v23,
                       v14 + 16,
                       v6);
  }
  v22 = 0LL;
  *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Insert_new_node_before(
                    a1,
                    v6,
                    v9,
                    v14);
  *(_BYTE *)(a2 + 8) = 1;
  std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,__int64>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,__int64>,void *>>>(&v21);
  return a2;
}
