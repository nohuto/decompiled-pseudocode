/*
 * XREFs of ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KiWaitSatisfyOther @ 0x1403E2B14 (KiWaitSatisfyOther.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpTryEnterWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rsi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v10; // rcx
  __int64 v11; // r8

  v2 = Object[2];
  if ( *((_DWORD *)Object + 96) >= *((_DWORD *)Object + 95) || *(_DWORD *)(v2 + 28) )
    return 0;
  if ( *((_DWORD *)Object + 101) )
  {
    *((_DWORD *)Object + 102) |= 0x200u;
    if ( !*(_DWORD *)(*(_QWORD *)(v2 + 8) + 4LL) )
    {
      v4 = *((_DWORD *)Object + 102);
      if ( (v4 & 0x400) == 0 )
      {
        *((_DWORD *)Object + 102) = v4 | 0x400;
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
        v7 = (char *)(Object + 77);
        v8 = *(_QWORD *)(v2 + 8);
        *((_QWORD *)v7 + 4) = v8;
        *((_WORD *)v7 + 8) = 1026;
        *((_QWORD *)v7 + 3) = &WheapConfigTableLock.SavedApcStateFill[40];
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v5) = 2;
          KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v5);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v8, v5, v6);
        if ( *(int *)(v8 + 4) > 0 )
        {
          KiWaitSatisfyOther(v8);
          v7[17] = 5;
          KiInsertQueueInternal((__int64)&WheapConfigTableLock.SavedApcStateFill[40], v7, v11);
          _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
          KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
        }
        else
        {
          v10 = *(_QWORD **)(v8 + 16);
          if ( *v10 != v8 + 8 )
            __fastfail(3u);
          *(_QWORD *)v7 = v8 + 8;
          *((_QWORD *)v7 + 1) = v10;
          *v10 = v7;
          *(_QWORD *)(v8 + 16) = v7;
          _InterlockedAnd((volatile signed __int32 *)v8, 0xFFFFFF7F);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
        }
      }
      return 0;
    }
  }
  return 1;
}
