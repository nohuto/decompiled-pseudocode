/*
 * XREFs of ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@U56@@std@@AEAAXXZ @ 0x18033A088
 * Callers:
 *     ??1?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@U56@@std@@QEAA@XZ @ 0x180338644 (--1-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V-$allocator@U-$.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@U56@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1803386F8 (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@V-$allocator@U-$.c)
 *     ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@U12@V?$map@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@U43@@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1803394E4 (-Remove@-$map_base@U-$map_impl@Uhstring@winrt@@U12@V-$map@Uhstring@winrt@@U12@U-$less@Uhstring@w.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CE1F0 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>,std::allocator<std::pair<winrt::hstring const,winrt::hstring>>,std::_Node_handle_map_base,winrt::hstring,winrt::hstring>::_Clear(
        void **a1)
{
  volatile signed __int32 **v2; // rcx

  v2 = (volatile signed __int32 **)*a1;
  if ( v2 )
  {
    winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition(v2 + 4);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x30);
    *a1 = 0LL;
  }
}
