/*
 * XREFs of ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUTypeName@Interop@Xaml@UI@Windows@3@@Z @ 0x1801D3B70
 * Callers:
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUTypeName@Interop@Xaml@UI@78@@Z @ 0x1801D3A90 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Inte_ea_1801D3A90.c)
 *     ?GetXamlType@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHUstruct_Windows_UI_Xaml_Interop_TypeName@23@PEAPEAX@Z @ 0x1801E2040 (-GetXamlType@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(__int64, __int128 *, _QWORD **); // rax
  unsigned int v6; // eax
  _QWORD *result; // rax
  _BYTE v8[12]; // [rsp+24h] [rbp-54h] BYREF
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF
  int v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+48h] [rbp-30h]
  _QWORD *v12; // [rsp+58h] [rbp-20h] BYREF

  v12 = a2;
  v3 = *a1;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0;
  v5 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD **))(*(_QWORD *)v3 + 48LL);
  v9 = *a3;
  v6 = v5(v3, &v9, &v12);
  winrt::check_hresult(v8, v6, &v10);
  result = a2;
  *a2 = v12;
  return result;
}
