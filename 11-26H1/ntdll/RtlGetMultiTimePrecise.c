/*
 * XREFs of RtlGetMultiTimePrecise @ 0x180066280
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x180064C00 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     EtwpInitLoggerContext @ 0x180065D70 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x180059D10 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x180066450 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  char v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // esi
  __int64 TickLock; // rdi
  __int64 v10; // rbx
  LARGE_INTEGER v11; // rdx
  int v12; // r14d
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  unsigned __int64 v20; // [rsp+40h] [rbp-58h]
  char v22; // [rsp+A8h] [rbp+10h]
  int v24; // [rsp+B8h] [rbp+20h]

  v22 = a2;
  v3 = 0;
  PerformanceCounter.QuadPart = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( a2 )
  {
    v6 = RtlpHypervisorSharedUserVa;
    v7 = a2 & 4;
    v24 = v7;
    v8 = a2 & 2;
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(2147353408LL);
      if ( v7 )
      {
        v4 = MEMORY[0x7FFE0348];
        v3 = MEMORY[0x7FFE0368];
        v5 = MEMORY[0x7FFE0014];
        v20 = MEMORY[0x7FFE0358];
      }
      if ( v8 && v6 )
      {
        do
        {
          do
          {
            v14 = *(_QWORD *)(v6 + 24);
            v15 = MEMORY[0x7FFE03B8];
            v19 = MEMORY[0x7FFE03B8];
            v18 = v14;
            RtlQueryPerformanceCounter(&PerformanceCounter);
          }
          while ( v18 != *(_QWORD *)(v6 + 24) );
        }
        while ( v15 != MEMORY[0x7FFE03B8] );
        v7 = v24;
      }
      else
      {
        RtlQueryPerformanceCounter(&PerformanceCounter);
      }
      if ( MEMORY[0x7FFE0340] == TickLock )
        break;
      _mm_pause();
    }
    v10 = 0LL;
    v11 = PerformanceCounter;
    v12 = 0;
    if ( (v22 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v12 = 1;
    }
    if ( v8 && v18 )
    {
      a1[1].QuadPart = v11.QuadPart + v18 - v19;
      v12 |= 2u;
    }
    if ( v7 )
    {
      if ( v11.QuadPart > v4 )
      {
        v16 = v11.QuadPart - v4 - 1;
        if ( v3 )
          v16 <<= v3;
        v10 = ((unsigned __int64)v16 * (unsigned __int128)v20) >> 64;
      }
      v12 |= 4u;
      a1[2].QuadPart = v10 + v5;
    }
    *a3 = v12;
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
