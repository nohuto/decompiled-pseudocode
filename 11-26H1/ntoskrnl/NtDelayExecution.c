/*
 * XREFs of NtDelayExecution @ 0x1408F2960
 * Callers:
 *     DifNtDelayExecutionWrapper @ 0x140675850 (DifNtDelayExecutionWrapper.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtDelayExecution(BOOLEAN a1, volatile void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  LARGE_INTEGER Interval; // [rsp+58h] [rbp+20h] BYREF

  Interval.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Interval.QuadPart = RtlReadULong64FromUser(a2);
  }
  else
  {
    RtlCopyVolatileMemory(&Interval, (const void *)a2, 8uLL);
  }
  return KeDelayExecutionThread(PreviousMode, a1, &Interval);
}
