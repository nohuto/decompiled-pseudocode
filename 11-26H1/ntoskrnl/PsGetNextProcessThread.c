/*
 * XREFs of PsGetNextProcessThread @ 0x1409573A0
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x1404C6128 (PspSynchronizeThreadIsolationDomains.c)
 *     PsMultiResumeProcess @ 0x140528200 (PsMultiResumeProcess.c)
 *     KeEtwRundown @ 0x1405E48E8 (KeEtwRundown.c)
 *     KiTraceSchedulingGroupRundown @ 0x1405F92A0 (KiTraceSchedulingGroupRundown.c)
 *     PspWaitForUsermodeExit @ 0x1407FBA94 (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1407FCF70 (PsSuspendProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1409556F0 (DbgkpPostFakeThreadMessages.c)
 *     PspFindFirstThreadByTebValue @ 0x140955E54 (PspFindFirstThreadByTebValue.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x140956BB4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     PspTerminateAllThreads @ 0x14095705C (PspTerminateAllThreads.c)
 *     PsEnumProcessThreads @ 0x14096F1F0 (PsEnumProcessThreads.c)
 *     DbgkpSetProcessDebugObject @ 0x140985C5C (DbgkpSetProcessDebugObject.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8

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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v14, v15);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v10 )
    return v9;
  return (_QWORD *)v8;
}
