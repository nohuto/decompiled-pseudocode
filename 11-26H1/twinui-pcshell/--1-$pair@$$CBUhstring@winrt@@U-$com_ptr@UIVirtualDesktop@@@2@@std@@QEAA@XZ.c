/*
 * XREFs of ??1?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@QEAA@XZ @ 0x180655328
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1806550C0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18066AA90 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U-$com_ptr@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 */

void __fastcall std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>::~pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>(
        volatile signed __int32 **a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 1);
  if ( *v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v2);
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
}
