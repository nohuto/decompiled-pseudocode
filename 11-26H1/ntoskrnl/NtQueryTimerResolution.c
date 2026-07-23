/*
 * XREFs of NtQueryTimerResolution @ 0x140B22E40
 * Callers:
 *     DifNtQueryTimerResolutionWrapper @ 0x140689F60 (DifNtQueryTimerResolutionWrapper.c)
 * Callees:
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

NTSTATUS __cdecl NtQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  int v5; // r15d
  int v6; // esi
  char PreviousMode; // bl

  v5 = KeMinimumIncrement;
  v6 = KePseudoHrTimeIncrement;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    RtlWriteULongToUser(MaximumTime, KeMaximumIncrement);
  else
    *MaximumTime = KeMaximumIncrement;
  if ( PreviousMode )
    RtlWriteULongToUser(MinimumTime, v5);
  else
    *MinimumTime = v5;
  if ( PreviousMode )
    RtlWriteULongToUser(CurrentTime, v6);
  else
    *CurrentTime = v6;
  return 0;
}
