/*
 * XREFs of MiCreateMemoryEventSD @ 0x140885940
 * Callers:
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateMemoryEventSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  int CurrentProcessorColor; // eax
  ACL *PoolMm; // rax
  ACL *v10; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink);
    v4 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.SystemCallNumber) + v3;
    v5 = RtlLengthSid(*(PSID *)&RtlpBootStatHandleLock.WaitRegister.Flags) + v4;
    v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
    v7 = v6 + RtlLengthSid(*(PSID *)((char *)&RtlpBootStatHandleLock.116 + 4)) + 68;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (ACL *)ExAllocatePoolMm(256LL, v7, 1818452292, CurrentProcessorColor | 0x80000000);
    v10 = PoolMm;
    if ( PoolMm )
    {
      Acl = RtlCreateAcl(PoolMm, v7, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((int)v10, 2, 0, 1179649, *(void **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0),
            Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v10, 2, 0, 2031619, SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v10, 2, 0, 2031619, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0),
            Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v10, 2, 0, 1179649, *(void **)&RtlpBootStatHandleLock.SystemCallNumber, 0),
            Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v10, 2, 0, 1179649, RtlpBootStatHandleLock.WaitBlock[0].WaitListEntry.Flink, 0),
            Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        return 0;
      }
    }
  }
  return (unsigned int)Acl;
}
