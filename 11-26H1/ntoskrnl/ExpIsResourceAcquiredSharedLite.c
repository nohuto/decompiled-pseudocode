/*
 * XREFs of ExpIsResourceAcquiredSharedLite @ 0x14042F630
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14042F560 (ExIsResourceAcquiredSharedLite.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpIsResourceAcquiredSharedLite(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v6; // edi
  volatile __int64 *v8; // r14
  __int64 ResourceIndex; // r15
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int i; // edx
  struct _KTHREAD *v16; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 64);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(a1 + 48) == CurrentThread )
      return *(_DWORD *)(a1 + 56) >> 3;
    if ( *(char *)(a1 + 26) >= 0 )
    {
      v6 = 0;
      v8 = (volatile __int64 *)(a1 + 96);
      ResourceIndex = CurrentThread->ResourceIndex;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
      {
        v11 = _InterlockedExchange64(v8, (__int64)&LockHandle);
        if ( v11 )
          KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v11, a3);
      }
      else
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, v8);
      }
      v12 = *(_QWORD *)(a1 + 16);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( (unsigned int)ResourceIndex < v13 && *(struct _KTHREAD **)(v12 + 16 * ResourceIndex) == CurrentThread )
        {
          v14 = *(_DWORD *)(v12 + 16 * ResourceIndex + 8);
LABEL_18:
          v6 = v14 >> 3;
        }
        else
        {
          for ( i = 1; i < v13; ++i )
          {
            v16 = *(struct _KTHREAD **)(v12 + 16);
            v12 += 16LL;
            if ( v16 == CurrentThread )
            {
              v14 = *(_DWORD *)(v12 + 8);
              goto LABEL_18;
            }
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return v6;
    }
  }
  return 0LL;
}
