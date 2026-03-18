/*
 * XREFs of RtlCreateAcl @ 0x1409D8030
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x14025EEEC (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x140260160 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x140513C6C (WdipAccessCheck.c)
 *     SepInitProcessAuditSd @ 0x14063AA70 (SepInitProcessAuditSd.c)
 *     ExpPlRunOnceInit @ 0x1406CCC30 (ExpPlRunOnceInit.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407745A0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14078A2D0 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407A84C8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407A8710 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x1407C219C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407C2CCC (ObpGetDosDevicesProtection.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x1407C3E28 (ObpCreateDefaultObjectTypeSD.c)
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D007C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     RtlpComputeMergedAcl2 @ 0x1408045F4 (RtlpComputeMergedAcl2.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14085A18C (CmpAdminSystemSecurityDescriptor.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     MiCreateMemoryEventSD @ 0x14087F540 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14089FA48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1408A7480 (ObpGetSilosRootDirectory.c)
 *     RtlpCreateServerAcl @ 0x1408E0984 (RtlpCreateServerAcl.c)
 *     RtlpNewSecurityObject @ 0x1408E0FD0 (RtlpNewSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409D63C0 (BiCreateKeySecurityDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1409D7674 (PiUEventInitClientRegistrationContext.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1409FF1D0 (IopCreateSecurityDescriptorPerType.c)
 *     SPCall2ServerInternal @ 0x140A1AE00 (SPCall2ServerInternal.c)
 *     PopCreateNotificationName @ 0x140A3AE38 (PopCreateNotificationName.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD4890 (ObpVerifyAccessToBoundaryEntry.c)
 *     _CmGetRegKeySecurityDescriptor @ 0x140B09878 (_CmGetRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140B2371C (_PnpGetPropertiesSecurityDescriptor.c)
 *     PspSessionObjectCreate @ 0x140B2D6B4 (PspSessionObjectCreate.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B4E1EC (CmpHiveRootSecurityDescriptor.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140C21C34 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140CBCE2C (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140CBEF34 (IopApplySystemPartitionProt.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CC57F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CC6174 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x140CD5374 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140CD768C (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CD8734 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140CD9228 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140CDA288 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140CDD2F0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140CE0570 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140CE7040 (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

NTSTATUS __stdcall RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  __int16 v3; // bx
  UCHAR v4; // si
  NTSTATUS result; // eax

  v3 = AclLength;
  v4 = AclRevision;
  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  memset_0(Acl, 0, AclLength);
  Acl->AclRevision = v4;
  result = 0;
  Acl->Sbz1 = 0;
  *(_DWORD *)&Acl->AceCount = 0;
  Acl->AclSize = v3 & 0xFFFC;
  return result;
}
