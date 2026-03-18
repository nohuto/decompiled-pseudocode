/*
 * XREFs of NtDeleteWnfStateName @ 0x140949660
 * Callers:
 *     DifNtDeleteWnfStateNameWrapper @ 0x140675F90 (DifNtDeleteWnfStateNameWrapper.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeletePermanentStateData @ 0x140847008 (ExpWnfDeletePermanentStateData.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
 *     ExpWnfDeletePermanentName @ 0x140947D84 (ExpWnfDeletePermanentName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140947E0C (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeleteNameInstance @ 0x14094920C (ExpWnfDeleteNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140949F88 (ExpCaptureWnfStateName.c)
 *     ExpWnfResolveScopeInstance @ 0x14094B390 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x14094B9A0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14094C830 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x14094D528 (ExpWnfLookupPermanentName.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDeleteWnfStateName(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r15
  struct _EX_RUNDOWN_REF *v3; // r14
  NTSTATUS v4; // edi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r12
  BOOL v8; // r13d
  _KPROCESS *Process; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  void *Ptr; // rdi
  void *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // rax
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v16; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-88h]
  int v18[2]; // [rsp+68h] [rbp-80h] BYREF
  NTSTATUS v19; // [rsp+74h] [rbp-74h]
  PVOID P; // [rsp+78h] [rbp-70h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-60h] BYREF
  char v23; // [rsp+F8h] [rbp+10h]
  NTSTATUS AccessStatus; // [rsp+100h] [rbp+18h] BYREF
  int v25; // [rsp+108h] [rbp+20h]

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v23 = PreviousMode;
  LOBYTE(AccessStatus) = PreviousMode;
  v25 = 0;
  P = 0LL;
  v3 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v16 = 0LL;
  v4 = ExpCaptureWnfStateName(a1);
  v19 = v4;
  if ( v4 >= 0 )
  {
    v5 = v17;
    v6 = (v17 >> 6) & 0xF;
    v21 = v6;
    v7 = (v17 >> 4) & 3;
    if ( ((v17 >> 4) & 3) == 0 )
    {
      v4 = -1073741811;
      goto LABEL_18;
    }
    v8 = PreviousMode == 0;
    if ( (_DWORD)v7 != 3 )
    {
      if ( PreviousMode )
      {
        v4 = ExpWnfLookupPermanentName(v17, &P);
        if ( v4 < 0 )
          goto LABEL_18;
        v13 = (void *)*((_QWORD *)P + 2);
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        GrantedAccess = 0;
        AccessStatus = 0;
        SeCaptureSubjectContext(&SubjectContext);
        SeAccessCheck(
          v13,
          &SubjectContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &GrantedAccess,
          &AccessStatus);
        SeReleaseSubjectContext(&SubjectContext);
        v4 = AccessStatus;
        if ( AccessStatus < 0 )
          goto LABEL_18;
        v8 = 1;
      }
      v4 = ExpWnfDeletePermanentName(v5);
      if ( v4 < 0 )
        goto LABEL_18;
      v25 = 1;
      LODWORD(v6) = v21;
    }
    if ( PreviousMode )
      Process = KeGetCurrentThread()->ApcState.Process;
    else
      Process = PsInitialSystemProcess;
    v17 = (unsigned __int64)Process;
    if ( (_DWORD)v7 != 3 )
    {
      v4 = 0;
      v14 = ExpWnfEnumerateScopeInstances(v6, 0LL);
      goto LABEL_41;
    }
    v4 = ExpWnfResolveScopeInstance((int)v18, (int)Process, 0, v6, 0LL);
    v3 = *(struct _EX_RUNDOWN_REF **)v18;
    if ( v4 >= 0 )
    {
      while ( v3 )
      {
        v4 = ExpWnfLookupNameInstance(v3, v5, &v16);
        if ( v4 >= 0 )
        {
          if ( !v8 )
          {
            Ptr = v16[9].Ptr;
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            GrantedAccess = 0;
            AccessStatus = 0;
            SeCaptureSubjectContext(&SubjectContext);
            SeAccessCheck(
              Ptr,
              &SubjectContext,
              0,
              0x10000u,
              0,
              0LL,
              (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
              1,
              &GrantedAccess,
              &AccessStatus);
            SeReleaseSubjectContext(&SubjectContext);
            v4 = AccessStatus;
            if ( AccessStatus < 0 )
              goto LABEL_18;
            v8 = 1;
          }
          if ( (_DWORD)v7 == 3 && v16[19].Count != v17 )
          {
            v4 = -1073741790;
            goto LABEL_18;
          }
          ExpWnfNotifyNameSubscribers(v16, 16LL, 1LL, PreviousMode != 0);
          if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v3, v16, 1, v10) )
            v16 = 0LL;
          else
            v4 = -1073741772;
        }
        if ( (_DWORD)v7 == 3 )
          break;
        if ( v16 )
        {
          ExReleaseRundownProtection_0(v16 + 1);
          v16 = 0LL;
        }
        v14 = ExpWnfEnumerateScopeInstances(v21, v3);
        PreviousMode = v23;
LABEL_41:
        v3 = v14;
      }
      if ( (v5 & 0x400) != 0 )
        ExpWnfDeletePermanentStateData(0LL, v5);
    }
  }
LABEL_18:
  if ( v25 )
    v4 = 0;
  if ( v16 )
    ExReleaseRundownProtection_0(v16 + 1);
  if ( v3 )
    ExReleaseRundownProtection_0(v3 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
