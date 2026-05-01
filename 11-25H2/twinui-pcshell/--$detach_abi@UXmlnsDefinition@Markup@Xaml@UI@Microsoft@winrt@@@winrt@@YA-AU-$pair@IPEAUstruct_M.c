/*
 * XREFs of ??$detach_abi@UXmlnsDefinition@Markup@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AU?$pair@IPEAUstruct_Microsoft_UI_Xaml_Markup_XmlnsDefinition@impl@winrt@@@std@@AEAU?$com_array@UXmlnsDefinition@Markup@Xaml@UI@Microsoft@winrt@@@0@@Z @ 0x1802AFBDC
 * Callers:
 *     ??$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?A_P$$QEAU?$com_array@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@0@@Z @ 0x180225704 (--$detach_abi@USnappableWindowSuggestion@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::detach_abi<winrt::Microsoft::UI::Xaml::Markup::XmlnsDefinition>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
  result = a1;
  *(_OWORD *)a2 = 0LL;
  return result;
}
