/*
 * XREFs of PspCheckJobAccessState @ 0x14077BB78
 * Callers:
 *     PspSetAffinityLimitCallback @ 0x1407FEDA0 (PspSetAffinityLimitCallback.c)
 *     PspValidateJobAffinityState @ 0x140947398 (PspValidateJobAffinityState.c)
 *     PspValidateJobAssignmentProcessLimits @ 0x140AD39F4 (PspValidateJobAssignmentProcessLimits.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     ObpGetObjectSecurity @ 0x1408F5810 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x1409184C0 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall PspCheckJobAccessState(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  PSECURITY_DESCRIPTOR SecurityDescriptor[2]; // [rsp+50h] [rbp-10h] BYREF
  char v9; // [rsp+88h] [rbp+28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+30h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+38h] BYREF

  v2 = *(_DWORD *)(a2 + 496);
  v3 = 0;
  GrantedAccess = 0;
  v9 = 0;
  SecurityDescriptor[0] = 0LL;
  AccessStatus = 0;
  if ( (v2 & 1) != 0 )
    return v3;
  if ( (*(_DWORD *)a1 & 1) != 0 )
    return 0LL;
  result = ObpGetObjectSecurity(a2, SecurityDescriptor, &v9, 0LL);
  AccessStatus = result;
  if ( (int)result >= 0 )
  {
    SeAccessCheck(
      SecurityDescriptor[0],
      (PSECURITY_SUBJECT_CONTEXT)(a1 + 8),
      0,
      0x200u,
      0,
      0LL,
      (PGENERIC_MAPPING)((char *)PsProcessType + 76),
      1,
      &GrantedAccess,
      &AccessStatus);
    LOBYTE(v7) = v9;
    ObReleaseObjectSecurityEx(SecurityDescriptor[0], v7, a2);
    return (unsigned int)AccessStatus;
  }
  return result;
}
