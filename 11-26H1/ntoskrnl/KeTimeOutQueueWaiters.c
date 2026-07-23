/*
 * XREFs of KeTimeOutQueueWaiters @ 0x1403E3298
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeTimeOutQueueWaiters(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  unsigned int v5; // r12d
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v13; // rax
  int v14; // [rsp+60h] [rbp+8h]

  v3 = a1;
  v4 = 0;
  v5 = a3;
  v14 = MEMORY[0xFFFFF78000000320];
  v6 = (unsigned __int64)((a2 * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount;
  CurrentIrql = KeGetCurrentIrql();
  v8 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)v3, v8, a3);
  v9 = *(_QWORD **)(v3 + 16);
  while ( 1 )
  {
    v10 = v4;
    if ( v9 == (_QWORD *)(v3 + 8) || v4 >= v5 )
      break;
    v11 = (__int64)v9;
    v9 = (_QWORD *)v9[1];
    if ( *(_BYTE *)(v11 + 16) == 3 )
    {
      if ( v14 - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 436LL) < (unsigned int)v6 )
        break;
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v9 != v11 )
        __fastfail(3u);
      *v9 = v13;
      *(_QWORD *)(v13 + 8) = v9;
      ++v4;
      if ( !KiTryUnwaitThread((__int64)KeGetCurrentPrcb(), v11, 258LL, 0LL) )
        v4 = v10;
    }
  }
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  return v4;
}
