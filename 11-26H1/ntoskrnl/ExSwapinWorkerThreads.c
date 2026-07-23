/*
 * XREFs of ExSwapinWorkerThreads @ 0x14094A380
 * Callers:
 *     ExShutdownSystem @ 0x140C05380 (ExShutdownSystem.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     PsGetNextPartitionUnsafe @ 0x140259B7C (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     KeRemoveQueueApc @ 0x140460EE0 (KeRemoveQueueApc.c)
 *     KeSetKernelStackSwapEnable @ 0x1404783C0 (KeSetKernelStackSwapEnable.c)
 *     PoPushPowerStateTransitionRecord @ 0x14060A1E0 (PoPushPowerStateTransitionRecord.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsReferencePartitionSystemProcess @ 0x140B4D9B0 (PsReferencePartitionSystemProcess.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 */

void __fastcall ExSwapinWorkerThreads(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned int *i; // rcx
  unsigned int *NextPartitionUnsafe; // rax
  unsigned int *v4; // r14
  __int64 j; // rdx
  __int64 NextProcessThread; // rax
  __int64 v7; // rdi
  int v8; // ebx
  signed __int32 v9[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v11[128]; // [rsp+60h] [rbp-29h] BYREF
  BOOLEAN Enable; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF
  LARGE_INTEGER Timeout; // [rsp+100h] [rbp+77h] BYREF

  Enable = a1;
  memset_0(v11, 0, 0x58uLL);
  Object = 0LL;
  memset(&Event, 0, sizeof(Event));
  CurrentThread = KeGetCurrentThread();
  Timeout.QuadPart = -100000000LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&ExSaPageGroupDescriptorArrayLock.NpxState);
  LOBYTE(ExSaPageGroupDescriptorArrayLock.AffinityVersion) = Enable;
  _InterlockedOr(v9, 0);
  for ( i = 0LL; ; i = v4 )
  {
    NextPartitionUnsafe = PsGetNextPartitionUnsafe(i);
    v4 = NextPartitionUnsafe;
    if ( !NextPartitionUnsafe )
      break;
    if ( (int)PsReferencePartitionSystemProcess(NextPartitionUnsafe, &Object) >= 0 )
    {
      for ( j = 0LL; ; j = v7 )
      {
        NextProcessThread = PsGetNextProcessThread(Object, j);
        v7 = NextProcessThread;
        if ( !NextProcessThread )
          break;
        if ( (*(_DWORD *)(NextProcessThread + 1444) & 1) != 0 )
        {
          if ( (struct _KTHREAD *)NextProcessThread == CurrentThread )
          {
            KeSetKernelStackSwapEnable(Enable);
          }
          else
          {
            KeInitializeApc(
              (__int64)v11,
              NextProcessThread,
              0,
              (__int64)ExpSetSwappingKernelApc,
              0LL,
              0LL,
              0,
              (__int64)&Enable);
            if ( (unsigned __int8)KeInsertQueueApc((__int64)v11, (__int64)&Event, 0LL, 3) )
            {
              if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) == 258 && !KeRemoveQueueApc((__int64)v11) )
              {
                v8 = PoPushPowerStateTransitionRecord((__int64)Object, v7);
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                if ( v8 >= 0 )
                  PoDelistPowerStateTransitionBlocker();
              }
            }
          }
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&ExSaPageGroupDescriptorArrayLock.NpxState);
}
