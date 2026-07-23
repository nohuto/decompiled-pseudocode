/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x140202C34
 * Callers:
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140202CC0 (KeGetProcessorNumberFromIndex.c)
 *     KeSetIdealProcessorThreadEx @ 0x140204930 (KeSetIdealProcessorThreadEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        PPROCESSOR_NUMBER ProcNumber,
        PPROCESSOR_NUMBER a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v6; // edi
  volatile unsigned int IdealProcessor; // ecx
  unsigned int v9; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  if ( ProcessorIndexFromNumber == -1 )
  {
    v6 = -1073741811;
    if ( a1 == KeGetCurrentThread() )
      IdealProcessor = a1->IdealProcessor;
    else
      IdealProcessor = a1->UserIdealProcessor;
  }
  else
  {
    v9 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber);
    IdealProcessor = 0;
    v6 = v9;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v6;
}
