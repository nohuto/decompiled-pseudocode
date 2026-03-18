/*
 * XREFs of RtlTraceDatabaseValidate @ 0x14061FDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14061FE08 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1406200F8 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlpTraceDatabaseAcquireLock();
  RtlpTraceDatabaseReleaseLock(a1);
  return 1;
}
