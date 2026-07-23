/*
 * XREFs of EtwpInitializeBootTimeStamps @ 0x140CE72F0
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1404401A0 (RtlGetMultiTimePrecise.c)
 *     KeQueryBootTimeValues @ 0x1404C7020 (KeQueryBootTimeValues.c)
 */

LARGE_INTEGER __fastcall EtwpInitializeBootTimeStamps(char a1)
{
  int v1; // edi
  LARGE_INTEGER SystemTimePrecise; // rax
  __int128 v4; // [rsp+20h] [rbp-20h] BYREF
  LARGE_INTEGER v5; // [rsp+30h] [rbp-10h]
  int v6; // [rsp+50h] [rbp+10h] BYREF
  LARGE_INTEGER v7; // [rsp+58h] [rbp+18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+20h] BYREF

  v7.QuadPart = 0LL;
  v8 = 0LL;
  v5.QuadPart = 0LL;
  v6 = 0;
  v1 = 3;
  v4 = 0LL;
  if ( !a1 )
  {
    KeQueryBootTimeValues(&stru_140F03830.NextProcessor, &v7, &v8);
    v1 = 7;
    stru_140F03830.AffinityVersion = v7.QuadPart - v8;
  }
  RtlGetMultiTimePrecise((LARGE_INTEGER *)&v4, v1, &v6);
  *(_QWORD *)&stru_140F03830.UserAffinityPrimaryGroup = 0LL;
  if ( (v6 & 1) != 0 )
  {
    stru_140F03830.UserAffinity = (_KAFFINITY_EX *)v4;
    if ( (v6 & 2) != 0 )
      *(_QWORD *)&stru_140F03830.UserAffinityPrimaryGroup = *((_QWORD *)&v4 + 1) - v4;
  }
  else
  {
    stru_140F03830.UserAffinity = (_KAFFINITY_EX *)KeQueryPerformanceCounter(0LL).QuadPart;
  }
  stru_140F03830.Process = (_KPROCESS *)__rdtsc();
  if ( (v1 & 4) != 0 )
  {
    if ( (v6 & 4) != 0 )
      SystemTimePrecise = v5;
    else
      SystemTimePrecise = RtlGetSystemTimePrecise();
    *(LARGE_INTEGER *)&stru_140F03830.NextProcessor = SystemTimePrecise;
  }
  return KeQueryPerformanceCounter((PLARGE_INTEGER)&stru_140F03830.CurrentRunTime);
}
