/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x140002D5C
 * Callers:
 *     CpcAcquirePerformanceCallback @ 0x140002D40 (CpcAcquirePerformanceCallback.c)
 *     CpcSubspaceCommitPerformance @ 0x140003490 (CpcSubspaceCommitPerformance.c)
 *     CpcSubspaceAcquirePerformance @ 0x1400034E0 (CpcSubspaceAcquirePerformance.c)
 *     CpcReadFeedbackAcquireCallback @ 0x140006450 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceReadFeedback @ 0x1400065A0 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcConsolidateCommandCompletion(__int64 a1)
{
  __int64 result; // rax
  bool v2; // zf
  __int64 (*v3)(void); // rbx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = *(_BYTE *)(a1 + 16) == 0;
    v3 = *(__int64 (**)(void))(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( !v2 )
      KeSetEvent(&Event, 0, 0);
    return v3();
  }
  return result;
}
