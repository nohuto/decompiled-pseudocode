/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x140A7D920
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x140406340 (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404D5398 (SepBuildCapeSecurityDescriptor.c)
 *     WdipAccessCheck @ 0x14050D6DC (WdipAccessCheck.c)
 *     SepMandatorySubProcessToken @ 0x14050EF38 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x14051E754 (SepVerifyDesktopAppxImage.c)
 *     SepInitProcessAuditSd @ 0x14063DADC (SepInitProcessAuditSd.c)
 *     ExpPlRunOnceInit @ 0x1406D0C60 (ExpPlRunOnceInit.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407775A0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     DbgkpCreateNotificationEvent @ 0x14078CE00 (DbgkpCreateNotificationEvent.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407AB078 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407AB2C0 (PiAuGetStateDirectorySecurityObject.c)
 *     ObCreateKernelObjectsSD @ 0x1407C51FC (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x1407C5D2C (ObpGetDosDevicesProtection.c)
 *     PfpCreateEventInternal @ 0x1407CB08C (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D311C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     SepInitializationPhase1 @ 0x140815D14 (SepInitializationPhase1.c)
 *     NtSetUuidSeed @ 0x140847400 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140860480 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140861458 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     MiGetPagingFileHandle @ 0x140871CE8 (MiGetPagingFileHandle.c)
 *     MiCreateMemoryEventSD @ 0x140885940 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x1408A5E48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1408AD8F0 (ObpGetSilosRootDirectory.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14091B880 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x14091B9C0 (IoCreateDevice.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140AD1CF0 (ObpVerifyAccessToBoundaryEntry.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3FE50 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140C27C44 (ViInitializeLocalSystemDescriptor.c)
 *     IopCreateUmdfDirectory @ 0x140CC2EA4 (IopCreateUmdfDirectory.c)
 *     IopApplySystemPartitionProt @ 0x140CC5004 (IopApplySystemPartitionProt.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     SshpAlpcInitialize @ 0x140CDDA0C (SshpAlpcInitialize.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140CDF5A8 (PspInitializeSystemPartitionPhase0.c)
 *     SepInitSystemDacls @ 0x140CE0608 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140CE3688 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CE3908 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CE3B68 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140CE6910 (WmipInitializeSecurity.c)
 *     ExpKeyedEventInitialization @ 0x140CED750 (ExpKeyedEventInitialization.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  result = 0;
  *(_OWORD *)SecurityDescriptor = 0LL;
  *((_OWORD *)SecurityDescriptor + 1) = 0LL;
  *((_QWORD *)SecurityDescriptor + 4) = 0LL;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
