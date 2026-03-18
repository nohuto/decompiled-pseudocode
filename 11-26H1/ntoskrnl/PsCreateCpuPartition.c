/*
 * XREFs of PsCreateCpuPartition @ 0x1407F2660
 * Callers:
 *     NtCreateCpuPartition @ 0x1407F18E0 (NtCreateCpuPartition.c)
 *     PsInitializeBootCpuPartitions @ 0x140CD7AC4 (PsInitializeBootCpuPartitions.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140CD8990 (PspInitializeCpuPartitionsPhase0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     KeCreateCpuPartition @ 0x1405F3BD4 (KeCreateCpuPartition.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F2950 (PspCheckCpuPartitionCreateAccess.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 */

__int64 __fastcall PsCreateCpuPartition(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        int a5,
        PVOID Object,
        PVOID *a7,
        HANDLE *a8)
{
  int v11; // r14d
  int CpuPartition; // esi
  int v13; // ecx
  int v14; // r9d
  __int64 *v15; // rdi
  struct _KLOCK_ENTRIES *v16; // r9
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v18; // rax
  void *v19; // rdx
  AutoBoost *v20; // rbp
  void *volatile ***v21; // rcx
  void *volatile **v22; // rax
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int64 *v25; // [rsp+58h] [rbp-20h]

  v25 = 0LL;
  Handle = 0LL;
  v11 = a1;
  if ( (a5 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a1) = a3;
    CpuPartition = PspCheckCpuPartitionCreateAccess(a1);
    if ( CpuPartition >= 0 )
    {
      LOBYTE(v14) = a3;
      LOBYTE(v13) = a3;
      v15 = v25;
      CpuPartition = ObCreateObjectEx(v13, (_DWORD)PsCpuPartitionType, v11, v14);
      if ( CpuPartition >= 0 )
      {
        CpuPartition = KeCreateCpuPartition(v25, a5 & 1);
        if ( CpuPartition >= 0 )
        {
          v25[2] = a4;
          if ( a7 != &PspSystemCpuPartition )
          {
            ObfReferenceObjectWithTag(Object, 0x50707350u);
            v15[1] = (__int64)Object;
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v18 = (AutoBoost *)KeAbPreAcquire((__int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1], 0LL, 0LL, v16);
          v20 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock.SavedApcStateFill[16], 0LL) )
            ExfAcquirePushLockExclusiveEx(
              (unsigned __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1],
              v18,
              (__int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
          if ( v20 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v20, v19);
            else
              *((_BYTE *)v20 + 10) = 1;
          }
          v21 = *(void *volatile ****)&KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue;
          v22 = (void *volatile **)(v15 + 3);
          if ( **(struct _KTHREAD ***)&KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.AbWaitObject )
            __fastfail(3u);
          *v22 = &KiSystemServiceTraceCallbackLock.AbWaitObject;
          v15[4] = (__int64)v21;
          *v21 = v22;
          *(_QWORD *)&KiSystemServiceTraceCallbackLock.ReservedPreviousReadyTimeValue = v15 + 3;
          if ( (_InterlockedExchangeAdd64(
                  (volatile signed __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1].Flink,
                  0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
          KeAbPostRelease((unsigned __int64)&PspSiloMonitorLock.SavedApcState.ApcListHead[1]);
          KeLeaveCriticalRegion();
          if ( a7 == &PspSystemCpuPartition
            || (CpuPartition = ObInsertObjectEx(v15, 0LL, a2, 1LL, 0, 0LL, &Handle), CpuPartition >= 0) )
          {
            *a7 = v15;
            if ( a8 )
            {
              *a8 = Handle;
              Handle = 0LL;
            }
          }
        }
      }
    }
    if ( Handle )
      ObCloseHandle(Handle, a3);
  }
  return (unsigned int)CpuPartition;
}
