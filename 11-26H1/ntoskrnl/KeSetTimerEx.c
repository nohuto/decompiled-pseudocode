/*
 * XREFs of KeSetTimerEx @ 0x1403B5EA0
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KiDecodeTolerableDelayValue @ 0x1403B6BFC (KiDecodeTolerableDelayValue.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiCancelTimer @ 0x1403B6FE0 (KiCancelTimer.c)
 *     DifObjTrkRemoveItem @ 0x1403B7980 (DifObjTrkRemoveItem.c)
 *     KiObjTrkTimerPend @ 0x1403B7B28 (KiObjTrkTimerPend.c)
 *     KiTraceSetTimer @ 0x1403E8F38 (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  char v7; // al
  __int64 v8; // rdx
  char v9; // r12
  _KDPC *v10; // rbp
  unsigned __int8 CurrentIrql; // r15
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v15; // r13
  _KPROCESS *Process; // rax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // cl
  __int64 v19; // rdx
  LONGLONG v20; // rax
  LONG LockNV; // [rsp+30h] [rbp-48h]

  v7 = KiObjTrkTimerPend();
  v8 = KiWaitNever;
  v9 = v7;
  v10 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                  (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ (unsigned __int64)Dpc),
                                  KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  v12 = 0LL;
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    LOBYTE(v12) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v12, v8);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v15 = KiCancelTimer(Timer, 0LL);
  v17 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (CurrentThread = KeGetCurrentThread(),
          Process = CurrentThread->ApcState.Process,
          (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v17 = 1;
    }
  }
  Timer->TimerType = v17;
  v18 = 0;
  Timer->Period = Period;
  Timer->Dpc = v10;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = 0;
  if ( DueTime.HighPart >= 0 )
  {
    v18 = 1;
    BYTE1(LockNV) = 1;
    DueTime.QuadPart = MEMORY[0xFFFFF78000000014] - DueTime.QuadPart;
    if ( DueTime.HighPart >= 0 )
    {
      Timer->Header.LockNV = LockNV;
      Timer->DueTime.QuadPart = 0LL;
      if ( v9 )
      {
        _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 0, 1);
        DifObjTrkRemoveItem(49LL, Timer, 0LL);
      }
LABEL_20:
      KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
      goto LABEL_21;
    }
  }
  LOBYTE(CurrentThread) = v18 >> 2;
  v19 = 0LL;
  if ( (_BYTE)CurrentThread )
    v19 = (unsigned int)KiDecodeTolerableDelayValue(CurrentThread);
  HIBYTE(LockNV) |= 0x40u;
  v20 = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - DueTime.QuadPart;
  BYTE2(LockNV) = (unsigned __int64)(v19 + v20) >> 18;
  Timer->Header.LockNV = LockNV;
  if ( v9 )
    _InterlockedCompareExchange8(&Timer->TimerDifObjTracking, 2, 1);
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable(
                           (_DWORD)CurrentPrcb,
                           (_DWORD)Timer,
                           (_DWORD)Dpc,
                           (unsigned __int8)((unsigned __int64)(v19 + v20) >> 18),
                           0LL) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_21:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v15;
}
