/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF10
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x18034BE04 (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180643930 (-unsubscribe_from_services@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ?IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BF3C (-IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ @ 0x18034BFE4 (-IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ.c)
 */

char __fastcall CloudPCHelpers::IsPhysicalDeviceAccessPolicyEnabled(CloudPCHelpers *this)
{
  CloudPCHelpers *v1; // rcx
  char v2; // bl

  v2 = 0;
  if ( CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnCADScreenEnabled(this)
    || CloudPCHelpers::IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled(v1) )
  {
    return 1;
  }
  return v2;
}
