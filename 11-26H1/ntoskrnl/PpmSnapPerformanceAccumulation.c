/*
 * XREFs of PpmSnapPerformanceAccumulation @ 0x14025568C
 * Callers:
 *     PpmGetThroughputInfoCallback @ 0x140254A70 (PpmGetThroughputInfoCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140254FC0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x1404B0470 (PpmCapturePerformanceDistributionCallback.c)
 *     PpmResetPerfTimes @ 0x1404CB840 (PpmResetPerfTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x1402F8238 (PpmUpdateTimeAccumulation.c)
 *     PpmGetIdleGenerationCounter @ 0x140470210 (PpmGetIdleGenerationCounter.c)
 *     PpmGetPmcCounters @ 0x140480D54 (PpmGetPmcCounters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall PpmSnapPerformanceAccumulation(
        LARGE_INTEGER *a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        LARGE_INTEGER *a6)
{
  LARGE_INTEGER *v6; // rbp
  LARGE_INTEGER v9; // r12
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 QuadPart; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v13; // r9
  char result; // al
  unsigned int LowPart; // r12d
  LARGE_INTEGER *v16; // rcx
  unsigned int i; // r10d
  unsigned int v18; // r11d
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rcx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  LARGE_INTEGER *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  LARGE_INTEGER v27; // r8
  LARGE_INTEGER v28; // r11
  LARGE_INTEGER v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  char v32; // r10
  __int64 IdleGenerationCounter; // [rsp+38h] [rbp-70h]
  __int128 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]

  v6 = a1 + 4372;
  v37 = 0LL;
  IdleGenerationCounter = 0LL;
  v9.QuadPart = 0LL;
  v36 = 0LL;
  if ( a3 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    IdleGenerationCounter = PpmGetIdleGenerationCounter(a1);
    result = 0;
    if ( !IdleGenerationCounter )
      return result;
  }
  else
  {
    _disable();
    v29 = KeQueryPerformanceCounter(0LL);
    LOBYTE(v30) = 1;
    PerformanceCounter = v29;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))PpmUpdateTimeAccumulation)(a1, (LARGE_INTEGER)v29.QuadPart, v30);
  }
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  if ( a6 )
  {
    LowPart = a6[6].LowPart;
    memset_0(a6, 0, (int)(112 * LowPart + 56));
    a6[6].LowPart = LowPart;
    QuadPart = 4LL;
    a6[1].QuadPart = a1[4309].QuadPart + a1[4335].QuadPart;
    CurrentPrcb = (struct _KPRCB *)((char *)a1 - (char *)a6);
    v16 = a6 + 2;
    do
    {
      *v16 = *(LARGE_INTEGER *)((char *)&CurrentPrcb->ReadyQueueExpectedRunTime + (_QWORD)v16);
      ++v16;
      --QuadPart;
    }
    while ( QuadPart );
    for ( i = 0; i < 7; ++i )
    {
      LODWORD(v13) = 0;
      do
      {
        v18 = 0;
        if ( LowPart )
        {
          v19 = v13 + 2 * i;
          do
          {
            QuadPart = a1[4310].QuadPart;
            v20 = v18 + KiHgsPlusConfiguration * v19;
            v21 = v18 + a6[6].LowPart * v19;
            ++v18;
            a6[v21 + 7] = *(LARGE_INTEGER *)(QuadPart + 8 * v20);
          }
          while ( v18 < LowPart );
        }
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < 2 );
    }
    v9.QuadPart = 0LL;
  }
  if ( !a3 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    QuadPart = (__int64)CurrentPrcb->SchedulerAssist;
    if ( QuadPart )
    {
      _m_prefetchw((const void *)QuadPart);
      v22 = *(_DWORD *)QuadPart;
      do
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)QuadPart, v22 & 0xFFDFFFFF, v22);
      }
      while ( v23 != v22 );
      if ( (v22 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, QuadPart, CurrentPrcb, v13);
    }
    _enable();
  }
  v24 = (LARGE_INTEGER *)&v36;
  LOBYTE(QuadPart) = a2;
  if ( a1[4390].LowPart != 3 )
    v24 = 0LL;
  LOBYTE(CurrentPrcb) = a3;
  result = PpmUpdatePerformanceFeedback((_DWORD)a1, QuadPart, (_DWORD)CurrentPrcb, 0, (__int64)v24);
  if ( result )
  {
    if ( a4 )
    {
      LOBYTE(v26) = 1;
      LOBYTE(v25) = a3;
      PpmGetPmcCounters(a1, v25, v26);
    }
    if ( v24 )
    {
      PerformanceCounter = *v24;
      v27 = v24[1];
      v28 = v24[2];
    }
    else
    {
      v9 = a1[4367];
      v27 = a1[4362];
      v28 = v6[2];
      if ( PerformanceCounter.QuadPart <= (unsigned __int64)v9.QuadPart )
        PerformanceCounter = a1[4367];
    }
    if ( v6[3].QuadPart )
    {
      v31 = v6[8].QuadPart;
    }
    else if ( v6[4].QuadPart )
    {
      v31 = v6[9].QuadPart;
    }
    else
    {
      v31 = 100 * v6[6].QuadPart;
    }
    *(_QWORD *)(a5 + 24) = v31;
    if ( v6[4].QuadPart )
      v31 = v6[9].QuadPart;
    *(_QWORD *)(a5 + 32) = v31;
    *(LARGE_INTEGER *)(a5 + 40) = v6[11];
    *(LARGE_INTEGER *)(a5 + 16) = v6[16];
    *(_DWORD *)(a5 + 48) = a1[1803].HighPart;
    if ( a3 )
    {
      if ( IdleGenerationCounter != PpmGetIdleGenerationCounter(a1) )
        return v32;
      if ( !v24 )
        v27.QuadPart += PerformanceCounter.QuadPart - v9.QuadPart;
    }
    *(LARGE_INTEGER *)a5 = PerformanceCounter;
    *(_QWORD *)(a5 + 8) = PerformanceCounter.QuadPart - v27.QuadPart;
    if ( a6 )
      *a6 = v28;
    return 1;
  }
  return result;
}
