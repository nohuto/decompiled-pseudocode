/*
 * XREFs of NtTerminateProcess @ 0x1409566C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeForceResumeThread @ 0x1402C5E5C (KeForceResumeThread.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PsGetProcessCreateTimeQuadPart @ 0x1404807B0 (PsGetProcessCreateTimeQuadPart.c)
 *     PsGetProcessStartKey @ 0x1404838E0 (PsGetProcessStartKey.c)
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PspLogAuditTerminateRemoteProcessEvent @ 0x1409562B4 (PspLogAuditTerminateRemoteProcessEvent.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14095705C (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 */

__int64 __fastcall NtTerminateProcess(ULONG_PTR a1, unsigned int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdi
  char PreviousMode; // r15
  __int64 result; // rax
  struct _KPROCESS *v9; // rbx
  int Flink; // r13d
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  __int64 v17; // r8
  PEPROCESS Process; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 ProcessStartKey; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  Process = 0LL;
  v6 = (__int64)CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 1LL, PsProcessType, PreviousMode, 0x65547350u, &Process, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = Process;
    Flink = (int)Process[1].Header.WaitListHead.Flink;
    ProcessStartKey = PsGetProcessStartKey((__int64)Process);
    Process = (PEPROCESS)PsGetProcessCreateTimeQuadPart(v9);
    --CurrentThread->KernelApcDisable;
    v11 = PspTerminateProcess(v9);
    ObfDereferenceObjectWithTag(v9, 0x65547350u);
    if ( v9 == (struct _KPROCESS *)v6 )
    {
      if ( PreviousMode == 1 || (*(_BYTE *)(v6 + 368) & 1) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 1u);
        KeForceResumeThread((__int64)CurrentThread, v12, v13);
        KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v14);
        PspExitThread(a2);
        __debugbreak();
      }
    }
    else
    {
      PspLogAuditTerminateRemoteProcessEvent(Flink, v11, ProcessStartKey, Process);
    }
  }
  else
  {
    if ( PreviousMode != 1 && (*(_BYTE *)(v6 + 368) & 1) == 0 || (*(_DWORD *)(v6 + 1532) & 1) != 0 )
      return 3221225659LL;
    PspLockProcessExclusive((__int64)CurrentThread->ApcState.Process, (__int64)CurrentThread, a3, a4);
    _m_prefetchw((const void *)(v6 + 500));
    v15 = *(_DWORD *)(v6 + 500);
    do
    {
      v16 = v15;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 500), v15 | 0x40000000, v15);
    }
    while ( v16 != v15 );
    if ( (v15 & 0x40000008) != 0 )
    {
      PspUnlockProcessExclusive(v6, (__int64)CurrentThread);
      LOBYTE(v17) = 1;
      PspTerminateThreadByPointer(CurrentThread, a2, v17);
      return 0LL;
    }
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x40u;
    if ( *(_DWORD *)(v6 + 1364) == 259 )
      *(_DWORD *)(v6 + 1364) = a2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 456), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 456));
    KeAbPostRelease(v6 + 456);
    v11 = PspTerminateAllThreads((PRKPROCESS)v6);
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v12);
  return v11;
}
