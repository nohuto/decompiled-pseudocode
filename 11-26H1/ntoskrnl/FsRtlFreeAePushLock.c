/*
 * XREFs of FsRtlFreeAePushLock @ 0x1405B5860
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x14027E2C0 (ExpCleanupAutoExpandPushLock.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlFreeAePushLock(PVOID P)
{
  ExpCleanupAutoExpandPushLock((__int64)P);
  ExFreePoolWithTag(P, 0);
}
