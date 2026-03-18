/*
 * XREFs of ObSetSecurityObjectByPointer @ 0x1408EC3B0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     VRegSetup @ 0x1408A5210 (VRegSetup.c)
 *     NtSetSecurityObject @ 0x1408ECC30 (NtSetSecurityObject.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x140914F6C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiSwGetChildPdo @ 0x140A7AAD4 (PiSwGetChildPdo.c)
 *     IoCreateDeviceSecure @ 0x140AF8350 (IoCreateDeviceSecure.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ObSetSecurityObjectByPointer(__int64 a1)
{
  return guard_dispatch_icall_no_overrides(a1, 0LL);
}
