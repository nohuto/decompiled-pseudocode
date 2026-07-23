/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x180076BB4
 * Callers:
 *     LdrpHandleTlsData @ 0x180077550 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = 2 * ((a2 >> 2) & 0xF);
  v4 = 2 * ((a2 >> 2) & 0xF);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&LdrpDelayedTlsReclaimTable[v4 + 1]);
  *(_QWORD *)(v2 + 8) = LdrpDelayedTlsReclaimTable[v3];
  LdrpDelayedTlsReclaimTable[v3] = v2;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&LdrpDelayedTlsReclaimTable[v4 + 1]);
}
