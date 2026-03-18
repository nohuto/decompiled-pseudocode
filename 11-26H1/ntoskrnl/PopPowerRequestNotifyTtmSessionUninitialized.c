/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B5EBCC
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestRevokeRequests @ 0x1404A5FC0 (PopPowerRequestRevokeRequests.c)
 */

NTSTATUS __fastcall PopPowerRequestNotifyTtmSessionUninitialized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20, a2, a3, a4);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock(&stru_140F12D20);
  return KeWaitForSingleObject(&unk_140E019F8, Executive, 0, 0, 0LL);
}
