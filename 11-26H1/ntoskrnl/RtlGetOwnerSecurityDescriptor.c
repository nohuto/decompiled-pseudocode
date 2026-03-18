/*
 * XREFs of RtlGetOwnerSecurityDescriptor @ 0x140A95B60
 * Callers:
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     RtlReplaceSidInSd @ 0x140804260 (RtlReplaceSidInSd.c)
 *     CmpCopySaclToVirtualKey @ 0x14085AD20 (CmpCopySaclToVirtualKey.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A74998 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A95EB0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetOwnerSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID *Owner,
        PBOOLEAN OwnerDefaulted)
{
  char *v4; // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 1);
  }
  else
  {
    v5 = *((unsigned int *)SecurityDescriptor + 1);
    if ( (_DWORD)v5 )
      v4 = (char *)SecurityDescriptor + v5;
  }
  *Owner = v4;
  *OwnerDefaulted = *((_BYTE *)SecurityDescriptor + 2) & 1;
  return 0;
}
