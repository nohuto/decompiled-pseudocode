/*
 * XREFs of ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0
 * Callers:
 *     ?OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800479F0 (-OnApplicationViewChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIA.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800A2940 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18002C0F0 (--1-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@s.c)
 *     ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18002C14C (-RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV-.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180136968 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x18018146C (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x18018149C (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x1801815CC (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x180285D68 (--$_Erase@_K@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA3C (-find@-$_Hash@V-$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V-$_Uha.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this,
        __int64 a2)
{
  char *v4; // r14
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  _OWORD *v8; // r9
  _OWORD *v9; // r10
  _BYTE v10[16]; // [rsp+20h] [rbp-39h] BYREF
  __int128 v11; // [rsp+30h] [rbp-29h] BYREF
  _OWORD *v12; // [rsp+40h] [rbp-19h]
  _QWORD v13[3]; // [rsp+50h] [rbp-9h] BYREF
  unsigned __int64 *v14; // [rsp+68h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  char v18; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+6Fh] BYREF

  v19 = a2;
  v4 = (char *)this + 624;
  if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::find(
                    (char *)this + 624,
                    &v18,
                    &v19) != *((_QWORD *)this + 79) )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13[2] = 0LL;
    v5 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(40LL);
    *v5 = v5;
    v5[1] = v5;
    v13[1] = v5;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 7LL;
    v17 = 8LL;
    LODWORD(v13[0]) = 1065353216;
    std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
      &v14,
      0x10uLL,
      (unsigned __int64)v5);
    v6 = (_QWORD *)*((_QWORD *)this + 92);
    for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
    {
      if ( *(_QWORD *)std::deque<unsigned __int64>::operator[]((char *)this + 688, i[4]) == a2 )
      {
        if ( v8 == v12 )
        {
          std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(&v11, v8, v9);
        }
        else
        {
          *v8 = *v9;
          *((_QWORD *)&v11 + 1) += 16LL;
        }
      }
      else
      {
        std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
          v13,
          v10,
          v9 + 1,
          v9);
      }
    }
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
      (__int64)this,
      (__int64 *)&v11,
      (__int64)v13);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Erase<unsigned __int64>(
      v4,
      &v19);
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::~_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>(v13);
    if ( (_QWORD)v11 )
      std::_Deallocate<16>(v11, ((unsigned __int64)v12 - v11) & 0xFFFFFFFFFFFFFFF0uLL);
  }
}
