/*
 * XREFs of PsGetNextProcessThread @ 0x14094ADD0
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1404BFAD8 (PspSynchronizeThreadIsolationDomains.c)
 *     PsMultiResumeProcess @ 0x14052A870 (PsMultiResumeProcess.c)
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 *     PspWaitForUsermodeExit @ 0x1408014C4 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1408029A0 (PsSuspendProcess.c)
 *     DbgkpSetProcessDebugObject @ 0x14091D490 (DbgkpSetProcessDebugObject.c)
 *     DbgkpPostFakeThreadMessages @ 0x140949760 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140949C14 (PspFindFirstThreadByTebValue.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x14094AA84 (PspTerminateAllThreads.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PsEnumProcessThreads @ 0x1409BC840 (PsEnumProcessThreads.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  signed __int64 *v5; // r15
  _QWORD **v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // rdi
  int v10; // r12d
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbx
  _QWORD *v13; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 456);
  v7 = (_QWORD **)(a1 + 880);
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = 0;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 456, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v12, (struct _KTHREAD *)v5);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( a2 )
    v13 = (_QWORD *)a2[175];
  else
    v13 = *v7;
  while ( v13 != v7 )
  {
    v9 = v13 - 175;
    if ( ObReferenceObjectSafeWithTag((__int64)(v13 - 175), 0x6E457350u) )
    {
      v10 = 1;
      break;
    }
    v13 = (_QWORD *)*v13;
  }
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v10 )
    return v9;
  return (_QWORD *)v8;
}
