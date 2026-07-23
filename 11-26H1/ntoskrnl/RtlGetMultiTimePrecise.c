/*
 * XREFs of RtlGetMultiTimePrecise @ 0x1404401A0
 * Callers:
 *     EtwpGetTimeStampAndQpcDelta @ 0x1404400EC (EtwpGetTimeStampAndQpcDelta.c)
 *     RtlConvertHostPerfCounterToPerfCounter @ 0x14061A690 (RtlConvertHostPerfCounterToPerfCounter.c)
 *     EtwpInitializeTimeStamp @ 0x140AB2428 (EtwpInitializeTimeStamp.c)
 *     EtwpFixBootSystemTime @ 0x140CE6BB0 (EtwpFixBootSystemTime.c)
 *     EtwpInitializeBootTimeStamps @ 0x140CE72F0 (EtwpInitializeBootTimeStamps.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x140440370 (RtlBeginReadTickLock.c)
 *     HvlGetSharedPageVa @ 0x140440388 (HvlGetSharedPageVa.c)
 */

__int64 __fastcall RtlGetMultiTimePrecise(LARGE_INTEGER *a1, int a2, int *a3)
{
  __int64 v3; // rbx
  char v4; // bp
  __int64 v5; // rsi
  char v6; // r13
  int v7; // r14d
  __int64 SharedPageVa; // r12
  __int64 v9; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v11; // edi
  LONGLONG v13; // rdx
  __int64 v14; // [rsp+28h] [rbp-70h]
  unsigned __int64 v15; // [rsp+30h] [rbp-68h]
  unsigned __int64 v16; // [rsp+38h] [rbp-60h]
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 TickLock; // [rsp+48h] [rbp-50h]
  char v20; // [rsp+A8h] [rbp+10h]

  v20 = a2;
  v3 = 0LL;
  v4 = a2;
  v15 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v14 = 0LL;
  v16 = 0LL;
  if ( a2 )
  {
    v7 = a2 & 4;
    SharedPageVa = HvlGetSharedPageVa();
    while ( 1 )
    {
      TickLock = RtlBeginReadTickLock(0xFFFFF78000000340uLL);
      if ( v7 )
      {
        v15 = MEMORY[0xFFFFF78000000348];
        v16 = MEMORY[0xFFFFF78000000358];
        v6 = MEMORY[0xFFFFF78000000368];
        v17 = MEMORY[0xFFFFF78000000014];
      }
      if ( (v4 & 2) != 0 && SharedPageVa )
      {
        do
        {
          do
          {
            v5 = *(_QWORD *)(SharedPageVa + 24);
            v9 = MEMORY[0xFFFFF780000003B8];
            v14 = MEMORY[0xFFFFF780000003B8];
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
          }
          while ( v5 != *(_QWORD *)(SharedPageVa + 24) );
        }
        while ( v9 != MEMORY[0xFFFFF780000003B8] );
        v7 = v4 & 4;
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      }
      if ( MEMORY[0xFFFFF78000000340] == TickLock )
        break;
      _mm_pause();
    }
    v11 = 0;
    if ( (v20 & 1) != 0 )
    {
      *a1 = PerformanceCounter;
      v11 = 1;
    }
    if ( (v4 & 2) != 0 && v5 )
    {
      a1[1].QuadPart = PerformanceCounter.QuadPart + v5 - v14;
      v11 |= 2u;
    }
    if ( (v4 & 4) != 0 )
    {
      if ( PerformanceCounter.QuadPart > v15 )
      {
        v13 = PerformanceCounter.QuadPart - v15 - 1;
        if ( v6 )
          v13 <<= v6;
        v3 = ((unsigned __int64)v13 * (unsigned __int128)v16) >> 64;
      }
      a1[2].QuadPart = v3 + v17;
      v11 |= 4u;
    }
    *a3 = v11;
  }
  else
  {
    *a3 = 0;
  }
  return 0LL;
}
