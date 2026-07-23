/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x18014F4D0
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1801156A4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18007F268 (RtlpHpMetadataFree.c)
 */

NTSTATUS __fastcall RtlpHpStackDbFreeRoutine(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataFree(a1, &v2);
}
