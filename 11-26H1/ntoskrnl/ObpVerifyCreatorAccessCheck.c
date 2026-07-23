/*
 * XREFs of ObpVerifyCreatorAccessCheck @ 0x140A9A970
 * Callers:
 *     NtDeletePrivateNamespace @ 0x140A9A560 (NtDeletePrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x140A9A600 (NtCreatePrivateNamespace.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1404792E0 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeLockSubjectContext @ 0x1408F4CE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1408F4D40 (SeUnlockSubjectContext.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpVerifyCreatorAccessCheck(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  _DWORD *PrimaryToken; // rbx
  PULONG v4; // rax
  int v5; // ebx
  int v6; // ecx
  PVOID TokenInformation; // [rsp+20h] [rbp-49h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-41h] BYREF
  PVOID P[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v11; // [rsp+58h] [rbp-11h]
  _DWORD Sid[20]; // [rsp+60h] [rbp-9h] BYREF

  memset_0(Sid, 0, 0x44uLL);
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  TokenInformation = 0LL;
  v11 = 0LL;
  *(_OWORD *)P = 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( PrimaryToken[48] == 2 && (int)PrimaryToken[49] < 2 )
    goto LABEL_14;
  SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
  if ( !(_DWORD)TokenInformation
    || (LODWORD(v11) = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, P), (int)v11 >= 0) )
  {
    SeQueryInformationToken(PrimaryToken, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4));
    Sid[0] = 257;
    Sid[1] = 0x10000000;
    v4 = RtlSubAuthoritySid(Sid, 0);
    *v4 = HIDWORD(TokenInformation);
    P[1] = Sid;
    SeLockSubjectContext(&SubjectContext);
    v5 = RtlEnumerateBoundaryDescriptorEntries(a1, (__int64)ObpVerifyAccessToBoundaryEntry, (__int64)&SubjectContext);
    SeUnlockSubjectContext(&SubjectContext);
    v6 = v11;
    if ( (int)v11 >= 0 )
    {
      if ( v5 < 0 )
        v6 = v5;
      LODWORD(v11) = v6;
      if ( v6 >= 0 && P[0] && (v11 & 0x100000000LL) == 0 )
LABEL_14:
        LODWORD(v11) = -1073741790;
    }
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  return (unsigned int)v11;
}
