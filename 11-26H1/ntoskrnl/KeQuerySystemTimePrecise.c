/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14021B070
 * Callers:
 *     EtwpTraceSystemShutdown @ 0x14082810C (EtwpTraceSystemShutdown.c)
 *     PspExitThread @ 0x14095771C (PspExitThread.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     PspNotifyThreadCreation @ 0x1409EAC38 (PspNotifyThreadCreation.c)
 *     PspAllocateThread @ 0x140A01BF0 (PspAllocateThread.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     PspExitLastThread @ 0x140A41964 (PspExitLastThread.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     EtwpInitializeTimeStamp @ 0x140A6DB58 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x140A6DD54 (EtwpInitLoggerContext.c)
 *     EtwTraceLpacAccessFailure @ 0x140B21EFC (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(_QWORD *a1)
{
  __int64 i; // rbx
  __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  char v5; // di
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v7; // rdx
  __int64 result; // rax

  while ( 1 )
  {
    for ( i = MEMORY[0xFFFFF78000000340]; (MEMORY[0xFFFFF78000000340] & 1) != 0; i = MEMORY[0xFFFFF78000000340] )
      _mm_pause();
    v2 = MEMORY[0xFFFFF78000000014];
    v3 = MEMORY[0xFFFFF78000000348];
    v4 = MEMORY[0xFFFFF78000000358];
    v5 = MEMORY[0xFFFFF78000000368];
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == i )
      break;
    _mm_pause();
  }
  if ( PerformanceCounter.QuadPart <= v3 )
  {
    result = v2;
  }
  else
  {
    v7 = PerformanceCounter.QuadPart - v3 - 1;
    if ( v5 )
      v7 <<= v5;
    result = (((unsigned __int64)v7 * (unsigned __int128)v4) >> 64) + v2;
  }
  *a1 = result;
  return result;
}
