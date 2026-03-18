/*
 * XREFs of DrvDbGetRegistrarSecurityDescriptor @ 0x14089FA48
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x14091D580 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x14091DC40 (DrvDbAcquireDatabaseNodeBaseKey.c)
 * Callees:
 *     RtlSetControlSecurityDescriptor @ 0x1408045B0 (RtlSetControlSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1409228D0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A61650 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void *DrvDbGetRegistrarSecurityDescriptor()
{
  __int64 v0; // rbx
  void *Pool2; // rax
  void *v2; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-10h]
  ULONG BufferLength; // [rsp+60h] [rbp+10h] BYREF
  ACL Acl; // [rsp+68h] [rbp+18h] BYREF

  v0 = 0LL;
  Acl = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v5 = 0LL;
  if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
    && RtlCreateAcl(&Acl, 8u, 2u) >= 0
    && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0
    && (int)RtlSetControlSecurityDescriptor((__int64)SecurityDescriptor, 0x1000u, 0x1000u) >= 0 )
  {
    BufferLength = RtlLengthSecurityDescriptor(SecurityDescriptor);
    if ( BufferLength >= 0x28 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v2 = Pool2;
      if ( Pool2 )
      {
        if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength) < 0 )
          ExFreePoolWithTag(v2, 0);
        else
          return v2;
      }
    }
  }
  return (void *)v0;
}
