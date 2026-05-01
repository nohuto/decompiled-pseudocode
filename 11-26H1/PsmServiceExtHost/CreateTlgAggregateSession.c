/*
 * XREFs of CreateTlgAggregateSession @ 0x18008CC48
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x18008CE38 (TlgRegisterAggregateProviderEx.c)
 * Callees:
 *     DestroyAggregateSession @ 0x18008CD24 (DestroyAggregateSession.c)
 */

RTL_SRWLOCK *__fastcall CreateTlgAggregateSession(char a1)
{
  char v2; // di
  HANDLE ProcessHeap; // rax
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rbx

  v2 = 0;
  ProcessHeap = GetProcessHeap();
  v4 = (RTL_SRWLOCK *)HeapAlloc(ProcessHeap, 8u, 0x168uLL);
  v5 = v4;
  if ( v4 )
  {
    InitializeSRWLock(v4 + 33);
    if ( !a1 || !dword_1800E3400 && (v5[43].Ptr = CreateThreadpoolTimer(FlushTimerCallbackUserMode, v5, 0LL)) != 0LL )
      v2 = 1;
  }
  if ( !v2 )
  {
    DestroyAggregateSession(v5);
    return 0LL;
  }
  return v5;
}
