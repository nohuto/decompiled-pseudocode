/*
 * XREFs of RtlInitializeSid @ 0x140A77920
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x140493ED0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     PiAuAllocateAndInitializeSid @ 0x1407AAD74 (PiAuAllocateAndInitializeSid.c)
 *     PiAuCheckClientInteractive @ 0x1407AADF8 (PiAuCheckClientInteractive.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D311C (PopCreateHiberFileSecurityDescriptor.c)
 *     RtlGetAppContainerParent @ 0x140809AC0 (RtlGetAppContainerParent.c)
 *     InitializeSidLookupTable @ 0x14081E230 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140847400 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140860480 (CmpAdminSystemSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A3DF70 (_SysCtxRegOpenCurrentUserKey.c)
 *     RtlCapabilityCheck @ 0x140A96450 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A968F8 (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B50A7C (CmpHiveRootSecurityDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140CC2EA4 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140CD59CC (PopCreateTimebrokerServiceSid.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepVariableInitialization @ 0x140CE1170 (SepVariableInitialization.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140CF42D0 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
