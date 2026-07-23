/*
 * XREFs of KiUpdateTimeAssist @ 0x14021FA58
 * Callers:
 *     KeClockInterruptNotify @ 0x140223050 (KeClockInterruptNotify.c)
 *     KeSynchronizeTimeToQpc @ 0x140511E50 (KeSynchronizeTimeToQpc.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiComputeNewSystemTime @ 0x140464310 (KiComputeNewSystemTime.c)
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 *     RtlWriteTryAcquireTickLock @ 0x14049199C (RtlWriteTryAcquireTickLock.c)
 */

__int64 __fastcall KiUpdateTimeAssist(LARGE_INTEGER *a1, char a2, __int64 *a3, _QWORD *a4)
{
  __int64 *v4; // rdi
  _QWORD *v5; // r15
  __int64 *v6; // r13
  LARGE_INTEGER *v7; // r12
  __int64 v8; // rsi
  __int64 *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r10
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  LARGE_INTEGER PerformanceCounter; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 v20; // rdx
  unsigned __int128 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 result; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int v29; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v30; // [rsp+90h] [rbp+18h]
  _QWORD *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  v4 = (__int64 *)(MmWriteableSharedUserData + 832);
  v29 = 0;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = 1LL;
  if ( a2 )
    goto LABEL_14;
  v9 = &KiInterruptTimeErrorAccumulator;
  if ( KiTimeUpdateTryAcquireTickLock )
    v9 = 0LL;
  do
  {
    while ( 1 )
    {
      v10 = *v4;
      if ( (*v4 & 1) == 0 )
        break;
      _mm_pause();
    }
    *(LARGE_INTEGER *)&v12 = KeQueryPerformanceCounter(0LL);
    v11 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)&v12 + 1) = 0LL;
    if ( (unsigned __int64)v12 > MEMORY[0xFFFFF78000000350] )
    {
      v13 = v12 - MEMORY[0xFFFFF78000000350];
      if ( MEMORY[0xFFFFF78000000369] )
        v13 <<= MEMORY[0xFFFFF78000000369];
      v12 = v13 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      if ( v9 )
      {
        *v9 += v12;
        if ( *v9 < (unsigned __int64)v12 )
          ++*((_QWORD *)&v12 + 1);
      }
    }
    v14 = v11 + *((_QWORD *)&v12 + 1);
  }
  while ( *v4 != v10 );
  v5 = v31;
  v7 = a1;
  v6 = v30;
  if ( *((_QWORD *)&v12 + 1) > stru_140FC11F0.NpxState )
  {
    if ( KiTimeUpdateTryAcquireTickLock )
    {
      while ( !(unsigned __int8)RtlWriteTryAcquireTickLock(v4) )
      {
        while ( (*v4 & 1) != 0 )
          KeYieldProcessorEx(&v29);
        v26 = MEMORY[0xFFFFF78000000008];
        *v6 = MEMORY[0xFFFFF78000000008];
        if ( v26 >= v14 )
          goto LABEL_29;
      }
      goto LABEL_15;
    }
LABEL_14:
    RtlWriteAcquireTickLock(v4);
LABEL_15:
    if ( v7 )
      PerformanceCounter = *v7;
    else
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = ((__int64 (__fastcall *)(_QWORD))KiComputeNewSystemTime)((LARGE_INTEGER)PerformanceCounter.QuadPart);
    v18 = 0LL;
    v19 = v16;
    if ( v17 > MEMORY[0xFFFFF78000000350] )
    {
      v20 = v17 - MEMORY[0xFFFFF78000000350];
      if ( MEMORY[0xFFFFF78000000369] )
        v20 <<= MEMORY[0xFFFFF78000000369];
      v21 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v18 = *((_QWORD *)&v21 + 1);
      KiInterruptTimeErrorAccumulator += v21;
      if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v21 )
        v18 = *((_QWORD *)&v21 + 1) + 1LL;
    }
    *v6 = MEMORY[0xFFFFF78000000008] + v18;
    *(_DWORD *)(MmWriteableSharedUserData + 28) = HIDWORD(v19);
    *(_QWORD *)(MmWriteableSharedUserData + 20) = v19;
    v22 = *v6;
    *(_DWORD *)(MmWriteableSharedUserData + 16) = HIDWORD(*v6);
    *(_QWORD *)(MmWriteableSharedUserData + 8) = v22;
    *(_QWORD *)(MmWriteableSharedUserData + 840) = v17;
    *(_QWORD *)(MmWriteableSharedUserData + 848) = v17;
    v23 = MEMORY[0xFFFFF78000000320];
    v24 = (unsigned int)KiTickOffset - v18;
    *v5 = MEMORY[0xFFFFF78000000320];
    if ( v24 <= 0 )
    {
      v24 += KeMaximumIncrement;
      if ( v24 <= 0 )
      {
        v27 = (unsigned __int64)(((unsigned __int64)-v24
                                * (unsigned __int128)(unsigned __int64)stru_140FC11F0.SavedApcState.Process) >> 64) >> KiMaximumIncrementShiftCount;
        v8 = v27 + 2;
        LODWORD(v24) = KeMaximumIncrement * (v27 + 1) + v24;
      }
      *v5 = v23 + v8;
      *(_DWORD *)(MmWriteableSharedUserData + 808) = (unsigned __int64)(v23 + v8) >> 32;
      *(_QWORD *)(MmWriteableSharedUserData + 800) = v23 + v8;
    }
    result = *v4 + 1;
    KiTickOffset = v24;
    *v4 = result;
    return result;
  }
  *v30 = MEMORY[0xFFFFF78000000008];
LABEL_29:
  result = MEMORY[0xFFFFF78000000320];
  *v5 = MEMORY[0xFFFFF78000000320];
  return result;
}
