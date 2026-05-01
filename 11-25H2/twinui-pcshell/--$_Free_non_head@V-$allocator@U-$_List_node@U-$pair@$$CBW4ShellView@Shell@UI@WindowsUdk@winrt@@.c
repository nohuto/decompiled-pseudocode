/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800A6BDC
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800FB5EC (--1-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V-$.c)
 *     ??1?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@QEAA@XZ @ 0x18022D334 (--1-$list@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V-.c)
 *     ??1_Clear_guard@?$_Hash@V?$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@V?$_Uhash_compare@W4ShellView@Shell@UI@WindowsUdk@winrt@@U?$hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@U?$equal_to@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x180569188 (--1_Clear_guard@-$_Hash@V-$_Umap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordin.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>,void *>>>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  *a2[1] = 0LL;
  v2 = *a2;
  if ( *a2 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(v2 + 3));
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x20);
      v2 = v3;
    }
    while ( v3 );
  }
}
