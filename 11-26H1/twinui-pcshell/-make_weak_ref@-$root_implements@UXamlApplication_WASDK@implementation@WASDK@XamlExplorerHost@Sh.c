/*
 * XREFs of ?make_weak_ref@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x180242BC8
 * Callers:
 *     ?query_interface_common@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044C2EC (-query_interface_common@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell.c)
 *     ?query_interface_common@?$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@U1345678@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@Ucomposing@8@UIApplicationOverrides@Xaml@UI@Microsoft@8@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180453DB8 (-query_interface_common@-$root_implements@UXamlApplication_WASDK@implementation@WASDK@XamlExplor.c)
 * Callees:
 *     ??0?$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@Z @ 0x1801D1C3C (--0-$weak_ref@$00$00@impl@winrt@@QEAA@PEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@I@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802D9778 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Microsoft::UI::Xaml::IApplicationOverrides>::make_weak_ref(
        volatile signed __int64 *a1)
{
  __int64 v1; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 2);
  if ( v1 >= 0 )
  {
    v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v6 = winrt::impl::weak_ref<1,1>::weak_ref<1,1>(v4, v5, v1);
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
        v8 = _InterlockedCompareExchange64(a1 + 2, (v6 >> 1) | 0x8000000000000000uLL, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 24));
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v9);
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
