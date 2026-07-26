/*
 * XREFs of ?ndisCreateGenericSD@@YAJPEAU_ACL@@PEAD@Z @ 0x1401904D4
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCreateGenericSD(PACL Dacl, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax

  if ( !Dacl )
    return 3221225473LL;
  v5 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeAliasAdminsSid, 0);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeAliasAdminsSid, 0);
        v6 = v9;
        if ( v9 < 0 )
          DbgPrint("RtlSetGroupSecurityDescriptor failed, Status %lx.\n", (unsigned int)v9);
      }
      else
      {
        DbgPrint("RtlSetOwnerSecurityDescriptor failed, Status %lx.\n", (unsigned int)v8);
      }
    }
    else
    {
      DbgPrint("RtlSetDaclSecurityDescriptor failed, Status %lx.\n", (unsigned int)v7);
    }
  }
  else
  {
    DbgPrint("RtlCreateSecurityDescriptor failed, Status %lx.\n", (unsigned int)v5);
  }
  return v6;
}
