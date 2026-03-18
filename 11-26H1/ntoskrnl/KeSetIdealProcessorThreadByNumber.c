/*
 * XREFs of KeSetIdealProcessorThreadByNumber @ 0x140427F74
 * Callers:
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 * Callees:
 *     KeSetIdealProcessorThreadEx @ 0x140204850 (KeSetIdealProcessorThreadEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140428990 (KeGetProcessorIndexFromNumber.c)
 *     KeGetProcessorNumberFromIndex @ 0x1404289E0 (KeGetProcessorNumberFromIndex.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadByNumber(
        struct _KTHREAD *a1,
        PPROCESSOR_NUMBER ProcNumber,
        PPROCESSOR_NUMBER a3)
{
  volatile unsigned int ProcessorIndexFromNumber; // eax
  unsigned int v6; // edi
  volatile unsigned int IdealProcessor; // ecx
  unsigned int v9; // eax
  volatile unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0;
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
    v9 = KeSetIdealProcessorThreadEx(a1, ProcessorIndexFromNumber, (unsigned int *)&v10);
    IdealProcessor = v10;
    v6 = v9;
  }
  KeGetProcessorNumberFromIndex(IdealProcessor, a3);
  return v6;
}
