/*
 * XREFs of ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180624714
 * Callers:
 *     ?Remove@?$map_base@U?$map_impl@IUhstring@winrt@@V?$map@IUhstring@winrt@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@IUhstring@3@@winrt@@QEAAXAEBI@Z @ 0x18062A5DC (-Remove@-$map_base@U-$map_impl@IUhstring@winrt@@V-$map@IUhstring@winrt@@U-$less@I@std@@V-$alloca.c)
 *     ?Remove@?$map_base@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@_KUhstring@3@@winrt@@QEAAXAEB_K@Z @ 0x18062A76C (-Remove@-$map_base@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$less@_K@std@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z @ 0x180295134 (--_GSnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAAPEAXI@Z.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@2@U_Node_handle_map_base@2@_KUhstring@winrt@@@std@@AEAAXXZ @ 0x18062D190 (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CB_KUhstring@winrt@@@std@@PEAX@std@@V-$allocator@.c)
 */

void **__fastcall std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  volatile signed __int32 **v4; // rcx

  v2 = *a2;
  v4 = (volatile signed __int32 **)*a1;
  if ( v4 )
  {
    if ( !v2 || a1 == a2 )
    {
      std::_Node_handle<std::_Tree_node<std::pair<unsigned __int64 const,winrt::hstring>,void *>,std::allocator<std::pair<unsigned __int64 const,winrt::hstring>>,std::_Node_handle_map_base,unsigned __int64,winrt::hstring>::_Clear(a1);
      return a1;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion::`scalar deleting destructor'(v4 + 4);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
    v2 = *a2;
    *a2 = 0LL;
    goto LABEL_4;
  }
  if ( v2 )
  {
    *a2 = 0LL;
LABEL_4:
    *a1 = v2;
  }
  return a1;
}
