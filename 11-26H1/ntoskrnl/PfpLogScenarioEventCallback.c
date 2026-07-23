/*
 * XREFs of PfpLogScenarioEventCallback @ 0x1407C87C0
 * Callers:
 *     <none>
 * Callees:
 *     PfLogEvent @ 0x140384750 (PfLogEvent.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     PfTAccessTracingCheck @ 0x1406029E4 (PfTAccessTracingCheck.c)
 *     PfTSetTraceWorkerPriority @ 0x1406029F4 (PfTSetTraceWorkerPriority.c)
 *     PfGenerateTrace @ 0x14077C418 (PfGenerateTrace.c)
 *     MmPerformMemoryListCommand @ 0x140C12670 (MmPerformMemoryListCommand.c)
 */

__int64 __fastcall PfpLogScenarioEventCallback(__int64 a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  signed int v6; // ebp
  int Trace; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  size_t Size; // [rsp+20h] [rbp-28h]
  int v14[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  v15 = 0LL;
  if ( !(unsigned int)PfTAccessTracingCheck(a1) )
  {
    v5 = PfpPartitionToParent(v4);
    MmPerformMemoryListCommand(1LL, v5);
  }
  v6 = PfTSetTraceWorkerPriority(a1, 0x10u);
  Trace = PfGenerateTrace(a1, 1);
  v8 = a2[2];
  v9 = 0;
  *(_QWORD *)v14 = *a2;
  LODWORD(Size) = 16;
  if ( Trace < 0 )
    v9 = Trace;
  LODWORD(v15) = v15 & 0xFFF00000 | a2[1] & 3 | (4 * ((unsigned __int16)a2[3] | ((v8 & 3) << 16)));
  v10 = PfLogEvent(
          a1,
          27,
          HIDWORD(stru_140E66D40.WriteOperationCount)
        + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                        + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
          v14,
          Size);
  if ( v10 < 0 && v9 >= 0 )
    v9 = v10;
  if ( (a2[4] & 1) != 0 )
  {
    v11 = PfGenerateTrace(a1, 0);
    if ( v11 < 0 && v9 >= 0 )
      v9 = v11;
  }
  if ( v6 <= 31 )
    PfTSetTraceWorkerPriority(a1, v6);
  return (unsigned int)v9;
}
