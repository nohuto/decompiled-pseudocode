/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x180649EA0
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180644F14 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWindowId@UI@Windo.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180662E10 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$vector@UWi.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>::~pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    std::_Deallocate<16>(v2, (struct std::nothrow_t *)((*(_QWORD *)(a1 + 24) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)a1);
}
