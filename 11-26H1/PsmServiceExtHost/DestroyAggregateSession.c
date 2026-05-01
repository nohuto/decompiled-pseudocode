/*
 * XREFs of DestroyAggregateSession @ 0x18008CD24
 * Callers:
 *     CreateTlgAggregateSession @ 0x18008CC48 (CreateTlgAggregateSession.c)
 *     TlgRegisterAggregateProviderEx @ 0x18008CE38 (TlgRegisterAggregateProviderEx.c)
 *     TlgUnregisterAggregateProvider @ 0x18008CF44 (TlgUnregisterAggregateProvider.c)
 * Callees:
 *     CancelTimerCallbacksAndDeleteTimer @ 0x18008CBDC (CancelTimerCallbacksAndDeleteTimer.c)
 */

void __fastcall DestroyAggregateSession(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    CancelTimerCallbacksAndDeleteTimer((__int64)lpMem);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
