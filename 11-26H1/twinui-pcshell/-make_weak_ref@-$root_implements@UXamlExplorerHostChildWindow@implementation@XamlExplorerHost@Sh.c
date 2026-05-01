/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18044D02C
 * Callers:
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044D158 (-query_interface_common@-$root_implements@UXamlExplorerHostChildWindow@implementation@XamlExplor.c)
 *     ?query_interface_common@?$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlExplorerHostChildWindow_WASDK2@34567@UIXamlExplorerHostChildWindow_WASDK3@34567@UIXamlExplorerHostChildWindow_WASDK4@34567@UIClosable@Foundation@67@Unon_agile@7@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044FB00 (-query_interface_common@-$root_implements@UXamlExplorerHostChildWindow_WASDK@implementation@Xaml.c)
 *     ?query_interface_common@?$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UIServiceProvider@@UIUpdateViewValueSet@@Unon_agile@winrt@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805C33D4 (-query_interface_common@-$root_implements@VSnapWindowProvider@SnapLauncher@@UIObjectWithSite@@UI.c)
 * Callees:
 *     ??0?$weak_ref@$0A@$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1802BD234 (--0-$weak_ref@$0A@$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x18044D460 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$0A@$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostChildWindow,winrt::Windows::Foundation::IClosable,winrt::non_agile>::make_weak_ref(
        volatile signed __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 >= 0 )
  {
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v6 = winrt::impl::weak_ref<0,1>::weak_ref<0,1>(v4, v5, v1);
    }
    else
    {
      v6 = 0LL;
    }
    v9 = v6;
    if ( v6 )
    {
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, (v6 >> 1) | 0x8000000000000000uLL, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 24));
          winrt::com_ptr<winrt::impl::weak_ref<0,1>>::unconditional_release_ref(&v9);
          return 2 * v1 + 8;
        }
        _InterlockedExchange((volatile __int32 *)(v6 + 24), v8);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
      return v6 + 8;
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
