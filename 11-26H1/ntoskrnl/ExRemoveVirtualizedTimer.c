/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x1404B9B9C
 * Callers:
 *     PspProcessUnbindVirtualizedTimers @ 0x140532704 (PspProcessUnbindVirtualizedTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1404B9C14 (ExpTimerResume.c)
 */

__int64 __fastcall ExRemoveVirtualizedTimer(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  bool v3; // zf

  v1 = a1 - 288;
  v2 = *(_QWORD *)(a1 - 288 + 280);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 - 288 + 64));
  v3 = (*(_BYTE *)(v1 + 304) & 2) == 0;
  *(_QWORD *)(v1 + 280) = 0LL;
  if ( !v3 )
    ExpTimerResume((PKTIMER)v1);
  KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 64));
  return v2;
}
