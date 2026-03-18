/*
 * XREFs of HMSDCheck @ 0x1400E3ED0
 * Callers:
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 */

_BOOL8 __fastcall HMSDCheck(__int64 a1, __int64 a2, ACCESS_MASK a3)
{
  __int64 v3; // rsi
  int v5; // ebx
  BOOL v6; // edi
  __int64 UserSessionState; // r14
  __int64 v8; // rax
  __int64 v9; // rax
  DWORD GrantedAccess; // [rsp+50h] [rbp-48h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-40h] BYREF
  int AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (unsigned __int8)a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = a1;
  v6 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  SeCaptureSubjectContext(&SubjectContext);
  v8 = HMValidateHandleNoSecure(v5, v3);
  if ( v8 )
  {
    GrantedAccess = 0;
    AccessStatus = 0;
    v9 = HMPkheFromObjectWorker(v8);
    v6 = SeAccessCheck(
           *(PSECURITY_DESCRIPTOR *)(v9 + 24),
           &SubjectContext,
           0,
           a3,
           0,
           0LL,
           (PGENERIC_MAPPING)(UserSessionState + 16 * (v3 + 2662)),
           1,
           &GrantedAccess,
           &AccessStatus) != 0;
  }
  SeReleaseSubjectContext(&SubjectContext);
  return v6;
}
