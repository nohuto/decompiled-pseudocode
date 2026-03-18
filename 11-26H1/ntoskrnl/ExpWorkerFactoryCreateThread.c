/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x1402C303C
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x1402C2B40 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     ZwSetInformationThread @ 0x140723590 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x140723E30 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140A9010C (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v4; // edi
  int v5; // esi
  int UserThread; // eax
  unsigned int v7; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF

  v1 = *(_DWORD *)(a1 + 408);
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v4 = v1 & 0x800;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v7 = 128;
    goto LABEL_12;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v7 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 392);
    v5 = *(_DWORD *)(a1 + 408);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UserThread = RtlpCreateUserThreadEx(
                   *(_QWORD *)(a1 + 40),
                   0,
                   v4 != 0 ? 17 : 1,
                   0,
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 416) = UserThread;
    v7 = UserThread;
    if ( UserThread >= 0 )
    {
      if ( (v5 & 0x8000) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
        *(_DWORD *)(a1 + 408) |= 0x8000u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      if ( *(_DWORD *)(a1 + 412) )
        ZwSetInformationThread(0LL, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
      if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
        ZwSetInformationThread(
          0LL,
          ThreadSuspendCount|ThreadAffinityMask,
          (PVOID)(a1 + 120),
          8 * (unsigned __int16)KiActiveGroups);
      v7 = ZwResumeThread(0LL, 0LL);
      ObCloseHandle(0LL, 0);
      goto LABEL_11;
    }
    KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
    --*(_DWORD *)(a1 + 392);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_11:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104));
LABEL_12:
  KeLeaveCriticalRegion();
  return v7;
}
