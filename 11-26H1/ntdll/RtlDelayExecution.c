/*
 * XREFs of RtlDelayExecution @ 0x1800B9F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

NTSTATUS __cdecl RtlDelayExecution(BOOLEAN Alertable, PLARGE_INTEGER DelayInterval)
{
  struct _TEB *v2; // rdi
  NTSTATUS v5; // ebx
  NTSTATUS result; // eax
  unsigned int SpinCallCount; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  PerformanceCounter.QuadPart = 0LL;
  if ( !DelayInterval->QuadPart && (dword_1801CBECC || dword_1801CBEC8) )
  {
    ++v2->SpinCallCount;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( PerformanceCounter.QuadPart - v2->LastSleepCounter < (unsigned int)SmtDelayedConfiguration )
    {
      SpinCallCount = v2->SpinCallCount;
      if ( SpinCallCount >= dword_1801CBEC4 )
      {
        if ( dword_1801CBECC )
          v8 = dword_1801CBECC * (SpinCallCount - dword_1801CBEC4);
        else
          v8 = 0;
        v9 = dword_1801CBEC8 + v8;
        if ( v9 > dword_1801CBED0 )
          v9 = dword_1801CBED0;
        v10 = 10 * v9 / MEMORY[0x7FFE02D6];
        if ( (_DWORD)v10 )
        {
          do
          {
            _mm_pause();
            --v10;
          }
          while ( v10 );
        }
      }
    }
    v5 = ZwDelayExecution(Alertable, DelayInterval);
    RtlQueryPerformanceCounter(&PerformanceCounter);
    v2->LastSleepCounter = PerformanceCounter.QuadPart;
  }
  else
  {
    v5 = ZwDelayExecution(Alertable, DelayInterval);
  }
  result = v5;
  if ( v5 != 1073741860 )
    v2->SpinCallCount = 0;
  return result;
}
