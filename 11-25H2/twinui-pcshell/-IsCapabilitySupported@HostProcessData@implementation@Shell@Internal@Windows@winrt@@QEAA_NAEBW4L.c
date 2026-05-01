/*
 * XREFs of ?IsCapabilitySupported@HostProcessData@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x180641B34
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180629EF8 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18063DDC8 (-SaveHostProcessDataToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windo.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x18062D7D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::implementation::HostProcessData::IsCapabilitySupported(
        winrt::Windows::Internal::Shell::implementation::HostProcessData *this,
        const enum winrt::Windows::Internal::Shell::LocalCapabilities *a2)
{
  char v2; // di

  v2 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      return *((_BYTE *)this + 28);
    case 1:
      return *((_BYTE *)this + 29);
    case 2:
      return *((_BYTE *)this + 30);
    case 3:
      return *((_BYTE *)this + 32);
    case 4:
      return *((_BYTE *)this + 31);
  }
  if ( *(_DWORD *)a2 != 5 )
    return 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
    return *((_BYTE *)this + 33);
  return v2;
}
