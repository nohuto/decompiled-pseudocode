/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x1408EED68
 * Callers:
 *     NtCreatePrivateNamespace @ 0x140A9A600 (NtCreatePrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x140ADB620 (NtOpenPrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140480CA0 (RtlLengthSid.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     ObpCheckDuplicateEntries @ 0x1408EF1CC (ObpCheckDuplicateEntries.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x1408EFEA8 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1408FBAB0 (SeCaptureSubjectContextEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(_OWORD *Src, __int64 *a2)
{
  char PreviousMode; // r12
  __int64 Pool2; // rsi
  char v6; // r13
  __int64 v7; // r14
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rbx
  unsigned __int64 v10; // r14
  void *v11; // rcx
  NTSTATUS InformationToken; // ebx
  int v13; // edx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // eax
  PVOID TokenInformation; // [rsp+30h] [rbp-88h] BYREF
  PVOID P[4]; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-60h] BYREF
  SIZE_T Length[2]; // [rsp+78h] [rbp-40h] BYREF

  P[3] = a2;
  *(_OWORD *)Length = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a2 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    RtlCopyFromUser(Length, Src, 0x10uLL);
    if ( (unsigned int)(LODWORD(Length[1]) - 16) > 0x7FEF )
      return 3221225485LL;
    ProbeForRead(Src, LODWORD(Length[1]), 4u);
  }
  else
  {
    *(_OWORD *)Length = *Src;
  }
  Pool2 = 0LL;
  TokenInformation = 0LL;
  v6 = 0;
  v7 = LODWORD(Length[1]);
  P[0] = 0LL;
  if ( (Length[1] & 0x100000000LL) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      InformationToken = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, P);
      if ( InformationToken < 0 )
        goto LABEL_17;
      HIDWORD(TokenInformation) = RtlLengthSid(*(PSID *)P[0]);
      v7 += ((HIDWORD(TokenInformation) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
  }
  v10 = v7 + 48;
  if ( v10 > 0xFFFFFFFF )
  {
    InformationToken = -1073741675;
    goto LABEL_17;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  P[2] = (PVOID)Pool2;
  if ( !Pool2 )
  {
    InformationToken = -1073741670;
    goto LABEL_17;
  }
  *(_QWORD *)(Pool2 + 24) = (unsigned int)v10 - 48LL;
  v11 = (void *)(Pool2 + 48);
  if ( PreviousMode )
    RtlCopyFromUser(v11, Src, LODWORD(Length[1]));
  else
    RtlCopyVolatileMemory(v11, Src, LODWORD(Length[1]));
  if ( P[0] )
  {
    v14 = (_DWORD *)(Pool2 + 48 + LODWORD(Length[1]));
    if ( v14 != (_DWORD *)(((unsigned __int64)v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_26:
      InformationToken = -1073741811;
      goto LABEL_17;
    }
    *v14 = 2;
    v15 = HIDWORD(TokenInformation);
    v16 = ((HIDWORD(TokenInformation) + 7) & 0xFFFFFFF8) + 8;
    v14[1] = v16;
    LODWORD(Length[1]) += v16;
    ++HIDWORD(Length[0]);
    memmove(v14 + 2, *(const void **)P[0], v15);
  }
  *(_DWORD *)(Pool2 + 56) = Length[1];
  *(_DWORD *)(Pool2 + 52) = HIDWORD(Length[0]);
  InformationToken = RtlEnumerateBoundaryDescriptorEntries(Pool2 + 48, 0LL, 0LL);
  if ( InformationToken >= 0 && !(unsigned int)ObpCheckDuplicateEntries(Pool2) )
    goto LABEL_26;
  *(_BYTE *)(Pool2 + 40) = 0;
  RtlEnumerateBoundaryDescriptorEntries(Pool2 + 48, ObpHashBoundaryFunction, Pool2);
  v13 = (3134165325u * (unsigned __int64)*(unsigned __int8 *)(Pool2 + 40)) >> 32;
  *(_BYTE *)(Pool2 + 40) -= 37 * ((v13 + (((unsigned int)*(unsigned __int8 *)(Pool2 + 40) - v13) >> 1)) >> 5);
LABEL_17:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( InformationToken < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag((PVOID)Pool2, 0x534E624Fu);
  }
  else
  {
    *a2 = Pool2;
  }
  return (unsigned int)InformationToken;
}
