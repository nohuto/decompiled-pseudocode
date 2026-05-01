/*
 * XREFs of ?GetXmlnsDefinitions@?$produce@UXamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@8@@impl@winrt@@UEAAHPEAIPEAPEAUstruct_Microsoft_UI_Xaml_Markup_XmlnsDefinition@23@@Z @ 0x180446920
 * Callers:
 *     <none>
 * Callees:
 *     ??$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?A_P$$QEAU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180225704 (--$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CE1F0 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ?GetXmlnsDefinitions@?$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProvider@Markup@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18043EE48 (-GetXmlnsDefinitions@-$consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider@UIXamlMetadataProv.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK,winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 **v8; // rbx
  volatile signed __int32 **i; // rdi
  LPVOID pv; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+30h] [rbp-28h]

  *a3 = 0LL;
  v6 = a1 + 16;
  if ( !a1 )
    v6 = 48LL;
  winrt::impl::consume_Microsoft_UI_Xaml_Markup_IXamlMetadataProvider<winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider>::GetXmlnsDefinitions(
    (__int64 **)v6,
    (__int64)&pv);
  v7 = winrt::detach_abi<winrt::Windows::Internal::Shell::PlatformExtensions::SnappableWindowSuggestion>();
  *a2 = *(_DWORD *)v7;
  *a3 = *(_QWORD *)(v7 + 8);
  if ( pv )
  {
    v8 = (volatile signed __int32 **)((char *)pv + 16 * v12);
    for ( i = (volatile signed __int32 **)pv; i != v8; i += 2 )
      winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition(i);
    CoTaskMemFree_0(pv);
  }
  return 0LL;
}
