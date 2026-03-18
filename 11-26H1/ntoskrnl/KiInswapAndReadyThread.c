/*
 * XREFs of KiInswapAndReadyThread @ 0x1402C6944
 * Callers:
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiProcessThreadWaitList @ 0x14023BDB0 (KiProcessThreadWaitList.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140231820 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402436D0 (KiFlushSoftwareInterruptBatch.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1402C6AEC (KiRequestProcessInSwap.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

int __fastcall KiInswapAndReadyThread(struct _KPRCB *a1, ULONG_PTR a2, __int64 *a3)
{
  int v3; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  char v8; // di
  signed __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  signed __int64 *v11; // rbx
  signed __int64 v12; // rcx
  struct _SINGLE_LIST_ENTRY v14; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a2 + 120);
  if ( (v3 & 0x20000) != 0 )
  {
    if ( (v3 & 0x100000) == 0 )
      goto LABEL_3;
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 264LL), 8u) & 7) == 0 )
      goto LABEL_3;
    v10 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v10, a2, (__int64)a3);
    if ( (v10[66] & 7) == 0 )
    {
      _InterlockedAnd(v10, 0xFFFFFF7F);
LABEL_3:
      v14.Next = 0LL;
      KiDeferredReadySingleThread(a1, a2, &v14, a3);
      Next = v14.Next;
      if ( v14.Next )
      {
        v8 = 1;
        v14.Next = v14.Next->Next;
        do
        {
          KiDeferredReadySingleThread(a1, (ULONG_PTR)&Next[-27], &v14, 0LL);
          Next = v14.Next;
          ++v8;
          if ( v14.Next )
            v14.Next = v14.Next->Next;
          if ( (v8 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      LODWORD(v9) = KiFlushSoftwareInterruptBatch((char *)&a1->DeferredDispatchInterrupts);
      return v9;
    }
LABEL_13:
    LODWORD(v9) = KiRequestProcessInSwap(a2, v10);
    return v9;
  }
  v10 = *(volatile signed __int32 **)(a2 + 184);
  KiAcquireKobjectLockSafe(v10, a2, (__int64)a3);
  if ( (v10[66] & 7) != 0 )
    goto LABEL_13;
  _InterlockedAdd(v10 + 66, 8u);
  _InterlockedAnd(v10, 0xFFFFFF7F);
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
  *(_BYTE *)(a2 + 388) = 6;
  v11 = (signed __int64 *)(a2 + 216);
  _m_prefetchw(&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup);
  v9 = *(_QWORD *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup;
  do
  {
    *v11 = v9;
    v12 = v9;
    v9 = _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup,
           (signed __int64)v11,
           v9);
  }
  while ( v9 != v12 );
  if ( !v9 )
    LODWORD(v9) = KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
  return v9;
}
