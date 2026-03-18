/*
 * XREFs of CcScanLogHandleList @ 0x140385FA8
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140388CAC (CcLazyWriteScanVolume.c)
 *     CcLazyWriteScan @ 0x1404FB788 (CcLazyWriteScan.c)
 * Callees:
 *     KeRcuReadUnlock @ 0x1402206B0 (KeRcuReadUnlock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     CcDecrementVolumeUseCountWithDelete @ 0x140384440 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuReadLock @ 0x140384590 (KeRcuReadLock.c)
 *     CcCalculatePagesToWrite @ 0x140386320 (CcCalculatePagesToWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall CcScanLogHandleList(__int64 a1, _DWORD *a2, int a3, _QWORD *a4)
{
  struct _LIST_ENTRY *Blink; // rdi
  __int64 p_Blink; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  unsigned __int16 v13; // ax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v20; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int16 v22; // [rsp+88h] [rbp+10h] BYREF

  v22 = 0;
  *a2 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  *a4 = 0x7FFFFFFFFFFFFFFFLL;
  LockHandle.LockQueue = 0LL;
  KeRcuReadLock(a1);
  Blink = EmpParseLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
  while ( Blink != (struct _LIST_ENTRY *)&EmpParseLock.InGlobalUpdateVpThreadPriorityList )
  {
    p_Blink = (__int64)&Blink[-2].Blink;
    if ( _InterlockedIncrement64((volatile signed __int64 *)&Blink[-1]) <= 1 )
      __fastfail(0xEu);
    KeRcuReadUnlock();
    v11 = *(_QWORD *)(p_Blink + 48);
    if ( v11 )
      guard_dispatch_icall_no_overrides(v11, &v22, v10);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 768), &LockHandle);
    if ( *(_QWORD *)(p_Blink + 48) )
    {
      v12 = (_DWORD *)(p_Blink + 72);
      if ( *(_QWORD *)(p_Blink + 72) >= 0xFFFFFFFFuLL )
      {
        ++CcDbgForcedLogPercentFull;
        v13 = 0;
        v22 = 0;
      }
      else
      {
        *(_DWORD *)(p_Blink + 120) = *v12;
        v13 = v22;
      }
      if ( v13 )
      {
        v14 = 100 * LODWORD(Blink[6].Flink);
        *(_DWORD *)(p_Blink + 120) = v14;
        v15 = v14 / v22;
        *(_DWORD *)(p_Blink + 120) = v15;
      }
      else
      {
        v15 = *(_DWORD *)(p_Blink + 156);
        LODWORD(Blink[6].Flink) = v15;
      }
      *(_QWORD *)(p_Blink + 112) = v15;
      *(_QWORD *)(p_Blink + 104) = v15;
      *(_QWORD *)(p_Blink + 96) = v15;
      *(_DWORD *)(p_Blink + 120) = (3 * v15) >> 2;
      v16 = CcCalculatePagesToWrite(a1, a3, (int)p_Blink + 72, (int)p_Blink + 96, 1);
      v17 = *(_QWORD *)v12;
      *(_QWORD *)(p_Blink + 80) = *(_QWORD *)v12;
      if ( v16 > v17 >> 3 )
      {
        *a2 += v16;
        ++CcDbgAdditionalPagesQueuedCount;
      }
      else
      {
        v16 = 0;
      }
      LODWORD(Blink[8].Flink) = v16;
      *(_DWORD *)(p_Blink + 88) = v16;
      if ( *(_QWORD *)(p_Blink + 40) )
      {
        v20 = *(_QWORD *)(p_Blink + 184);
        if ( v20 < *a4 )
          *a4 = v20;
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeRcuReadLock(v18);
    Blink = Blink->Flink;
    CcDecrementVolumeUseCountWithDelete(p_Blink);
  }
  return KeRcuReadUnlock();
}
