/*
 * XREFs of ??$emplace@Uguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@std@@@std@@@std@@_N@1@$$QEAUguid@winrt@@AEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@4@@Z @ 0x1800A2C38
 * Callers:
 *     ?AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabView@3UI@456@@Z @ 0x1800A24EC (-AddTabProxyWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUWindowTabVi.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$_Find_last@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@PEAX@std@@@1@AEBUguid@winrt@@_K@Z @ 0x1801ABA98 (--$_Find_last@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@impl.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x180580888 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::emplace<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rbp
  unsigned __int64 i; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD v25[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 0x10; ++i )
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + i) ^ (unsigned __int64)v7);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD **)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v11 = *(_QWORD **)(a1 + 8);
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      v12 = *a3 - v10[2];
      if ( *a3 == v10[2] )
        v12 = a3[1] - v10[3];
      if ( !v12 )
      {
        *(_QWORD *)a2 = v10;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v10 == *(_QWORD **)(v9 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
        break;
      v10 = (_QWORD *)v10[1];
    }
    v11 = v10;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
    std::_Xlength_error("unordered_map/set too long");
  v25[0] = a1 + 8;
  v14 = std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  v25[1] = v14;
  *(_OWORD *)(v14 + 16) = *(_OWORD *)a3;
  *(_QWORD *)(v14 + 32) = *a4;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)(v14 + 32));
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v23 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v23 + (float)(int)v23;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v24 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Forced_rehash(
      a1,
      v24);
    v11 = *(_QWORD **)((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64))std::_Hash<std::_Umap_traits<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>>,0>>::_Find_last<winrt::guid>)(
                        a1,
                        v25,
                        v14 + 16,
                        v7);
  }
  v19 = (__int64 *)v11[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v14 = v11;
  *(_QWORD *)(v14 + 8) = v19;
  *v19 = v14;
  v11[1] = v14;
  v20 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v21 = *(_QWORD *)(a1 + 24);
  v22 = *(_QWORD **)(v21 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v21 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v14;
    goto LABEL_24;
  }
  if ( v22 == v11 )
  {
    *(_QWORD *)(v21 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v14;
    goto LABEL_9;
  }
  if ( *(__int64 **)(v21 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) == v19 )
LABEL_24:
    *(_QWORD *)(v21 + 8 * v20 + 8) = v14;
LABEL_9:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
