/*
 * XREFs of ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x180149950
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x1800085A0 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800A9E70 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800AF85C (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@W4ValidEffectPackConfig.c)
 *     ??$_Find_last@U_GUID@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@std@@@1@AEBU_GUID@@_K@Z @ 0x180148F8C (--$_Find_last@U_GUID@@@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18014CCB0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettin.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18014D420 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhas.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18014D7C4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::emplace<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings> const &>(
        __int64 a1,
        __int64 a2,
        unsigned int *a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 size_of; // rax
  _OWORD *v7; // rbp
  unsigned __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a3 ^ a3[1] ^ a3[2] ^ (unsigned __int64)a3[3];
  std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
    a1,
    &v17,
    a3,
    v5);
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v17 + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( qword_1801D7DD0 == 0x666666666666666LL )
      std::_Xlength_error("unordered_map/set too long");
    v16[0] = &qword_1801D7DC8;
    size_of = std::_Get_size_of_n<40>(1uLL);
    v7 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v16[1] = v7;
    v7[1] = *(_OWORD *)a3;
    *((_DWORD *)v7 + 8) = a3[4];
    v8 = qword_1801D7DD0 + 1;
    if ( qword_1801D7DD0 + 1 < 0 )
      v9 = (float)(int)(v8 & 1 | (v8 >> 1)) + (float)(int)(v8 & 1 | (v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = qword_1801D7DF8;
    if ( qword_1801D7DF8 < 0 )
    {
      v10 = qword_1801D7DF8 & 1;
      v11 = (float)(int)(v10 | ((unsigned __int64)qword_1801D7DF8 >> 1))
          + (float)(int)(v10 | ((unsigned __int64)qword_1801D7DF8 >> 1));
    }
    else
    {
      v11 = (float)(int)qword_1801D7DF8;
    }
    if ( (float)(v9 / v11) > *(float *)&dword_1801D7DC0 )
    {
      v12 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Desired_grow_bucket_count(
              v10,
              v8);
      std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Forced_rehash(
        v13,
        v12);
      v17 = *(_OWORD *)std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Find_last<_GUID>(
                         v14,
                         &v17,
                         (_QWORD *)v7 + 2,
                         v5);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Insert_new_node_before(
                      v10,
                      v5,
                      v17,
                      v7,
                      v16[0],
                      0LL);
    *(_BYTE *)(a2 + 8) = 1;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>,void *>>>((__int64)v16);
  }
  return a2;
}
