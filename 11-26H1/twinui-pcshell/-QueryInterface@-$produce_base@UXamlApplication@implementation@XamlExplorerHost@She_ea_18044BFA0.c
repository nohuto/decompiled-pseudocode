/*
 * XREFs of ?QueryInterface@?$produce_base@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18044BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?query_interface@?$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@U134567@UIXamlMetadataProvider@Markup@Xaml@UI@67@Ucomposing@7@UIApplicationOverrides@Xaml@UI@67@UIApplicationOverrides2@Xaml@UI@67@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x180146254 (-query_interface@-$root_implements@UXamlApplication@implementation@XamlExplorerHost@Shell@Intern.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,void>::QueryInterface(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64, __int64 *); // rcx

  v5 = (a1 - 32) & ((unsigned __int128)-(__int128)a1 >> 64);
  result = winrt::impl::root_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::Internal::Shell::XamlExplorerHost::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider,winrt::composing,winrt::Windows::UI::Xaml::IApplicationOverrides,winrt::Windows::UI::Xaml::IApplicationOverrides2>::query_interface(
             v5,
             a2,
             a3);
  if ( (_DWORD)result == -2147467262 )
  {
    v7 = *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(v5 + 8);
    if ( v7 )
      return (**v7)(v7, a2, a3);
  }
  return result;
}
