/*
 * XREFs of RtlSetDaclSecurityDescriptor @ 0x140A6B0F0
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1404DBCB8 (SepBuildCapeSecurityDescriptor.c)
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
 *     PfpCreateEventInternal @ 0x1407C802C (PfpCreateEventInternal.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D007C (PopCreateHiberFileSecurityDescriptor.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     SepInitializationPhase1 @ 0x140810284 (SepInitializationPhase1.c)
 *     NtSetUuidSeed @ 0x1408411C0 (NtSetUuidSeed.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14085A18C (CmpAdminSystemSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     MiGetPagingFileHandle @ 0x14086B908 (MiGetPagingFileHandle.c)
 *     MiCreateMemoryEventSD @ 0x14087F540 (MiCreateMemoryEventSD.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14089FA48 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     ObpGetSilosRootDirectory @ 0x1408A7480 (ObpGetSilosRootDirectory.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1409FEA80 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IoCreateDevice @ 0x1409FEBC0 (IoCreateDevice.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A95EB0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70 (PspAllocateAndQueryProcessNotificationChannel.c)
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
 *     <none>
 */

NTSTATUS __stdcall RtlSetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN DaclPresent,
        PACL Dacl,
        BOOLEAN DaclDefaulted)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v8; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( v4 >= 0 )
  {
    if ( DaclPresent )
    {
      v5 = v4 | 4;
      *((_QWORD *)SecurityDescriptor + 4) = 0LL;
      if ( Dacl )
        *((_QWORD *)SecurityDescriptor + 4) = Dacl;
      v6 = v5 & 0xFFF7;
      *((_WORD *)SecurityDescriptor + 1) = v6;
      if ( !DaclDefaulted )
        return 0;
      v8 = v6 | 8;
    }
    else
    {
      v8 = v4 & 0xFFFB;
    }
    *((_WORD *)SecurityDescriptor + 1) = v8;
    return 0;
  }
  return -1073741703;
}
