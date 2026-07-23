/*
 * XREFs of NtQueryPerformanceCounter @ 0x140A931B0
 * Callers:
 *     DifNtQueryPerformanceCounterWrapper @ 0x140688A30 (DifNtQueryPerformanceCounterWrapper.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  char PreviousMode; // bl
  LARGE_INTEGER v5; // rax
  LARGE_INTEGER Src[2]; // [rsp+28h] [rbp-10h] BYREF
  LARGE_INTEGER v8; // [rsp+58h] [rbp+20h] BYREF

  v8.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = KeQueryPerformanceCounter(&v8);
  Src[0] = v5;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)PerformanceCounter & 3) != 0 )
      goto LABEL_3;
    RtlWriteULong64ToUser(PerformanceCounter, v5.QuadPart);
  }
  else
  {
    RtlCopyVolatileMemory(PerformanceCounter, Src, 8uLL);
  }
  if ( PerformanceFrequency )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)PerformanceFrequency & 3) != 0 )
LABEL_3:
        ExRaiseDatatypeMisalignment();
      RtlWriteULong64ToUser(PerformanceFrequency, v8.QuadPart);
    }
    else
    {
      RtlCopyVolatileMemory(PerformanceFrequency, &v8, 8uLL);
    }
  }
  return 0;
}
