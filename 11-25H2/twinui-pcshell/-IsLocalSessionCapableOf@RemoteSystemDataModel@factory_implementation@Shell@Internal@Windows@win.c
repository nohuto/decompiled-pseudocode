/*
 * XREFs of ?IsLocalSessionCapableOf@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBW4LocalCapabilities@3456@@Z @ 0x1806285A0
 * Callers:
 *     ?IsLocalSessionCapableOf@?$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@UIRemoteSessionWindowManager@3456@@impl@winrt@@UEAAHHPEA_N@Z @ 0x180635360 (-IsLocalSessionCapableOf@-$produce@URemoteSessionWindowManager@implementation@Shell@Internal@Win.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@@details@wil@@QEAA_NXZ @ 0x18062D7D4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings@@.c)
 */

bool __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::IsLocalSessionCapableOf(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const enum winrt::Windows::Internal::Shell::LocalCapabilities *a2)
{
  char v3; // di

  v3 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      return *((_BYTE *)this + 264);
    case 1:
      return *((_BYTE *)this + 265);
    case 2:
      return *((_BYTE *)this + 266);
    case 3:
      return *((_BYTE *)this + 268);
    case 4:
      return *((_BYTE *)this + 267);
  }
  if ( *(_DWORD *)a2 != 5 )
    return 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_W365Boot_BlendedDisplaySettings>::GetImpl'::`2'::impl) )
    return *((_BYTE *)this + 269);
  return v3;
}
