/*
 * XREFs of ?IsBootToCloudModeRegistryCheck@CloudPCHelpers@@YA_NXZ @ 0x180348660
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1803486FC (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x180619FFC (-DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ.c)
 *     ?IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ @ 0x18061B828 (-IsSignOutConfiguredForPhysicalDeviceAccess@CloudPCHelpers@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18034E244 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly@@@details@wil.c)
 */

char __fastcall CloudPCHelpers::IsBootToCloudModeRegistryCheck(CloudPCHelpers *this, __int64 a2)
{
  char v2; // bl
  int pvData; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-14h] BYREF

  pvData = 0;
  pcbData = 4;
  v2 = 1;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_W365Boot_DedicatedCloudOnly>::GetImpl'::`2'::impl,
    a2);
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\PolicyManager\\current\\Device\\CloudDesktop",
         L"BootToCloudMode",
         0x10u,
         0LL,
         &pvData,
         &pcbData)
    || pvData != 1 )
  {
    return 0;
  }
  return v2;
}
