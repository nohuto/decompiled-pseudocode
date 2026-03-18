/*
 * XREFs of PspUnlockJobAndRootExclusive @ 0x1407FA038
 * Callers:
 *     PspJobDelete @ 0x140615810 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspSetJobIoRateControl @ 0x1407F9484 (PspSetJobIoRateControl.c)
 *     PspSetNetRateControl @ 0x1407F9A94 (PspSetNetRateControl.c)
 *     PspCheckEnableNotificationChannel @ 0x140B650F8 (PspCheckEnableNotificationChannel.c)
 * Callees:
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 */

__int64 __fastcall PspUnlockJobAndRootExclusive(__int64 a1, __int64 a2)
{
  if ( a1 != *(_QWORD *)(a1 + 1312) )
    PspUnlockJobExclusive(a1, a2);
  return PspUnlockJobExclusive(*(_QWORD *)(a1 + 1312), a2);
}
