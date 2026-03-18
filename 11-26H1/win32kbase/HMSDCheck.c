/*
 * XREFs of HMSDCheck @ 0x140094EB0
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     _HMPkheFromObjectWorker @ 0x140094FC8 (_HMPkheFromObjectWorker.c)
 */

_BOOL8 __fastcall HMSDCheck(__int64 a1, int a2, ACCESS_MASK a3)
{
  unsigned int v3; // esi
  BOOL v6; // edi
  __int64 UserSessionState; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  DWORD GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  int AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (unsigned __int8)a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v8) = v3;
  v9 = HMValidateHandleNoSecure(a1, v8);
  if ( v9 )
  {
    GrantedAccess = 0;
    AccessStatus = 0;
    v10 = HMPkheFromObjectWorker(v9);
    v6 = SeAccessCheck(
           *(PSECURITY_DESCRIPTOR *)(v10 + 24),
           &SubjectContext,
           0,
           a3,
           0,
           0LL,
           (PGENERIC_MAPPING)(UserSessionState + 16LL * v3 + 42616),
           1,
           &GrantedAccess,
           &AccessStatus) != 0;
  }
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
