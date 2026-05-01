/*
 * XREFs of ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18003226C
 * Callers:
 *     ?winrt_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18016947C (-winrt_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$equal@V?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@std@@V12@U?$equal_to@X@2@@std@@YA_NV?$reverse_iterator@V?$_String_view_iterator@U?$char_traits@G@std@@@std@@@0@000U?$equal_to@X@0@@Z @ 0x180032384 (--$equal@V-$reverse_iterator@V-$_String_view_iterator@U-$char_traits@G@std@@@std@@@std@@V12@U-$e.c)
 *     ??$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180033044 (--$make_factory@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@.c)
 */

void *XamlExplorerHost_get_activation_factory()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+20h] [rbp-18h]
  int v23; // [rsp+20h] [rbp-18h]
  __int64 v24; // [rsp+40h] [rbp+8h] BYREF

  v0 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.XamlApplication");
  v2 = v1 + 2 * v0;
  v4 = v3[1];
  v5 = *v3;
  v6 = v5 + 2 * v4;
  if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                          v6,
                          v5,
                          v2,
                          v1,
                          0) )
  {
    winrt::impl::make_factory<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlApplication>(&v24);
    return (void *)v24;
  }
  else
  {
    v8 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow");
    LOBYTE(v20) = 0;
    if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                            v6,
                            v10,
                            v9 + 2 * v8,
                            v9,
                            v20) )
    {
      return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow();
    }
    else
    {
      v11 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostChildWindow_WASDK");
      LOBYTE(v21) = 0;
      if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                              v6,
                              v13,
                              v12 + 2 * v11,
                              v12,
                              v21) )
      {
        return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostChildWindow_WASDK();
      }
      else
      {
        v14 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow");
        LOBYTE(v22) = 0;
        if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                                v6,
                                v16,
                                v15 + 2 * v14,
                                v15,
                                v22) )
        {
          return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow();
        }
        else
        {
          v17 = std::_WChar_traits<wchar_t>::length((__int64)L"Windows.Internal.Shell.XamlExplorerHost.XamlExplorerHostWindow_WASDK");
          LOBYTE(v23) = 0;
          if ( (unsigned __int8)std::equal<std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::reverse_iterator<std::_String_view_iterator<std::char_traits<unsigned short>>>,std::equal_to<void>>(
                                  v6,
                                  v19,
                                  v18 + 2 * v17,
                                  v18,
                                  v23) )
            return winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow_WASDK();
          else
            return 0LL;
        }
      }
    }
  }
}
