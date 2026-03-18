/*
 * XREFs of PopPepArmIdleTimer @ 0x14021A6DC
 * Callers:
 *     PopPepIdleTimeoutDpcRoutine @ 0x140202E70 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1403B1B10 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutRoutine @ 0x140483A70 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  KIRQL v2; // di

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&unk_140F0AFD8);
    if ( a1 )
      byte_140F0AFDC = 0;
    if ( !byte_140F0AFDC && dword_140F0AFE0 > 0 )
    {
      byte_140F0AFDC = 1;
      KeSetCoalescableTimer(
        &qword_140F0B000,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &dword_140F0B040);
    }
    ExReleaseSpinLockExclusive(&unk_140F0AFD8, v2);
  }
}
