/*
 * XREFs of NtSetTimer2 @ 0x1403B3430
 * Callers:
 *     DifNtSetTimer2Wrapper @ 0x140691C60 (DifNtSetTimer2Wrapper.c)
 * Callees:
 *     ExpSetTimer2 @ 0x1403B3454 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( DueTime )
    return ExpSetTimer2(TimerHandle);
  else
    return -1073741584;
}
