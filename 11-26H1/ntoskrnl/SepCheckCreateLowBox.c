/*
 * XREFs of SepCheckCreateLowBox @ 0x140B095C4
 * Callers:
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 * Callees:
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     RtlIsParentOfChildAppContainer @ 0x140A8F93C (RtlIsParentOfChildAppContainer.c)
 */

__int64 __fastcall SepCheckCreateLowBox(char *a1)
{
  int IsParentOfChildAppContainer; // ebx
  char v3; // di
  PACCESS_TOKEN ClientToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  IsParentOfChildAppContainer = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v3 = 1;
  SeCaptureSubjectContext(&SubjectContext);
  ClientToken = SubjectContext.ClientToken;
  if ( SubjectContext.ClientToken )
  {
    if ( SubjectContext.ImpersonationLevel < SecurityImpersonation )
    {
      v3 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  IsParentOfChildAppContainer = *((_DWORD *)ClientToken + 50) & 0x2000;
LABEL_4:
  if ( !IsParentOfChildAppContainer && v3 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
    IsParentOfChildAppContainer = (unsigned __int8)RtlIsParentOfChildAppContainer(*((char **)ClientToken + 98), a1);
  SeReleaseSubjectContext(&SubjectContext);
  return IsParentOfChildAppContainer == 0 ? 0xC0000022 : 0;
}
