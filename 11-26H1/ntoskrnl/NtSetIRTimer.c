/*
 * XREFs of NtSetIRTimer @ 0x1403B33F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403B3454 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
