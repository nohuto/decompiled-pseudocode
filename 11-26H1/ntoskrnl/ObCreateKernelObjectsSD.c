/*
 * XREFs of ObCreateKernelObjectsSD @ 0x1407C219C
 * Callers:
 *     ObpInitializeRootNamespace @ 0x1407C2F9C (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x14087F724 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x1404872D0 (RtlLengthSid.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateKernelObjectsSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS Acl; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *Pool2; // rax
  ACL *v7; // rdi

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(RtlpBootStatHandleLock.StateSaveArea);
    v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
    v5 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags) + 44 + v4;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v5, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 131075, RtlpBootStatHandleLock.StateSaveArea, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 983055, SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 983055, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0),
            Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
