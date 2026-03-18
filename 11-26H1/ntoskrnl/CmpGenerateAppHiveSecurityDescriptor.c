/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x14085B164
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeQueryInformationToken @ 0x1408F4300 (SeQueryInformationToken.c)
 *     RtlAddMandatoryAce @ 0x140926CB0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409D8260 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140A61650 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A8F1C0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140AABBB0 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void *__fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi
  void *v3; // rbx
  __int64 v4; // rdx
  void *Pool2; // rax
  int Src; // [rsp+20h] [rbp-E0h]
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+68h] [rbp-98h]
  ACL v13; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset_0(&Acl, 0, 0xECuLL);
  v12 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset_0(&v13, 0, 0x54uLL);
  v2 = 0LL;
  P = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( SeQueryInformationToken(v1, TokenOwner, &TokenInformation) >= 0
    && SeQueryInformationToken(v1, TokenPrimaryGroup, &P) >= 0 )
  {
    v3 = *(void **)P;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *(PSID *)TokenInformation, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v3, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, RtlpBootStatHandleLock.StateSaveArea, 0);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, *(void **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, SeRestrictedSid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    RtlCreateAcl(&v13, 0x54u, 2u);
    LOBYTE(Src) = 17;
    RtlAddMandatoryAce(&v13, 2LL, 0LL, *(_QWORD *)&SepRmCapTableLock.ResourceIndex, Src, 1);
    LOBYTE(v4) = 1;
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, v4, &v13, 0LL);
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v2 = Pool2;
    if ( Pool2 )
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v2;
}
