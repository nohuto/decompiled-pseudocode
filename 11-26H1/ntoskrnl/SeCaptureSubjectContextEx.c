/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1408FBAB0
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140319330 (MiLockVirtualMemoryCheckPrivilege.c)
 *     CmQueryLayeredKey @ 0x14048BE20 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E1364 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     CmQueryKey @ 0x1408CBC30 (CmQueryKey.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408EED68 (ObpCaptureBoundaryDescriptor.c)
 *     CmpIsSystemEntity @ 0x1408FA6D0 (CmpIsSystemEntity.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14091B690 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x14091CFB8 (PspCombineSecurityDomains.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140923720 (MiIsUserQueryVmCallerTrusted.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A9A970 (ObpVerifyCreatorAccessCheck.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABF740 (ExpCheckWakeTimerAccess.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     VfUtilIsLocalSystem @ 0x140C27934 (VfUtilIsLocalSystem.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *CurrentThread; // r15
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  void *v10; // rsi
  _QWORD *v11; // rax

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Thread[1].WaitBlockList, 0LL, 0LL, v3);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)&Thread[1].WaitBlockList, 0, v9, (PETHREAD)((char *)Thread + 1424));
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v8);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v10 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v10, 0x75536553u);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v10 = 0LL;
      }
      PspUnlockThreadSecurityShared((__int64)Thread, CurrentThread);
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  SubjectContext->ClientToken = v10;
  v11 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u, (__int64)SubjectContext, v3);
  SubjectContext->PrimaryToken = v11;
  if ( SeTokenLeakTracking )
  {
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11[143] + 284LL));
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
}
