/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1804409BC
 * Callers:
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180440B08 (-query_interface_common@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplor.c)
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180443440 (-query_interface_common@-$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@Xaml.c)
 *     ?query_interface_common@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18059F114 (-query_interface_common@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UI.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180440E1C (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rdi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 >= 0 )
  {
    v4 = (unsigned __int64)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
      *(_QWORD *)(v4 + 8) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<0,1>::`vftable';
      *(_DWORD *)(v4 + 24) = v1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_QWORD *)(v4 + 16) = v5;
    }
    else
    {
      v4 = 0LL;
    }
    v9 = v4;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = _InterlockedCompareExchange64(a1 + 1, (v4 >> 1) | 0x8000000000000000uLL, v1);
        v6 = v1 == v7;
        v1 = v7;
        if ( v6 )
          break;
        if ( v7 < 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(2 * v7 + 24));
          v8 = 2 * v7 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<0,1>>::unconditional_release_ref(&v9);
          return v8;
        }
        _InterlockedExchange((volatile __int32 *)(v4 + 24), v7);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 24));
      return v4 + 8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 24));
    return 2 * v1 + 8;
  }
}
