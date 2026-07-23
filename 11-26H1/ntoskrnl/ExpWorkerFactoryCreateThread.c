/*
 * XREFs of ExpWorkerFactoryCreateThread @ 0x14030DCFC
 * Callers:
 *     ExpWorkerFactoryCheckCreate @ 0x14030D800 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ZwSetInformationThread @ 0x140728160 (ZwSetInformationThread.c)
 *     ZwResumeThread @ 0x140728A00 (ZwResumeThread.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     RtlpCreateUserThreadEx @ 0x140A94C5C (RtlpCreateUserThreadEx.c)
 */

__int64 __fastcall ExpWorkerFactoryCreateThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  int UserThread; // eax
  unsigned int v5; // edi
  HANDLE v6; // rsi
  int v8; // [rsp+30h] [rbp-19h]
  __int64 v9[2]; // [rsp+60h] [rbp+17h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+67h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  ThreadHandle = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_OWORD *)v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 104)) )
  {
    v5 = 128;
    goto LABEL_12;
  }
  KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 33LL) )
  {
    v5 = 128;
  }
  else
  {
    ++*(_DWORD *)(a1 + 392);
    v3 = *(_DWORD *)(a1 + 408);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    UserThread = RtlpCreateUserThreadEx(
                   *(HANDLE *)(a1 + 40),
                   *(_QWORD *)(a1 + 56),
                   *(_QWORD *)(a1 + 64),
                   v8,
                   *(PUSER_THREAD_START_ROUTINE *)(a1 + 24),
                   *(PVOID *)(a1 + 32),
                   (__int64)&ThreadHandle,
                   (__int64)v9);
    *(_DWORD *)(a1 + 416) = UserThread;
    v5 = UserThread;
    if ( UserThread >= 0 )
    {
      if ( (v3 & 0x8000) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(*(PKSPIN_LOCK *)(a1 + 16), &LockHandle);
        *(_DWORD *)(a1 + 408) |= 0x8000u;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      v6 = ThreadHandle;
      if ( *(_DWORD *)(a1 + 412) )
        ZwSetInformationThread(ThreadHandle, ThreadBasePriority, (PVOID)(a1 + 412), 4u);
      if ( (*(_DWORD *)(a1 + 408) & 0x4000) != 0 )
        ZwSetInformationThread(v6, ThreadSelectedCpuSets, (PVOID)(a1 + 120), 8 * (unsigned __int16)KiActiveGroups);
      v5 = ZwResumeThread(v6, 0LL);
      ObCloseHandle(v6, 0);
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
  return v5;
}
