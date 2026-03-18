/*
 * XREFs of RtlGetAce @ 0x140433010
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     ObpGetDosDevicesProtection @ 0x1407C2CCC (ObpGetDosDevicesProtection.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407D007C (PopCreateHiberFileSecurityDescriptor.c)
 *     LocalGetAclForString @ 0x1409243B0 (LocalGetAclForString.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140927020 (SepAppendAceToTokenObjectAcl.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A95EB0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140B4E1EC (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x140D0936C (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG i; // edx
  ACL *v6; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u || AceIndex >= Acl->AceCount )
    return -1073741811;
  v4 = Acl + 1;
  for ( i = 0; ; ++i )
  {
    *Ace = v4;
    v6 = (PACL)((char *)Acl + Acl->AclSize);
    if ( i >= AceIndex )
      break;
    if ( v4 >= v6 )
      return -1073741811;
    v4 = (PACL)((char *)v4 + v4->AclSize);
  }
  if ( v4 >= v6 )
    return -1073741811;
  else
    return 0;
}
