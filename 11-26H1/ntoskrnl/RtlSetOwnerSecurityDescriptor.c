/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1409D8260
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140499FF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1404CFDA0 (RtlCheckTokenCapability.c)
 *     PiAuCheckTokenMembership @ 0x1407A8310 (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x1407A84C8 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x1407A8710 (PiAuGetStateDirectorySecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x14080620C (RtlpSysVolTakeOwnership.c)
 *     CMFCreateSecurityDescriptor @ 0x140842E8C (CMFCreateSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14089CF18 (_PnpGetEnumSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x14089FB2C (DrvDbGetSecurityDescriptor.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409D63C0 (BiCreateKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A95EB0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140CC57F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140CC5994 (PiAuCreateStandardSecurityObject.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140CC6174 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     PspInitializeCpuPartitionsDefaultSd @ 0x140CD8734 (PspInitializeCpuPartitionsDefaultSd.c)
 *     SepInitSystemDacls @ 0x140CDA288 (SepInitSystemDacls.c)
 *     SeMakeAnonymousLogonToken @ 0x140CDD2F0 (SeMakeAnonymousLogonToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140CDD570 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeSystemToken @ 0x140CDD7D0 (SeMakeSystemToken.c)
 *     WmipInitializeSecurity @ 0x140CE0570 (WmipInitializeSecurity.c)
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
