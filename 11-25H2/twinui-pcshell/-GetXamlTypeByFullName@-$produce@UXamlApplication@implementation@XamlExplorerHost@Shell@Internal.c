/*
 * XREFs of ?GetXamlTypeByFullName@?$produce@UXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@67@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x1801B3410
 * Callers:
 *     <none>
 * Callees:
 *     ?GetXamlType@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800AA230 (-GetXamlType@-$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Mar.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication,winrt::Windows::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlTypeByFullName(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8[6]; // [rsp+28h] [rbp-30h] BYREF

  *a3 = 0LL;
  v5 = a1 + 32;
  if ( !a1 )
    v5 = 64LL;
  v8[0] = a2;
  try
  {
    winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXamlType(
      (__int64 **)v5,
      &v7,
      v8);
    *a3 = v7;
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v7);
  }
  return result;
}
