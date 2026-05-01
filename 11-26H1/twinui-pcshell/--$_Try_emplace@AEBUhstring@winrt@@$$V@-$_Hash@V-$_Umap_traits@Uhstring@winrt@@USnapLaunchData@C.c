/*
 * XREFs of ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18059BCC0
 * Callers:
 *     ?RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z @ 0x1805A10D0 (-RegisterSnapLaunch@CShellSnapComponent@@UEAAJPEAUHSTRING__@@HURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??$?RUhstring@winrt@@@?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@QEBA_KAEBUhstring@winrt@@@Z @ 0x18013789C (--$-RUhstring@winrt@@@-$_Uhash_compare@Uhstring@winrt@@U-$hash@Uhstring@winrt@@@std@@U-$equal_to.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBUhstring@winrt@@@1@V?$tuple@$$V@1@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUhstring@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18059B49C (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBUhstring@winrt@@@1@V-$tuple@$$V@1@@-$_List_node_.c)
 *     ??$_Find_last@Uhstring@winrt@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@AEBUhstring@winrt@@_K@Z @ 0x18059B978 (--$_Find_last@Uhstring@winrt@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSna.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18059D6C0 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@USnapLaunchDa.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1805A3F04 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@USnapLaunchData@CShellSnapComponent@@V-$.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Try_emplace<winrt::hstring const &,>(
        float *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // rdx
  float v9; // xmm0_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+38h] [rbp-18h]
  __int128 v23; // [rsp+40h] [rbp-10h] BYREF
  const struct winrt::hstring *v24; // [rsp+70h] [rbp+20h] BYREF

  v6 = std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>::operator()<winrt::hstring>(
         (__int64)a1,
         a3);
  std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Find_last<winrt::hstring>(
    a1,
    &v23,
    a3,
    v6);
  if ( !*((_QWORD *)&v23 + 1) )
  {
    if ( *((_QWORD *)a1 + 2) == 0x555555555555555LL )
      std::_Xlength_error("unordered_map/set too long");
    v24 = (const struct winrt::hstring *)a3;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>(
      &v21,
      (__int64)(a1 + 2),
      v7,
      &v24);
    v8 = *((_QWORD *)a1 + 2) + 1LL;
    if ( v8 < 0 )
      v9 = (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1))
         + (float)(v8 & 1 | (unsigned int)((unsigned __int64)v8 >> 1));
    else
      v9 = (float)(int)v8;
    v10 = *((_QWORD *)a1 + 7);
    if ( v10 < 0 )
    {
      v12 = *((_QWORD *)a1 + 7) & 1LL | ((unsigned __int64)v10 >> 1);
      v11 = (float)(int)v12 + (float)(int)v12;
    }
    else
    {
      v11 = (float)(int)v10;
    }
    if ( (float)(v9 / v11) > *a1 )
    {
      v13 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(
              (__int64)a1,
              v8);
      std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Forced_rehash(
        a1,
        v13);
      v23 = *(_OWORD *)std::_Hash<std::_Umap_traits<winrt::hstring,CShellSnapComponent::SnapLaunchData,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>,0>>::_Find_last<winrt::hstring>(
                         a1,
                         &v23,
                         v22 + 2,
                         v6);
    }
    v14 = v22;
    v22 = 0LL;
    v15 = v23;
    v16 = *(_QWORD **)(v23 + 8);
    ++*((_QWORD *)a1 + 2);
    *v14 = v15;
    v14[1] = v16;
    *v16 = v14;
    *(_QWORD *)(v15 + 8) = v14;
    v17 = 2 * (v6 & *((_QWORD *)a1 + 6));
    v18 = *((_QWORD *)a1 + 3);
    v19 = *(_QWORD *)(v18 + 16 * (v6 & *((_QWORD *)a1 + 6)));
    if ( v19 == *((_QWORD *)a1 + 1) )
    {
      *(_QWORD *)(v18 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v14;
LABEL_18:
      *(_QWORD *)(v18 + 8 * v17 + 8) = v14;
      goto LABEL_19;
    }
    if ( v19 == v15 )
    {
      *(_QWORD *)(v18 + 16 * (v6 & *((_QWORD *)a1 + 6))) = v14;
    }
    else if ( *(_QWORD **)(v18 + 16 * (v6 & *((_QWORD *)a1 + 6)) + 8) == v16 )
    {
      goto LABEL_18;
    }
LABEL_19:
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>(&v21);
    return a2;
  }
  *(_QWORD *)a2 = *((_QWORD *)&v23 + 1);
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
