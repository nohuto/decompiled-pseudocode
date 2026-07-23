/*
 * XREFs of PspUnlockJobAndRootExclusive @ 0x1407FFA68
 * Callers:
 *     PspJobDelete @ 0x1406187E0 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x1407FA7D0 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1407FEF84 (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1407FF594 (PspSetNetRateControl.c)
 *     PspCheckEnableNotificationChannel @ 0x140B68198 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 */

__int64 __fastcall PspUnlockJobAndRootExclusive(__int64 a1, __int64 a2)
{
  if ( a1 != *(_QWORD *)(a1 + 1312) )
    PspUnlockJobExclusive(a1, a2);
  return PspUnlockJobExclusive(*(_QWORD *)(a1 + 1312), a2);
}
