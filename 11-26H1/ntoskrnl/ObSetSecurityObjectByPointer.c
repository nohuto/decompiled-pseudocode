/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x1408F2970
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     VRegSetup @ 0x1408AB680 (VRegSetup.c)
 *     NtSetSecurityObject @ 0x1408F31F0 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14096F9D8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiSwGetChildPdo @ 0x140A8BC18 (PiSwGetChildPdo.c)
 *     IoCreateDeviceSecure @ 0x140AFAA30 (IoCreateDeviceSecure.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1, 0LL);
}
