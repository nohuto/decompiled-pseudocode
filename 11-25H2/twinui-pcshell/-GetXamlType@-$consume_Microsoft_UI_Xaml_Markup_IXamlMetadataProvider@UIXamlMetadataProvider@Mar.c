/*
 * XREFs of ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800AA230
 * Callers:
 *     ?GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA?AUIXamlType@Markup@Xaml@UI@Microsoft@8@AEBUhstring@8@@Z @ 0x1800AA118 (-GetXamlType@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@.c)
 *     ?GetXamlTypeByFullName@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1801B3410 (-GetXamlTypeByFullName@-$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // eax
  _QWORD *result; // rax
  _BYTE v9[4]; // [rsp+24h] [rbp-34h] BYREF
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  _QWORD *v12; // [rsp+40h] [rbp-18h] BYREF

  v12 = a2;
  v3 = *a1;
  v12 = 0LL;
  v10 = 0;
  v5 = *v3;
  v6 = *a3;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v5 + 56))(v3, v6, &v12);
  winrt::check_hresult(v9, v7, &v10);
  result = a2;
  *a2 = v12;
  return result;
}
