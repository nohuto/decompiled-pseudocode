/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108
 * Callers:
 *     MiFastLockLeafPageTable @ 0x1402CF2D0 (MiFastLockLeafPageTable.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140480380 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1404896E0 (KxTryToAcquireQueuedSpinLock.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1404D3B24 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int InterruptCount; // r9d
  int v4; // r11d
  char v6; // cl
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  InterruptCount = 0;
  v4 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    v8 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v4 = v8;
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64(a2, a1, 0LL) )
  {
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v6 )
    {
      v9 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v9, v9 - v4, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
