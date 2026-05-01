/*
 * XREFs of ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800619DC
 * Callers:
 *     ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x180061210 (-GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV-$vector@.c)
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180061490 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 * Callees:
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801276B8 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Ugui.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x180229910 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::emplace<winrt::guid const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  _QWORD *v13; // r12
  _OWORD *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // [rsp+20h] [rbp-28h]

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 0x10 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(_QWORD **)(a1 + 8);
  if ( v9 == v10 )
  {
    v13 = (_QWORD *)(a1 + 8);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v11 = *a3 - v9[2];
    if ( *a3 == v9[2] )
      v11 = a3[1] - v9[3];
    if ( !v11 )
      break;
    if ( v9 == *(_QWORD **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
    {
      v10 = v9;
      v9 = 0LL;
      goto LABEL_10;
    }
    v9 = (_QWORD *)v9[1];
  }
  v10 = (_QWORD *)*v9;
LABEL_10:
  if ( !v9 )
  {
    v13 = (_QWORD *)(a1 + 8);
LABEL_15:
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v14 = operator new(0x20uLL);
    v14[1] = *(_OWORD *)a3;
    v15 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v15 < 0 )
      v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
          + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
    else
      v16 = (float)(int)v15;
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 < 0 )
    {
      v27 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
      v18 = (float)(int)v27 + (float)(int)v27;
    }
    else
    {
      v18 = (float)(int)v17;
    }
    if ( (float)(v16 / v18) > *(float *)a1 )
    {
      v23 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::_Forced_rehash(
        a1,
        v23);
      v24 = *(_QWORD *)(a1 + 24);
      v25 = *(_QWORD **)(v24 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
      if ( v25 == (_QWORD *)*v13 )
      {
        v28 = (_QWORD *)*v13;
      }
      else
      {
        while ( 1 )
        {
          v26 = *((_QWORD *)v14 + 2) - v25[2];
          if ( !v26 )
            v26 = *((_QWORD *)v14 + 3) - v25[3];
          if ( !v26 )
            break;
          if ( v25 == *(_QWORD **)(v24 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
          {
            v28 = v25;
            goto LABEL_36;
          }
          v25 = (_QWORD *)v25[1];
        }
        v28 = (_QWORD *)*v25;
      }
LABEL_36:
      v13 = (_QWORD *)(a1 + 8);
      v10 = v28;
    }
    v19 = (_QWORD *)v10[1];
    ++*(_QWORD *)(a1 + 16);
    *(_QWORD *)v14 = v10;
    *((_QWORD *)v14 + 1) = v19;
    *v19 = v14;
    v10[1] = v14;
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 2 * (v7 & *(_QWORD *)(a1 + 48));
    v22 = *(_QWORD **)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
    if ( v22 == (_QWORD *)*v13 )
    {
      *(_QWORD *)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v14;
    }
    else
    {
      if ( v22 == v10 )
      {
        *(_QWORD *)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v14;
        goto LABEL_24;
      }
      if ( *(_QWORD **)(v20 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
        goto LABEL_24;
    }
    *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
LABEL_24:
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 1;
    return a2;
  }
  *(_QWORD *)a2 = v9;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
