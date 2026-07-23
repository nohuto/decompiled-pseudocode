/*
 * XREFs of KiEndInterruptCycleAccumulation @ 0x14021E2A0
 * Callers:
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x14072EC20 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x14072F010 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14072F400 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x14072F7F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x14072FBE0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1407307F0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x140732A70 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1407333C0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1407342D0 (KiIpiInterrupt.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalRequestSoftwareInterrupt @ 0x14021F9A0 (HalRequestSoftwareInterrupt.c)
 */

char __fastcall KiEndInterruptCycleAccumulation(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // r11
  LARGE_INTEGER PerformanceCounter; // rax
  char v10; // cl
  LARGE_INTEGER v11; // rdx
  unsigned __int64 v12; // rdx
  LARGE_INTEGER v13; // r8
  unsigned __int128 v14; // rax
  int v15; // edx
  struct _KTHREAD *CurrentThread; // r10
  UCHAR Size; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // edx
  unsigned __int16 *v21; // r8
  __int64 v22; // rdx
  _BYTE *SchedulerAssist; // rax
  _QWORD *SparePtr; // r10
  __int64 v25; // r11
  __int64 v26; // r8
  unsigned int *v27; // r9
  _QWORD *v28; // r10
  __int64 v29; // rdi
  bool v31; // zf

  v3 = a1;
  if ( *(_BYTE *)(a1 + 32) != 1 )
    goto LABEL_32;
  v4 = 0;
  v5 = 0LL;
  v6.QuadPart = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_BYTE *)(a1 + 34524) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = *(_BYTE *)(v3 + 172);
    v6 = PerformanceCounter;
    v11 = PerformanceCounter;
    if ( v10 )
      v11.QuadPart = PerformanceCounter.QuadPart << v10;
    v5 = ((unsigned __int64)v11.QuadPart * (unsigned __int128)*(unsigned __int64 *)(v3 + 176)) >> 64;
    v12 = *(_QWORD *)(v3 + 34552);
    v7 = PerformanceCounter.QuadPart - v12;
    v8 = v5 - *(_QWORD *)(v3 + 34432);
    if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
    {
      v13 = PerformanceCounter;
      if ( MEMORY[0xFFFFF78000000369] )
      {
        v14 = (v12 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360];
        v13.QuadPart = v6.QuadPart << MEMORY[0xFFFFF78000000369];
      }
      else
      {
        v14 = v12 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      }
      v15 = ((unsigned __int64)(((((unsigned __int64)v13.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64)
                               * (unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount)
          - ((unsigned __int64)((*((unsigned __int64 *)&v14 + 1)
                               * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount);
      if ( v15 )
      {
        *(_DWORD *)(v3 + 34372) += v15;
        *(_DWORD *)(v3 + 34384) += v15;
      }
    }
  }
  *(_QWORD *)(v3 + 34560) += v7;
  a1 = v8 + *(_QWORD *)(v3 + 34680);
  *(_QWORD *)(v3 + 34680) = a1;
  *(LARGE_INTEGER *)(v3 + 34552) = v6;
  *(_QWORD *)(v3 + 34432) = v5;
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 8) + 2LL) & 0x72) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    Size = CurrentThread->Header.Size;
    if ( (Size & 0x20) != 0 )
    {
      v18 = *(_QWORD *)(v3 + 35264);
      v19 = *(_QWORD *)(v3 + 35272);
      if ( v18 && v19 )
      {
        v20 = *(_DWORD *)(v19 + 148);
        if ( v20 == -1 )
        {
          v20 = *(_DWORD *)(v19 + 160);
        }
        else if ( v20 >= *(_DWORD *)(v18 + 536) )
        {
          v20 = *(_DWORD *)(v18 + 536);
        }
      }
      else
      {
        v20 = 100;
      }
      v21 = (unsigned __int16 *)(v3 + 35468);
      do
      {
        if ( v20 <= *v21 )
          break;
        ++v4;
        ++v21;
      }
      while ( v4 < 3 );
      v22 = (*(_BYTE *)(v3 + 35352) != 0 ? 8 : 0) + 16 * (v4 + 2168LL);
      a1 = v8 + *(_QWORD *)(v22 + v3);
      *(_QWORD *)(v22 + v3) = a1;
    }
    if ( (Size & 0x40) != 0 )
    {
      SchedulerAssist = CurrentThread->SchedulerAssist;
      if ( SchedulerAssist )
        SchedulerAssist[64] = 1;
    }
    *(_BYTE *)(v3 + 32) = 0;
    if ( (Size & 2) != 0 )
    {
      SparePtr = CurrentThread->WaitBlock[0].SparePtr;
      v25 = SparePtr[4];
      if ( v25 )
      {
        v26 = 1LL;
        if ( KiHwCountersCount )
        {
          v27 = (unsigned int *)&KiHwCounters;
          v28 = SparePtr + 6;
          v29 = (unsigned int)KiHwCountersCount;
          do
          {
            if ( (v25 & v26) != 0 )
            {
              a1 = *v27;
              *v28 = __readpmc(a1);
            }
            v26 *= 2LL;
            v28 += 3;
            ++v27;
            --v29;
          }
          while ( v29 );
        }
      }
    }
  }
  else
  {
LABEL_32:
    --*(_BYTE *)(v3 + 32);
  }
  if ( *(_BYTE *)(v3 + 32) )
    return 0;
  if ( !*(_BYTE *)(v3 + 6) )
    return 0;
  v31 = *(_BYTE *)(v3 + 7) == 0;
  *(_BYTE *)(v3 + 6) = 0;
  if ( !v31 )
    return 0;
  if ( a2 < 2u )
    return 1;
  LOBYTE(a1) = 2;
  HalRequestSoftwareInterrupt(a1);
  return 0;
}
