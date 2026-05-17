/*
 * XREFs of RtlGetMultiTimePrecise @ 0x180077A60
 * Callers:
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x1800763E0 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18000E5E0 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x180077C30 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(unsigned __int64 *a1, int a2, int *a3)
{
  char v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // ebp
  int v8; // esi
  __int64 v9; // rdx
  __int64 TickLock; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  int v13; // r14d
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+28h] [rbp-70h] BYREF
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  unsigned __int64 v21; // [rsp+40h] [rbp-58h]
  char v23; // [rsp+A8h] [rbp+10h]
  int v25; // [rsp+B8h] [rbp+20h]

  v23 = a2;
  v3 = 0;
  v18 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    v6 = RtlpHypervisorSharedUserVa;
    v7 = a2 & 4;
    v25 = v7;
    v8 = a2 & 2;
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(2147353408LL);
      if ( v7 )
      {
        v9 = MEMORY[0x7FFE0358];
        v4 = MEMORY[0x7FFE0348];
        v3 = MEMORY[0x7FFE0368];
        v5 = MEMORY[0x7FFE0014];
        v21 = MEMORY[0x7FFE0358];
      }
      if ( v8 && v6 )
      {
        do
        {
          do
          {
            v15 = *(_QWORD *)(v6 + 24);
            v16 = MEMORY[0x7FFE03B8];
            v20 = MEMORY[0x7FFE03B8];
            v19 = v15;
            RtlQueryPerformanceCounter(&v18, v9);
          }
          while ( v19 != *(_QWORD *)(v6 + 24) );
        }
        while ( v16 != MEMORY[0x7FFE03B8] );
        v7 = v25;
      }
      else
      {
        RtlQueryPerformanceCounter(&v18, v9);
      }
      if ( MEMORY[0x7FFE0340] == TickLock )
        break;
      _mm_pause();
    }
    v11 = 0LL;
    v12 = v18;
    v13 = 0;
    if ( (v23 & 1) != 0 )
    {
      *a1 = v18;
      v13 = 1;
    }
    if ( v8 && v19 )
    {
      a1[1] = v12 + v19 - v20;
      v13 |= 2u;
    }
    if ( v7 )
    {
      if ( v12 > v4 )
      {
        v17 = v12 - v4 - 1;
        if ( v3 )
          v17 <<= v3;
        v11 = ((unsigned __int64)v17 * (unsigned __int128)v21) >> 64;
      }
      v13 |= 4u;
      a1[2] = v11 + v5;
    }
    *a3 = v13;
    return 0LL;
  }
  else
  {
    *a3 = 0;
    return 0LL;
  }
}
