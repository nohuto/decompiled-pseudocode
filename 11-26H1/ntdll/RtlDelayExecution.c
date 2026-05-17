/*
 * XREFs of RtlDelayExecution @ 0x1800BCA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlDelayExecution(__int64 a1, _QWORD *a2)
{
  struct _TEB *v2; // rdi
  unsigned __int8 v4; // si
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int SpinCallCount; // ecx
  int v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  v4 = a1;
  v12 = 0LL;
  if ( !*a2 && (dword_1801CCE8C || dword_1801CCE88) )
  {
    ++v2->SpinCallCount;
    RtlQueryPerformanceCounter(&v12, (__int64)a2);
    if ( v12 - v2->LastSleepCounter < (unsigned int)SmtDelayedConfiguration )
    {
      SpinCallCount = v2->SpinCallCount;
      if ( SpinCallCount >= dword_1801CCE84 )
      {
        if ( dword_1801CCE8C )
          v8 = dword_1801CCE8C * (SpinCallCount - dword_1801CCE84);
        else
          v8 = 0;
        v9 = dword_1801CCE88 + v8;
        if ( v9 > dword_1801CCE90 )
          v9 = dword_1801CCE90;
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
    v5 = ZwDelayExecution(v4, a2);
    RtlQueryPerformanceCounter(&v12, v11);
    v2->LastSleepCounter = v12;
  }
  else
  {
    v5 = ZwDelayExecution(a1, a2);
  }
  result = v5;
  if ( v5 != 1073741860 )
    v2->SpinCallCount = 0;
  return result;
}
