/*
 * XREFs of sub_14008B5C8 @ 0x14008B5C8
 * Callers:
 *     sub_1400938AC @ 0x1400938AC (sub_1400938AC.c)
 *     sub_14009D244 @ 0x14009D244 (sub_14009D244.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_14017F1A8 @ 0x14017F1A8 (sub_14017F1A8.c)
 * Callees:
 *     <none>
 */

BOOLEAN sub_14008B5C8()
{
  PACCESS_TOKEN PrimaryToken; // rcx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin;
}
