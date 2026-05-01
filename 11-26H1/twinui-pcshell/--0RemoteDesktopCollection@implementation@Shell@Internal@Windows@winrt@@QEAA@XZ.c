/*
 * XREFs of ??0RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802BBD34
 * Callers:
 *     ??$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA?AV?$shared_ptr@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@@0@XZ @ 0x1802BBCC0 (--$make_shared@URemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@$$V@std@@YA.c)
 * Callees:
 *     ??0?$list@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@2@@std@@QEAA@AEBV?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@@1@@Z @ 0x180054AA0 (--0-$list@U-$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@UShellViewCoordinator@2345@@std@@V-.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@2@@Z @ 0x180137160 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180137160.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::RemoteDesktopCollection(
        winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection *this)
{
  char *v2; // rdi

  *(_QWORD *)this = 0LL;
  v2 = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  std::list<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>::list<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,winrt::WindowsUdk::UI::Shell::ShellViewCoordinator>>((_QWORD *)this + 2);
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<winrt::hstring const,winrt::hstring>>>>>>::_Assign_grow(
    (unsigned __int64 **)v2 + 3,
    0x10uLL,
    *((_QWORD *)v2 + 1));
  return this;
}
