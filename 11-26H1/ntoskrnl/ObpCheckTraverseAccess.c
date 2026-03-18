/*
 * XREFs of ObpCheckTraverseAccess @ 0x14093C7C8
 * Callers:
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 * Callees:
 *     SeFastTraverseCheck @ 0x14025EE28 (SeFastTraverseCheck.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     SeLockSubjectContext @ 0x1408EE720 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408EE780 (SeUnlockSubjectContext.c)
 *     ObpGetObjectSecurity @ 0x1408EF250 (ObpGetObjectSecurity.c)
 *     SeAppendPrivileges @ 0x140903960 (SeAppendPrivileges.c)
 *     ObReleaseObjectSecurityEx @ 0x14093C920 (ObReleaseObjectSecurityEx.c)
 */

BOOLEAN __fastcall ObpCheckTraverseAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        char a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // di
  unsigned __int64 v8; // r9
  __int64 v10; // r13
  NTSTATUS ObjectSecurity; // eax
  __int64 v12; // rdx
  BOOLEAN v13; // di
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF

  v18 = a4;
  GrantedAccess = a2;
  AccessMode = a5;
  v8 = *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
  GrantedAccess = 0;
  v18 = 0;
  Privileges = 0LL;
  SecurityDescriptor = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v8];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &v18);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v13 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v13 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(Privileges);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    LOBYTE(v12) = v18;
    ObReleaseObjectSecurityEx(SecurityDescriptor, v12, a1);
    return v13;
  }
}
