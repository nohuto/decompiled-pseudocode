/*
 * XREFs of ExSetTimerResolution @ 0x140418BA0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x140614838 (PspReadDfssConfigurationValues.c)
 *     DifExSetTimerResolutionWrapper @ 0x140654AE0 (DifExSetTimerResolutionWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140418DA0 (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x14052E534 (ExpUpdateTimerResolution.c)
 */

ULONG __stdcall ExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG v7; // ebx
  bool v9; // zf
  KIRQL v10; // [rsp+38h] [rbp+10h] BYREF

  PoTraceSystemTimerResolutionKernel(SetResolution != 0 ? DesiredTime : 0, 1381258053LL, 0LL);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread);
  v6 = 0LL;
  v10 = v4;
  if ( SetResolution )
  {
    if ( ++*(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152] == 1
      || DesiredTime < *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156] )
    {
      *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156] = DesiredTime;
      v6 = DesiredTime;
      KeNonHrTimeIncrement = DesiredTime;
LABEL_7:
      LOBYTE(v5) = SetResolution;
      return ExpUpdateTimerResolution(v5, v6, &v10);
    }
  }
  else if ( *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152] )
  {
    v9 = *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152] == 1;
    v5 = (unsigned int)--*(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152];
    if ( v9 )
    {
      *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156] = 0;
      KeNonHrTimeIncrement = KeMaximumIncrement;
      goto LABEL_7;
    }
  }
  v7 = KeNonHrTimeIncrement;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v4);
  return v7;
}
