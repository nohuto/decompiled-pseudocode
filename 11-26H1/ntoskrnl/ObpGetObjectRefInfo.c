/*
 * XREFs of ObpGetObjectRefInfo @ 0x1407C4B04
 * Callers:
 *     ObpInitializeObjectRefInfo @ 0x1407C4CA8 (ObpInitializeObjectRefInfo.c)
 *     ObpObjectRefInfoAddTrace @ 0x1407C4E94 (ObpObjectRefInfoAddTrace.c)
 * Callees:
 *     ObpTraceAllocateMemory @ 0x14052F738 (ObpTraceAllocateMemory.c)
 *     ObpTraceFreeMemory @ 0x140530A70 (ObpTraceFreeMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned int *__fastcall ObpGetObjectRefInfo(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rbp
  unsigned int *v3; // rsi
  unsigned int *result; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ecx
  unsigned int *v7; // rbx

  v1 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
  v2 = (unsigned int)v1;
  v3 = 0LL;
  for ( result = (unsigned int *)*((_QWORD *)qword_140F13228 + v1); result; result = (unsigned int *)*((_QWORD *)result + 1) )
  {
    v5 = result;
    if ( *(_QWORD *)result == a1 )
    {
      v6 = result[9];
      if ( result[8] >= v6 )
      {
        result = (unsigned int *)ObpTraceAllocateMemory(18LL * (v6 + 512) + 40);
        v7 = result;
        if ( result )
        {
          memmove(result, v5, 18LL * v5[8] + 40);
          v7[9] += 512;
          if ( v3 )
            *((_QWORD *)v3 + 1) = v7;
          else
            *((_QWORD *)qword_140F13228 + v2) = v7;
          ObpTraceFreeMemory(v5);
          return v7;
        }
      }
      return result;
    }
    v3 = result;
  }
  return result;
}
