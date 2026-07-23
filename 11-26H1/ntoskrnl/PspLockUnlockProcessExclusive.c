/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140441BB0
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409E7AE4 (PspDisablePrimaryTokenExchange.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140B71A98 (PspSetProcessAffinityUpdateMode.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140441C9C (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PspLockUnlockProcessExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *v3; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v3 = (struct _KTHREAD *)(a1 + 456);
  _InterlockedOr(v5, 0);
  if ( (*(_QWORD *)&v3->Header.Lock & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v3);
  return KiLeaveCriticalRegionUnsafe(a2, a2);
}
