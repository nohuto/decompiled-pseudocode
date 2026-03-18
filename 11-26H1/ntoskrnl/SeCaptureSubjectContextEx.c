/*
 * XREFs of SeCaptureSubjectContextEx @ 0x140920670
 * Callers:
 *     NtSetInformationFile @ 0x14026A2F0 (NtSetInformationFile.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140317300 (MiLockVirtualMemoryCheckPrivilege.c)
 *     CmQueryLayeredKey @ 0x1404922D0 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1404E7FA4 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     CmQueryKey @ 0x1408C5660 (CmQueryKey.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1408E87A8 (ObpCaptureBoundaryDescriptor.c)
 *     CmpIsSystemEntity @ 0x1408F4110 (CmpIsSystemEntity.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140920364 (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpIsRegEntryAllowed @ 0x14093AFA4 (EtwpIsRegEntryAllowed.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1409FE890 (PspOneDirectionSecurityDomainCombine.c)
 *     PspCombineSecurityDomains @ 0x140A0021C (PspCombineSecurityDomains.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140A967F0 (ObpVerifyCreatorAccessCheck.c)
 *     ExpCheckWakeTimerAccess @ 0x140ABD2E0 (ExpCheckWakeTimerAccess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     VfUtilIsLocalSystem @ 0x140C21924 (VfUtilIsLocalSystem.c)
 * Callees:
 *     PspUnlockThreadSecurityShared @ 0x140271DC0 (PspUnlockThreadSecurityShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
      if ( SubjectContext->PrimaryToken == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
}
