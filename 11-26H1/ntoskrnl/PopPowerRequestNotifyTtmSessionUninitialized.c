/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B61D4C
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x14049F650 (PopPowerRequestRevokeRequests.c)
 */

NTSTATUS __fastcall PopPowerRequestNotifyTtmSessionUninitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive(stru_140F12EA0.TracingPrivate, a2, a3, a4);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((struct _KTHREAD *)stru_140F12EA0.TracingPrivate);
  return KeWaitForSingleObject(&unk_140E019F8, Executive, 0, 0, 0LL);
}
