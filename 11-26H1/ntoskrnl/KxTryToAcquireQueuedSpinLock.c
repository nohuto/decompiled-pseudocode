/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1404896E0
 * Callers:
 *     KeTryToAcquireQueuedSpinLock @ 0x1405F2DA0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1405F2E30 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(a2);
    if ( *a2 || _InterlockedCompareExchange64(a2, a1, 0LL) )
      _mm_pause();
    else
      return 1;
  }
  else
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a1, a2);
  }
  return v2;
}
