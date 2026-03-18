/*
 * XREFs of PspLockUnlockProcessExclusive @ 0x140449A80
 * Callers:
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409EB314 (PspDisablePrimaryTokenExchange.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140B6E5E8 (PspSetProcessAffinityUpdateMode.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140449B6C (ExfAcquireReleasePushLockExclusive.c)
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
