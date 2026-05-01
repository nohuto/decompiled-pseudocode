/*
 * XREFs of ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x18002BEA0
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x18002C2AC (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016DFDC (-_Forced_rehash@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Ugui.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::emplace<winrt::guid const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rbx
  unsigned __int64 i; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rcx
  float v17; // xmm1_4
  __int64 *v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
    v6 = 0x100000001B3LL * (*(unsigned __int8 *)(a3 + i) ^ (unsigned __int64)v6);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v9 == v11 )
  {
LABEL_9:
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v13 = std::_Allocate<16,std::_Default_allocate_traits>(32LL);
    *(_OWORD *)(v13 + 16) = *(_OWORD *)a3;
    v14 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v14 < 0 )
      v15 = (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1))
          + (float)(v14 & 1 | (unsigned int)((unsigned __int64)v14 >> 1));
    else
      v15 = (float)(int)v14;
    v16 = *(_QWORD *)(a1 + 56);
    if ( v16 < 0 )
    {
      v28 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v16 >> 1);
      v17 = (float)(int)v28 + (float)(int)v28;
    }
    else
    {
      v17 = (float)(int)v16;
    }
    if ( (float)(v15 / v17) > *(float *)a1 )
    {
      v23 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Forced_rehash(
        a1,
        v23);
      v24 = *(_QWORD *)(a1 + 24);
      v25 = *(_QWORD **)(v24 + 16 * (*(_QWORD *)(a1 + 48) & v6) + 8);
      v11 = (_QWORD *)*v10;
      if ( v25 != (_QWORD *)*v10 )
      {
        v26 = *(_QWORD **)(v24 + 16 * (*(_QWORD *)(a1 + 48) & v6));
        while ( 1 )
        {
          v27 = *(_QWORD *)(v13 + 16) - v25[2];
          if ( !v27 )
            v27 = *(_QWORD *)(v13 + 24) - v25[3];
          if ( !v27 )
            break;
          if ( v25 == v26 )
          {
            v11 = v25;
            goto LABEL_15;
          }
          v25 = (_QWORD *)v25[1];
        }
        v11 = (_QWORD *)*v25;
      }
    }
LABEL_15:
    v18 = (__int64 *)v11[1];
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v13 = v11;
    *(_QWORD *)(v13 + 8) = v18;
    *v18 = v13;
    v11[1] = v13;
    v19 = 2 * (*(_QWORD *)(a1 + 48) & v6);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_QWORD **)(v20 + 8 * v19);
    if ( v21 == (_QWORD *)*v10 )
    {
      *(_QWORD *)(v20 + 8 * v19) = v13;
    }
    else
    {
      if ( v21 == v11 )
      {
        *(_QWORD *)(v20 + 8 * v19) = v13;
        goto LABEL_18;
      }
      if ( *(__int64 **)(v20 + 8 * v19 + 8) != v18 )
        goto LABEL_18;
    }
    *(_QWORD *)(v20 + 8 * v19 + 8) = v13;
LABEL_18:
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)a3 - v9[2];
    if ( *(_QWORD *)a3 == v9[2] )
      v12 = *(_QWORD *)(a3 + 8) - v9[3];
    if ( !v12 )
      break;
    if ( v9 == *(_QWORD **)(v8 + 16 * (v6 & *(_QWORD *)(a1 + 48))) )
    {
      v11 = v9;
      goto LABEL_9;
    }
    v9 = (_QWORD *)v9[1];
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
