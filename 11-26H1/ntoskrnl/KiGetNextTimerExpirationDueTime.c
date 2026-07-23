/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1404F5E20
 * Callers:
 *     KeEstimateClockTickDuration @ 0x1404F5AD4 (KeEstimateClockTickDuration.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405EFFA4 (KePrepareClockTimerForPlatformIdle.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KiFindNextTimerDueTime @ 0x14050F30C (KiFindNextTimerDueTime.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x140532230 (ExGetNextWakeTimeForDeepSleep.c)
 *     KiGetNextTimer2ExpirationDueTime @ 0x1405FA798 (KiGetNextTimer2ExpirationDueTime.c)
 *     KiGetPastDueIRTimerInfo @ 0x1405FA844 (KiGetPastDueIRTimerInfo.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned __int64 *a7,
        int *a8,
        _QWORD *a9)
{
  __int64 v9; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // edi
  int v15; // r15d
  __int64 NextTimerDueTime; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 NextWakeTimeForDeepSleep; // rsi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _QWORD *result; // rax
  char v24; // [rsp+30h] [rbp-20h] BYREF
  char v25[7]; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-18h] BYREF
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-8h] BYREF
  char v29; // [rsp+90h] [rbp+40h] BYREF
  char v30; // [rsp+98h] [rbp+48h]

  v30 = a2;
  v9 = a1;
  v27 = -1LL;
  v11 = a3;
  LOBYTE(a1) = 0;
  v25[0] = 0;
  v12 = *(_QWORD *)(v9 + 16);
  v13 = 0LL;
  v28 = 0LL;
  v14 = 0;
  v26 = 0LL;
  v15 = 0;
  v29 = 0;
  LOBYTE(a3) = 0;
  v24 = 0;
  if ( v12 )
  {
    v14 = 1;
LABEL_48:
    LOBYTE(a1) = v29;
    goto LABEL_49;
  }
  if ( !*(_BYTE *)(v9 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v14 = 2;
    goto LABEL_49;
  }
  v13 = -1LL;
  if ( a4 )
  {
    v15 = 12;
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1, a2, a3);
  }
  else
  {
    LOBYTE(a3) = a2;
    v14 = 4;
    NextTimerDueTime = KiFindNextTimerDueTime(v9, v11, a3, &v27);
    NextWakeTimeForDeepSleep = v27;
    v13 = NextTimerDueTime;
  }
  if ( KiGroupSchedulingEnabled )
  {
    if ( v30 )
    {
      v17 = 0LL;
      v18 = 1LL;
      while ( (unsigned __int16)v17 < KiGroupSchedulingOverQuotaMask[0] )
      {
        if ( *(_QWORD *)&KiGroupSchedulingOverQuotaMask[4 * (unsigned __int16)v17 + 4] )
          goto LABEL_17;
        LOWORD(v17) = v17 + 1;
      }
    }
    else if ( (unsigned int)KeCheckProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(_DWORD *)(v9 + 36)) )
    {
LABEL_17:
      v18 = (__int64)KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink * KeMaximumIncrement;
      if ( v18 < NextWakeTimeForDeepSleep )
      {
        NextWakeTimeForDeepSleep = (__int64)KiSupervisorXStateFeaturesLock.Timer.Header.WaitListHead.Flink
                                 * KeMaximumIncrement;
        v15 = 5;
      }
    }
  }
  if ( *(_BYTE *)(v9 + 33) )
  {
    LOBYTE(v17) = a6;
    LOBYTE(v18) = a4;
    KiGetNextTimer2ExpirationDueTime(v18, v17, (unsigned int)&v26, (unsigned int)&v28, (__int64)v25);
    if ( v26 < v13 )
    {
      v13 = v26;
      v14 = 6;
    }
    v18 = v28;
    if ( v28 < NextWakeTimeForDeepSleep )
    {
      NextWakeTimeForDeepSleep = v28;
      if ( v25[0] )
      {
        LOBYTE(v17) = a6;
        v15 = 7;
        KiGetPastDueIRTimerInfo(v28, v17, &v29, &v24);
      }
      else
      {
        v15 = 6;
      }
    }
  }
  if ( !KiGlobalTimerResolutionRequests )
  {
    v17 = (unsigned int)KeNonHrTimeIncrement;
    v18 = (unsigned int)(KeMinimumIncrement - 1);
    v20 = (unsigned int)KeNonHrTimeIncrement - v18 + KiLastNonHrTimerExpiration;
    if ( KePseudoHrTimeIncrement < (unsigned int)KeNonHrTimeIncrement && NextWakeTimeForDeepSleep < v20 )
    {
      v17 = NextWakeTimeForDeepSleep + (unsigned int)KeNonHrTimeIncrement;
      NextWakeTimeForDeepSleep = (unsigned int)KePseudoHrTimeIncrement + v11;
      if ( NextWakeTimeForDeepSleep < v20 )
      {
        v21 = (unsigned int)KePseudoHrTimeIncrement + v11;
        do
        {
          v21 += (unsigned int)KePseudoHrTimeIncrement;
          if ( v21 > v17 )
            break;
          NextWakeTimeForDeepSleep = v21;
        }
        while ( v21 < v20 );
      }
    }
  }
  if ( NextWakeTimeForDeepSleep < v13 )
  {
    v13 = NextWakeTimeForDeepSleep;
    v14 = v15;
  }
  if ( v30 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( v11 < v13 )
        {
          v18 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v13 - v11 > v18 )
          {
            v13 = v18 + v11;
            v14 = 8;
          }
        }
      }
    }
  }
  if ( !*(_BYTE *)(v9 + 33) || (LOBYTE(v18) = a5, (v22 = guard_dispatch_icall_no_overrides(v18, v17)) == 0) )
  {
    LOBYTE(a3) = v24;
    goto LABEL_48;
  }
  LOBYTE(a1) = v29;
  LOBYTE(a3) = v24;
  if ( v13 > v22 )
  {
    v13 = v22;
    v14 = 9;
    if ( v11 > v22 )
      v13 = v11;
  }
LABEL_49:
  *a7 = v13;
  *a8 = v14;
  result = a9;
  if ( a9 )
  {
    *a9 = 0LL;
    *(_DWORD *)result = v14;
    if ( v14 == 7 )
    {
      *((_BYTE *)result + 4) = a1;
      *((_BYTE *)result + 5) = a3;
    }
    else if ( !v14 )
    {
      *(_DWORD *)result = 11;
    }
  }
  return result;
}
