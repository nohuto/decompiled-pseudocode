/*
 * XREFs of ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801BB6E8
 * Callers:
 *     ?BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800ABE00 (-BuildRegistryKeyMap@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18018D524 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_KV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x180191AC4 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_180191AC4.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180229910 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802407F0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_1802407F0.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_JV?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_J@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x1805F292C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_1805F292C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Try_emplace<std::wstring const &,>(
        float *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r10
  _QWORD *v7; // rdx
  __int64 v8; // r14
  unsigned __int64 i; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rbp
  __int64 *v13; // r11
  _QWORD *v14; // rdx
  char *v15; // r8
  __int64 v16; // r9
  signed __int64 v17; // r8
  _QWORD *v19; // r15
  __int64 v20; // rdx
  float v21; // xmm0_4
  __int64 v22; // rcx
  float v23; // xmm1_4
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v27; // [rsp+28h] [rbp-30h]
  __int64 v28[5]; // [rsp+30h] [rbp-28h] BYREF

  v6 = a3[2];
  v7 = a3;
  if ( a3[3] > 7uLL )
    v7 = (_QWORD *)*a3;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v6; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v7 + i) ^ (unsigned __int64)v8);
  v10 = *((_QWORD *)a1 + 3);
  v11 = *(__int64 **)(v10 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8);
  v12 = *((_QWORD *)a1 + 1);
  if ( v11 == (__int64 *)v12 )
    goto LABEL_23;
  v13 = *(__int64 **)(v10 + 16 * (v8 & *((_QWORD *)a1 + 6)));
  while ( 1 )
  {
    v14 = v11 + 2;
    if ( (unsigned __int64)v11[5] > 7 )
      v14 = (_QWORD *)*v14;
    v15 = (char *)a3;
    if ( a3[3] > 7uLL )
      v15 = (char *)*a3;
    if ( v6 == v11[4] )
      break;
LABEL_20:
    if ( v11 == v13 )
    {
      v12 = (__int64)v11;
      v11 = 0LL;
      goto LABEL_17;
    }
    v11 = (__int64 *)v11[1];
  }
  v16 = v6;
  v17 = v15 - (char *)v14;
  while ( v16 )
  {
    if ( *(_WORD *)((char *)v14 + v17) != *(_WORD *)v14 )
      goto LABEL_20;
    --v16;
    v14 = (_QWORD *)((char *)v14 + 2);
  }
  v12 = *v11;
LABEL_17:
  if ( !v11 )
  {
LABEL_23:
    if ( *((_QWORD *)a1 + 2) == 0x492492492492492LL )
      std::_Xlength_error("unordered_map/set too long");
    v26 = a1 + 2;
    v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    v27 = v19;
    std::wstring::wstring((__int64)(v19 + 2), (__int64)a3);
    v19[6] = 0LL;
    v20 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v20 < 0 )
      v21 = (float)(v20 & 1 | (unsigned int)((unsigned __int64)v20 >> 1))
          + (float)(v20 & 1 | (unsigned int)((unsigned __int64)v20 >> 1));
    else
      v21 = (float)(int)v20;
    v22 = *((_QWORD *)a1 + 7);
    if ( v22 < 0 )
    {
      v24 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v22 >> 1);
      v23 = (float)(int)v24 + (float)(int)v24;
    }
    else
    {
      v23 = (float)(int)v22;
    }
    if ( (float)(v21 / v23) > *a1 )
    {
      v25 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<std::wstring,__int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,__int64>>,0>>::_Forced_rehash(
        a1,
        v25);
      v12 = *std::_Hash<std::_Umap_traits<std::wstring,unsigned __int64,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,unsigned __int64>>,0>>::_Find_last<std::wstring>(
               a1,
               v28,
               (char *)v19 + 16,
               v8);
    }
    v27 = 0LL;
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Insert_new_node_before(
                      a1,
                      v8,
                      v12,
                      v19);
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,__int64>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<std::wstring const,__int64>,void *>>>(&v26);
  }
  else
  {
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
