/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@@2@@std@@QEAA@XZ @ 0x18057A030
 * Callers:
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$71 @ 0x1806CFBF6 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$71.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellSnapComponent@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1805782F4 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@USnapLaunchData@CShellS.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>::~list<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,CShellSnapComponent::SnapLaunchData>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x30);
}
