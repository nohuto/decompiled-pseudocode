/*
 * XREFs of ??$?0AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@PEAX@std@@@1@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@1@@Z @ 0x180644AB8
 * Callers:
 *     ??$emplace@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBUhstring@winrt@@U?$com_ptr@UIVirtualDesktop@@@2@@1@@Z @ 0x180290E78 (--$emplace@AEBU-$pair@$$CBUhstring@winrt@@U-$com_ptr@UIVirtualDesktop@@@2@@std@@@-$_Hash@V-$_Uma.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800AD2D8 (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CB234 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::com_ptr<IVirtualDesktop>>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        const struct winrt::hstring *a3)
{
  char *v5; // rax
  char *v6; // rbx

  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  a1[1] = v5;
  v6 = v5 + 16;
  winrt::hstring::hstring((winrt::hstring *)(v5 + 16), a3);
  *((_QWORD *)v6 + 1) = *((_QWORD *)a3 + 1);
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef((__int64 *)v6 + 1);
  return a1;
}
