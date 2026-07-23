/*
 * XREFs of KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140480380
 * Callers:
 *     <none>
 * Callees:
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402FE108 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  a2[1] = a1;
  *a2 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(a1);
    if ( *a1 || _InterlockedCompareExchange64(a1, (signed __int64)a2, 0LL) )
      _mm_pause();
    else
      return 1;
  }
  else
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented((signed __int64)a2, a1);
  }
  return v2;
}
