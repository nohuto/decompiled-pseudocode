/*
 * XREFs of PspSetQuotaLimits @ 0x1407F6AFC
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14090E4F0 (SePrivilegedServiceAuditAlarm.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PspSinglePrivCheck @ 0x140A51D78 (PspSinglePrivCheck.c)
 *     PspAssignProcessQuotaBlock @ 0x140ABA378 (PspAssignProcessQuotaBlock.c)
 *     MmEnforceWorkingSetLimit @ 0x140B023A4 (MmEnforceWorkingSetLimit.c)
 */

__int64 __fastcall PspSetQuotaLimits(ULONG_PTR BugCheckParameter1, void *Src, int a3, KPROCESSOR_MODE a4)
{
  unsigned int v8; // r12d
  char v9; // r14
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // r13
  PVOID v14; // rsi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  int v17; // edi
  ULONG_PTR v18; // rbx
  char v19; // r12
  char v20; // r14
  __int64 v21; // r15
  struct _KLOCK_ENTRIES *v22; // r9
  AutoBoost *v23; // rax
  void *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  AutoBoost *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // r9
  char v32; // [rsp+40h] [rbp-128h]
  char v33; // [rsp+41h] [rbp-127h] BYREF
  char v34; // [rsp+42h] [rbp-126h]
  char v35; // [rsp+44h] [rbp-124h]
  char v36; // [rsp+46h] [rbp-122h]
  int v37; // [rsp+48h] [rbp-120h]
  PVOID Object[2]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v39[16]; // [rsp+60h] [rbp-108h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-F8h]
  __int64 v41; // [rsp+78h] [rbp-F0h]
  __int128 v42; // [rsp+90h] [rbp-D8h]
  __int128 v43; // [rsp+A0h] [rbp-C8h]
  __int64 v44; // [rsp+B0h] [rbp-B8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v47; // [rsp+F0h] [rbp-78h]
  _OWORD v48[3]; // [rsp+F8h] [rbp-70h] BYREF

  v8 = 0;
  Object[0] = 0LL;
  memset_0(v39, 0, 0x58uLL);
  memset(v48, 0, sizeof(v48));
  v33 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v46 = 0LL;
  v47 = 0LL;
  if ( a3 == 48 )
  {
    if ( a4 )
      RtlCopyFromUser(v39, Src, 0x30uLL);
    else
      RtlCopyVolatileMemory(v39, Src, 0x30uLL);
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v9 = 1;
    v36 = 1;
  }
  else
  {
    if ( a3 != 88 )
      return 3221225476LL;
    v9 = 0;
    v36 = 0;
    if ( a4 )
      RtlCopyFromUser(v39, Src, 0x58uLL);
    else
      RtlCopyVolatileMemory(v39, Src, 0x58uLL);
  }
  if ( (v44 & 0xFFFFFFE0) != 0 || (v44 & 3) == 3 || (v44 & 0xC) == 0xC )
    return 3221225485LL;
  if ( (v44 & 1) != 0 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 0;
    if ( (v44 & 2) != 0 )
      v10 = 8;
  }
  if ( (v44 & 4) != 0 )
  {
    v10 |= 1u;
  }
  else if ( (v44 & 8) != 0 )
  {
    v10 |= 2u;
  }
  if ( *((_QWORD *)&v42 + 1) | (unsigned __int64)v43 | *((_QWORD *)&v43 + 1) | HIDWORD(v44) )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)Object, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  v14 = Object[0];
  if ( *((__int64 **)Object[0] + 95) != &PspSystemQuotaBlock || v40 && v41 )
  {
    if ( v40 && v41 )
    {
      if ( v40 == -1LL && v41 == -1 )
      {
        v32 = 1;
        LOBYTE(v37) = 0;
        v34 = 0;
      }
      else
      {
        v32 = 0;
        LOBYTE(v12) = a4;
        v37 = PspSinglePrivCheck(v41, -1LL, v12, &SubjectContext);
        v34 = 1;
      }
      v19 = 0;
      do
      {
        v20 = 0;
        v35 = 0;
        KiStackAttachProcess((_KPROCESS *)v14, 0, (__int64)v48);
        --CurrentThread->SpecialApcDisable;
        v21 = *((_QWORD *)v14 + 84);
        if ( v21 )
        {
          ExAcquireFastResourceExclusive((struct _KTHREAD *)(v21 + 56), 0LL, 1);
          if ( (*(_DWORD *)(v21 + 1056) & 1) != 0 )
          {
            v10 = 1;
            LOBYTE(v37) = 1;
            v35 = 1;
            if ( !v32 )
            {
              v40 = *(_QWORD *)(v21 + 1000);
              v41 = *(_QWORD *)(v21 + 1008);
            }
          }
          v23 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140FC11F0, 0LL, 0LL, v22);
          v27 = v23;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140FC11F0, 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140FC11F0, v23, (__int64)&stru_140FC11F0);
          if ( v27 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v27, v24);
            else
              *((_BYTE *)v27 + 10) = 1;
          }
          ExReleaseFastResourceExclusive(v21 + 56, 0LL, v25, v26);
          v20 = v35;
        }
        LODWORD(Object[0]) = MmAdjustWorkingSetSizeEx(v40, v41, 0LL, v37, v10, &v33);
        if ( SLODWORD(Object[0]) < 0 && v20 == 1 )
          MmEnforceWorkingSetLimit(v14, v10);
        if ( v21 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140FC11F0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&stru_140FC11F0.Header.Lock);
          KeAbPostRelease((unsigned __int64)&stru_140FC11F0);
        }
        v30 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v30
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v29, v28);
        }
        KiUnstackDetachProcess((__int64)v48, 0);
        if ( v33 == 1 && !v20 )
          v19 = 1;
      }
      while ( *((_QWORD *)v14 + 84) != v21 );
      if ( v34 == 1 && BYTE4(v47) )
      {
        if ( v19 == 1 )
        {
          LOBYTE(v31) = BYTE5(v47);
          SePrivilegedServiceAuditAlarm(L"$&", &SubjectContext, &v46, v31);
        }
        SeReleaseSubjectContext(&SubjectContext);
      }
      v8 = (unsigned int)Object[0];
    }
  }
  else
  {
    if ( v9 == 1 )
    {
      memset_0(v39, 0, 0x58uLL);
      LODWORD(v44) = 16;
    }
    if ( !SeSinglePrivilegeCheck((LUID)PspSiloMonitorLock.QuantumTarget, a4) )
    {
      v17 = -1073741727;
LABEL_31:
      ObfDereferenceObjectWithTag(v14, 0x79517350u);
      return (unsigned int)v17;
    }
    v18 = PsReferencePrimaryTokenWithTag((__int64)v14, 0x746C6644u, v15, v16);
    v17 = PspAssignProcessQuotaBlock(v39, v14, v18);
    ObFastDereferenceObject((signed __int64 *)v14 + 73, v18, 0x746C6644u);
    if ( v17 < 0 )
      goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v14, 0x79517350u);
  return v8;
}
