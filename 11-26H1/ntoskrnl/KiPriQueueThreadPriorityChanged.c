/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1402394F0
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140202264 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x14052B1A0 (KeSetBasePriorityThread.c)
 * Callees:
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiActivateWaiterPriQueue @ 0x1403EEF80 (KiActivateWaiterPriQueue.c)
 */

__int64 __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  bool v3; // r10
  __int64 v5; // r11
  __int64 v6; // rbx
  int v7; // r8d
  __int64 result; // rax
  signed __int8 v9; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rcx

  v3 = 0;
  v5 = *(char *)(a2 + 563);
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 540);
  if ( (_DWORD)v6 == (_DWORD)v5 )
    goto LABEL_2;
  v7 = *(_DWORD *)(a2 + 540) & 0x100;
  if ( !v7 )
  {
    v11 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v11 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v11 + 4 * v5 + 536), 1u);
    v3 = (int)v5 < (int)v6;
  }
  result = v7 | (unsigned int)(unsigned __int8)v5;
  *(_DWORD *)(a2 + 540) = result;
  if ( !v3 )
  {
LABEL_2:
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  else
  {
    v9 = _interlockedbittestandset(a1, 7u);
    *(_QWORD *)(a2 + 64) = 0LL;
    if ( v9 )
      result = KiActivateWaiterQueueWithNoLocks(a2, (unsigned __int64)a1, 0LL);
    else
      result = KiActivateWaiterPriQueue(a1);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->DeferredReadyListHead.Next )
      return KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  }
  return result;
}
