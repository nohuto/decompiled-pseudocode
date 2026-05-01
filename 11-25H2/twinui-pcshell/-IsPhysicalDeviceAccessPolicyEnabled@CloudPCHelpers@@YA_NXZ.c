/*
 * XREFs of ?IsPhysicalDeviceAccessPolicyEnabled@CloudPCHelpers@@YA_NXZ @ 0x180348838
 * Callers:
 *     ?IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ @ 0x1803486FC (-IsPhysicalDeviceAccessConfigured@CloudPCHelpers@@YA_NXZ.c)
 *     ?DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ @ 0x180619FFC (-DeletePDAKeyIfPhysicalDeviceAccessed@CloudPCHelpers@@YAXXZ.c)
 * Callees:
 *     ?IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ @ 0x180348864 (-IsPhysicalDeviceAccessPolicyOnCADScreenEnabled@CloudPCHelpers@@YA_NXZ.c)
 *     ?IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ @ 0x180348908 (-IsPhysicalDeviceAccessPolicyOnErrorScreensEnabled@CloudPCHelpers@@YA_NXZ.c)
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
