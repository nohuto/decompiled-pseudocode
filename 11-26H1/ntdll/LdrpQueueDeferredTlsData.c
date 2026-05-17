/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x18007F814
 * Callers:
 *     LdrpHandleTlsData @ 0x1800801B0 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall LdrpQueueDeferredTlsData(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v3 = 2 * ((a2 >> 2) & 0xF);
  v4 = 2 * ((a2 >> 2) & 0xF);
  RtlAcquireSRWLockExclusive(&LdrpDelayedTlsReclaimTable[v4 + 1], a2);
  *(_QWORD *)(v2 + 8) = LdrpDelayedTlsReclaimTable[v3];
  LdrpDelayedTlsReclaimTable[v3] = v2;
  return RtlReleaseSRWLockExclusive(&LdrpDelayedTlsReclaimTable[v4 + 1]);
}
