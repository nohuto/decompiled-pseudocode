/*
 * XREFs of RtlSetOwnerSecurityDescriptor @ 0x1800C64C0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C56D8 (RtlpSysVolTakeOwnership.c)
 *     RtlCreateAndSetSD @ 0x1800C5F30 (RtlCreateAndSetSD.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetOwnerSecurityDescriptor(
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
