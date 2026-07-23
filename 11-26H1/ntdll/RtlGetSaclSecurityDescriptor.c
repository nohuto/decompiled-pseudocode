/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x1800D9A60
 * Callers:
 *     RtlReplaceSidInSd @ 0x18013D2D0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  __int16 v4; // ax
  __int64 v5; // rax
  ACL *v6; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) == 0 )
  {
    *SaclPresent = 0;
    return 0;
  }
  *SaclPresent = 1;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v4 & 0x10) != 0 )
  {
    if ( v4 >= 0 )
    {
      v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      goto LABEL_7;
    }
    v5 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v5 )
    {
      v6 = (ACL *)((char *)SecurityDescriptor + v5);
LABEL_7:
      *Sacl = v6;
      *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
      return 0;
    }
  }
  *Sacl = 0LL;
  *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  return 0;
}
