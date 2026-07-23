/*
 * XREFs of NtDelayExecution @ 0x1408F8F20
 * Callers:
 *     DifNtDelayExecutionWrapper @ 0x140679430 (DifNtDelayExecutionWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  KPROCESSOR_MODE PreviousMode; // bl
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+20h] BYREF

  Interval.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)DelayInterval & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval.QuadPart = RtlReadULong64FromUser(DelayInterval);
  }
  else
  {
    RtlCopyVolatileMemory(&Interval, DelayInterval, 8uLL);
  }
  return KeDelayExecutionThread(PreviousMode, Alertable, &Interval);
}
