/*
 * XREFs of RtlGetDaclSecurityDescriptor @ 0x1800D61F0
 * Callers:
 *     RtlReplaceSidInSd @ 0x18013D2D0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetDaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN DaclPresent,
        PACL *Dacl,
        PBOOLEAN DaclDefaulted)
{
  __int16 v4; // ax
  __int64 v5; // rax
  ACL *v6; // rax

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 4) == 0 )
  {
    *DaclPresent = 0;
    return 0;
  }
  *DaclPresent = 1;
  v4 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v4 & 4) != 0 )
  {
    if ( v4 >= 0 )
    {
      v6 = (ACL *)*((_QWORD *)SecurityDescriptor + 4);
      goto LABEL_7;
    }
    v5 = *((unsigned int *)SecurityDescriptor + 4);
    if ( (_DWORD)v5 )
    {
      v6 = (ACL *)((char *)SecurityDescriptor + v5);
LABEL_7:
      *Dacl = v6;
      *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
      return 0;
    }
  }
  *Dacl = 0LL;
  *DaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 8) != 0;
  return 0;
}
