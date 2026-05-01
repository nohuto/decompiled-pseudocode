/*
 * XREFs of ?IsCapabilitySupported@LaunchUriData@implementation@Shell@Internal@Windows@winrt@@QEBA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806417E8
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180629EF8 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x18062D7D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::LaunchUriData::IsCapabilitySupported(
        winrt::Windows::Internal::Shell::implementation::LaunchUriData *this,
        const enum winrt::Windows::Internal::Shell::LocalCapabilities *a2)
{
  char v2; // di

  v2 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      return *((_BYTE *)this + 24);
    case 1:
      return *((_BYTE *)this + 25);
    case 2:
      return *((_BYTE *)this + 26);
    case 3:
      return *((_BYTE *)this + 28);
    case 4:
      return *((_BYTE *)this + 27);
  }
  if ( *(_DWORD *)a2 != 5 )
    return 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
    return *((_BYTE *)this + 29);
  return v2;
}
