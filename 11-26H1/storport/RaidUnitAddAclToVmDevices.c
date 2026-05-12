/*
 * XREFs of RaidUnitAddAclToVmDevices @ 0x14018F4D4
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1400A8BDC (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 */

NTSTATUS __fastcall RaidUnitAddAclToVmDevices(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  NTSTATUS Acl; // ebx
  PSID SeLocalSystemSid; // rbx
  ULONG v6; // edi
  ULONG v7; // ebx
  struct _ACL *Pool; // rax
  struct _ACL *v9; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+60h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Handle = 0LL;
  v2 = *(void **)(a1 + 8);
  v11 = 0LL;
  result = ObOpenObjectByPointer(v2, 0x200u, 0LL, 0x40000u, 0LL, 0, &Handle);
  if ( result >= 0 )
  {
    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( Acl >= 0 )
    {
      SeLocalSystemSid = SeExports->SeLocalSystemSid;
      v6 = RtlLengthSid(SeExports->SeAliasAdminsSid);
      v7 = v6 + RtlLengthSid(SeLocalSystemSid) + 32;
      Pool = (struct _ACL *)RaidAllocatePool(256LL, v7, 1818452292LL, *(_QWORD *)(a1 + 8));
      v9 = Pool;
      if ( Pool )
      {
        Acl = RtlCreateAcl(Pool, v7, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v9, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v9, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
              if ( Acl >= 0 )
                Acl = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
            }
          }
        }
        ExFreePoolWithTag(v9, 0x6C636144u);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ZwClose(Handle);
    return Acl;
  }
  return result;
}
