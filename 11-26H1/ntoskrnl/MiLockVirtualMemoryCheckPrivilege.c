/*
 * XREFs of MiLockVirtualMemoryCheckPrivilege @ 0x140319330
 * Callers:
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     SePrivilegeCheck @ 0x140A51E20 (SePrivilegeCheck.c)
 */

void __fastcall MiLockVirtualMemoryCheckPrivilege(__int64 a1, KPROCESSOR_MODE a2, struct _KTHREAD *a3)
{
  struct _KPROCESS *Process; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+40h] [rbp-28h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  Process = a3->ApcState.Process;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  RequiredPrivileges.Privilege[0].Luid = SeLockMemoryPrivilege;
  SeCaptureSubjectContextEx(a3, Process, &SubjectContext);
  if ( SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a2) )
    *(_DWORD *)(a1 + 4) |= 0x20u;
  SeReleaseSubjectContext(&SubjectContext);
}
