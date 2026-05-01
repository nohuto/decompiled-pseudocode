/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@U12@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@2@@std@@QEAA@XZ @ 0x180623F94
 * Callers:
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RemoteSystemDataModel_::_1_::dtor$18 @ 0x1806B948E (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--Re_ea_1806B948E.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18061F328 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@st.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,winrt::hstring>>::~list<std::pair<winrt::hstring const,winrt::hstring>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x20);
}
