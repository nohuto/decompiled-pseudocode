/*
 * XREFs of SepCheckCreateAppContainer @ 0x14081B0F4
 * Callers:
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 * Callees:
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1406185E0 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409E4888 (RtlIsParentOfChildAppContainer.c)
 */

__int64 __fastcall SepCheckCreateAppContainer(PSID ChildAppContainerSid)
{
  int IsParentOfChildAppContainer; // ebx
  char v3; // si
  PACCESS_TOKEN ClientToken; // rdi
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
      goto LABEL_8;
    }
  }
  else
  {
    ClientToken = SubjectContext.PrimaryToken;
  }
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
    IsParentOfChildAppContainer = ((*((_DWORD *)ClientToken + 50) >> 14) & 1) == 0;
  else
    IsParentOfChildAppContainer = *((_DWORD *)ClientToken + 50) & 0x2000;
LABEL_8:
  if ( !IsParentOfChildAppContainer && v3 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
    IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*((PSID *)ClientToken + 98), ChildAppContainerSid);
  SeReleaseSubjectContext(&SubjectContext);
  return IsParentOfChildAppContainer == 0 ? 0xC0000022 : 0;
}
