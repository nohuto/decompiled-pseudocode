/*
 * XREFs of PpmUpdateProcessorIdleAccounting @ 0x1402F9444
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmUpdateProcessorIdleAccounting(__int64 *a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r11
  unsigned int v6; // ecx

  result = *a1;
  v5 = a1[1] + ((unsigned __int64)*(unsigned int *)(*a1 + 28) << 10);
  a1[2] += a2;
  *(_QWORD *)(v5 + 40) += a2;
  v6 = 0;
  if ( a3 )
  {
    ++*(_DWORD *)(v5 + 48);
  }
  else if ( a4 < 0 )
  {
    result = (unsigned int)(*(_DWORD *)(v5 + 52) + 1);
    *(_DWORD *)(v5 + 52) = result;
  }
  else
  {
    ++*(_DWORD *)(v5 + 56);
    result = (__int64)&PpmIdleIntervalLimits;
    while ( a2 >= *(_QWORD *)result )
    {
      ++v6;
      result += 24LL;
      if ( v6 >= 0x1A )
      {
        ++*(_DWORD *)(v5 + 60);
        goto LABEL_9;
      }
    }
    result = 32LL * v6;
    *(_QWORD *)(result + v5 + 232) += a2;
    ++*(_DWORD *)(result + v5 + 256);
    if ( a2 < *(_QWORD *)(result + v5 + 240) )
      *(_QWORD *)(result + v5 + 240) = a2;
    if ( a2 > *(_QWORD *)(result + v5 + 248) )
      *(_QWORD *)(result + v5 + 248) = a2;
LABEL_9:
    if ( a2 < *(_QWORD *)(v5 + 64) )
      *(_QWORD *)(v5 + 64) = a2;
    if ( a2 > *(_QWORD *)(v5 + 72) )
      *(_QWORD *)(v5 + 72) = a2;
  }
  return result;
}
