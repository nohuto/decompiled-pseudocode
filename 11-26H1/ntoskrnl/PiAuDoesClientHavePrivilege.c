/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x14094DA38
 * Callers:
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14041BFB0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

char __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  char v1; // bl
  char PreviousMode; // di
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-48h] BYREF
  int v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+5Ch] [rbp-24h]
  __int64 v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  v1 = 1;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = a1;
  v6 = 1;
  v7 = 1;
  v9 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( PreviousMode )
  {
    ClientToken = SubjectContext.ClientToken;
    if ( SubjectContext.ClientToken )
    {
      if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
      {
        v1 = 0;
        goto LABEL_5;
      }
    }
    else
    {
      ClientToken = SubjectContext.PrimaryToken;
    }
    v1 = SepPrivilegeCheck((__int64)ClientToken, (__int64)&v8, 1u, 1, PreviousMode);
  }
LABEL_5:
  SeReleaseSubjectContext(&SubjectContext);
  return v1;
}
