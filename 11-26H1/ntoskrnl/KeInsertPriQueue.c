/*
 * XREFs of KeInsertPriQueue @ 0x140383270
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402020DC (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItem @ 0x140383E20 (ExTryQueueWorkItem.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiWakePriQueueWaiter @ 0x1403826C0 (KiWakePriQueueWaiter.c)
 *     EtwTracePriQEnqueueWork @ 0x140383468 (EtwTracePriQEnqueueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTracePriQEnqueueFailed @ 0x1405335EC (EtwTracePriQEnqueueFailed.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  unsigned __int8 v9; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rbp
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // ecx
  char v18; // bl
  char v19; // cl
  __int64 v21; // rcx
  _QWORD *v22; // rax

  v5 = (int)a3;
  v6 = (_QWORD *)(a1 + 8);
  v7 = (_QWORD *)a2;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(a4) = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    EtwTracePriQEnqueueWork(CurrentPrcb->CurrentThread, v7, (unsigned int)v5, a4);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  if ( (_QWORD *)*v6 != v6
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v13 = 0;
    v14 = a1 + 664;
    v15 = 32LL;
    while ( 1 )
    {
      v16 = *(_DWORD *)(v14 - 4);
      v14 -= 4LL;
      v13 += v16;
      --v15;
      v17 = *(_DWORD *)(a1 + 664);
      if ( v13 >= v17 )
        break;
      if ( v15 <= v5 )
      {
        if ( v13 < v17 )
        {
          v9 = KiWakePriQueueWaiter((__int64)CurrentPrcb, a1, (__int64)v7, v5);
          if ( v9 )
          {
            v18 = a5;
            goto LABEL_17;
          }
        }
        break;
      }
    }
  }
  v18 = a5;
  if ( (a5 & 2) != 0 )
  {
LABEL_17:
    v19 = 0;
  }
  else
  {
    ++*(_DWORD *)(a1 + 4);
    v21 = a1 + 16 * v5 + 24;
    v22 = *(_QWORD **)(v21 + 8);
    if ( *v22 != v21 )
      __fastfail(3u);
    *v7 = v21;
    v7[1] = v22;
    *v22 = v7;
    *(_QWORD *)(v21 + 8) = v7;
    v19 = 1;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 && !v9 && !v19 )
    EtwTracePriQEnqueueFailed(CurrentThread, v7);
  KiExitDispatcher((__int64)CurrentPrcb, (v18 & 1) != 0 ? 3 : 0, 1u, 0, CurrentIrql);
  return v9;
}
