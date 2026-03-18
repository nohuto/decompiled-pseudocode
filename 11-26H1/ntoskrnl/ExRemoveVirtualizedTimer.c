/*
 * XREFs of ExRemoveVirtualizedTimer @ 0x1404C034C
 * Callers:
 *     PspProcessUnbindVirtualizedTimers @ 0x140530204 (PspProcessUnbindVirtualizedTimers.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x1404C03C4 (ExpTimerResume.c)
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
