/*
 * XREFs of PspLockJobAndRootExclusive @ 0x1407FE8E0
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1407FE324 (PspFreezeJobTree.c)
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1407FF594 (PspSetNetRateControl.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspLockJobAndRootExclusive(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 1312);
  PspLockJobExclusive(v5, a2);
  while ( v5 != *(_QWORD *)(a1 + 1312) )
  {
    PspUnlockJobExclusive(v5, a2);
    v5 = *(_QWORD *)(a1 + 1312);
    PspLockJobExclusive(v5, a2);
  }
  result = *(_QWORD *)(a1 + 1312);
  if ( a1 != result )
    return PspLockJobExclusive(a1, a2);
  return result;
}
