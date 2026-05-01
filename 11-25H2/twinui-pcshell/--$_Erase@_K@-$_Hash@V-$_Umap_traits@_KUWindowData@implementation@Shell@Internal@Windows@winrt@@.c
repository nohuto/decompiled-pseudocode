/*
 * XREFs of ??$_Erase@_K@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@AEAA_KAEB_K@Z @ 0x1802A21E0
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18012787C (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x180154B2C (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A2288 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@Shell@Internal@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::Windows::Internal::Shell::implementation::WindowData,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>,0>>::_Erase<unsigned __int64>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  v3 = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>(
         a1,
         (__int64)a2);
  v5 = v4[3];
  v6 = v4[6] & v3;
  v7 = (_QWORD *)v4[1];
  v8 = 2 * v6;
  v9 = *(_QWORD **)(v5 + 8 * v8 + 8);
  if ( v9 == v7 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    while ( *a2 != v9[2] )
    {
      if ( v9 == *(_QWORD **)(v5 + 8 * v8) )
        goto LABEL_5;
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( !v9 )
    return 0LL;
  if ( *(_QWORD **)(v5 + 8 * v8 + 8) == v9 )
  {
    if ( *(_QWORD **)(v5 + 8 * v8) == v9 )
      *(_QWORD *)(v5 + 8 * v8) = v7;
    else
      v7 = (_QWORD *)v9[1];
    *(_QWORD *)(v5 + 8 * v8 + 8) = v7;
  }
  else if ( *(_QWORD **)(v5 + 8 * v8) == v9 )
  {
    *(_QWORD *)(v5 + 8 * v8) = *v9;
  }
  v10 = *v9;
  --v4[2];
  *(_QWORD *)v9[1] = v10;
  *(_QWORD *)(v10 + 8) = v9[1];
  std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>();
  return 1LL;
}
