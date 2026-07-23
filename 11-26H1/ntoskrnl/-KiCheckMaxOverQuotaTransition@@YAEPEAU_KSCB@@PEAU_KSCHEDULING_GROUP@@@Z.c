/*
 * XREFs of ?KiCheckMaxOverQuotaTransition@@YAEPEAU_KSCB@@PEAU_KSCHEDULING_GROUP@@@Z @ 0x1404607C0
 * Callers:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140334880 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 */

bool __fastcall KiCheckMaxOverQuotaTransition(struct _KSCB *a1, struct _KSCHEDULING_GROUP *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int16 PrcbLockFlags; // cx
  bool v7; // dl
  ULONG_PTR v8; // rcx

  if ( (*(_BYTE *)&a1->0 & 0x12) != 0 )
    return 0;
  v4 = a1->LastReportedCycles - a1->GenerationCycles;
  a1->LastReportedCycles = a1->GenerationCycles;
  v5 = v4 + _InterlockedExchangeAdd64(&a2->MaxQuotaTracker.CyclesRemaining, v4);
  if ( a2->NotificationCycles > 0 && (__int64)(v4 + _InterlockedExchangeAdd64(&a2->NotificationCycles, v4)) <= 0 )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)&a2->NotificationDpc, 0LL);
    if ( v8 )
      KiInsertQueueDpc(v8, 0LL, 0LL, 0LL, 0);
  }
  PrcbLockFlags = a1->PrcbLockFlags;
  v7 = v5 <= 0;
  if ( (PrcbLockFlags & 0x80u) != 0 && a1->GenerationCycles > a1->MaxQuotaCycleTarget )
  {
    v7 = 1;
    goto LABEL_6;
  }
  if ( v5 <= 0 )
LABEL_6:
    a1->PrcbLockFlags = PrcbLockFlags | 2;
  return v7;
}
