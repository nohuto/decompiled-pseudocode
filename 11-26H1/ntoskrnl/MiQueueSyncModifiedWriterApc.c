/*
 * XREFs of MiQueueSyncModifiedWriterApc @ 0x1404E84E4
 * Callers:
 *     MiAttemptPageFileReduction @ 0x1406F870C (MiAttemptPageFileReduction.c)
 *     MiStoreDeletePartition @ 0x14070A2E4 (MiStoreDeletePartition.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall MiQueueSyncModifiedWriterApc(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 1072);
  *(_QWORD *)(a2 + 48) = a3;
  *(_QWORD *)(a2 + 32) = xHalTimerWatchdogStop;
  *(_WORD *)a2 = 18;
  *(_BYTE *)(a2 + 2) = 88;
  *(_WORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 56) = a4 & -(__int64)(a3 != 0);
  *(_BYTE *)(a2 + 82) = 0;
  KeInsertQueueApc(a2, (__int64)Object, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
