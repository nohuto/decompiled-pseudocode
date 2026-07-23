/*
 * XREFs of ExpCheckWakeTimerAccess @ 0x140ABF740
 * Callers:
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     ExpCheckIRTimerAccess @ 0x140ABF674 (ExpCheckIRTimerAccess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall ExpCheckWakeTimerAccess(char a1)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  __int64 v3; // [rsp+90h] [rbp+8h] BYREF
  __int64 v4; // [rsp+98h] [rbp+10h] BYREF

  LODWORD(v4) = 0;
  LODWORD(v3) = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !a1 )
    return 3221225506LL;
  SeCaptureSubjectContextEx(0LL, KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (__int64)&ExpWakeTimerSecurityDescriptor,
    7,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    (_DWORD *)(ExTimerObjectType + 76),
    1,
    (unsigned int *)&v4,
    (int *)&v3);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)v3;
}
