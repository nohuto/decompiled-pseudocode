/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1409A9150
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140493B40 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404C97D0 (RtlCheckTokenCapability.c)
 *     PiAuCheckTokenMembership @ 0x1407AAEC0 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407AB078 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407AB2C0 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x14084831C (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140861014 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140861458 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1408A3318 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1408A5F2C (DrvDbGetSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409A72B0 (BiCreateKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CCB8D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CCBA74 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CCC254 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CDEAB4 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepInitSystemDacls @ 0x140CE0608 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140CE3688 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CE3908 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CE3B68 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140CE6910 (WmipInitializeSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlSetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID Owner,
        BOOLEAN OwnerDefaulted)
{
  __int16 v3; // ax
  __int16 v4; // ax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v3 = *((_WORD *)SecurityDescriptor + 1);
  if ( v3 < 0 )
    return -1073741703;
  *((_QWORD *)SecurityDescriptor + 1) = 0LL;
  if ( Owner )
    *((_QWORD *)SecurityDescriptor + 1) = Owner;
  v4 = v3 & 0xFFFE;
  *((_WORD *)SecurityDescriptor + 1) = v4;
  if ( OwnerDefaulted )
    *((_WORD *)SecurityDescriptor + 1) = v4 | 1;
  return 0;
}
