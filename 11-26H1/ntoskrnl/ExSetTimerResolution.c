/*
 * XREFs of ExSetTimerResolution @ 0x14040D0D0
 * Callers:
 *     PspReadDfssConfigurationValues @ 0x140617678 (PspReadDfssConfigurationValues.c)
 *     DifExSetTimerResolutionWrapper @ 0x1406586C0 (DifExSetTimerResolutionWrapper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x14040D2D0 (PoTraceSystemTimerResolutionKernel.c)
 *     ExpUpdateTimerResolution @ 0x140530A54 (ExpUpdateTimerResolution.c)
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
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink);
  v6 = 0LL;
  v10 = v4;
  if ( SetResolution )
  {
    if ( ++LODWORD(ExpSysDbgLock.Timer.Dpc) == 1 || DesiredTime < LODWORD(ExpSysDbgLock.Timer.TimerListEntry.Flink) )
    {
      LODWORD(ExpSysDbgLock.Timer.TimerListEntry.Flink) = DesiredTime;
      v6 = DesiredTime;
      KeNonHrTimeIncrement = DesiredTime;
LABEL_7:
      LOBYTE(v5) = SetResolution;
      return ExpUpdateTimerResolution(v5, v6, &v10);
    }
  }
  else if ( LODWORD(ExpSysDbgLock.Timer.Dpc) )
  {
    v9 = LODWORD(ExpSysDbgLock.Timer.Dpc) == 1;
    v5 = (unsigned int)--LODWORD(ExpSysDbgLock.Timer.Dpc);
    if ( v9 )
    {
      LODWORD(ExpSysDbgLock.Timer.TimerListEntry.Flink) = 0;
      KeNonHrTimeIncrement = KeMaximumIncrement;
      goto LABEL_7;
    }
  }
  v7 = KeNonHrTimeIncrement;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.Timer.TimerListEntry.Blink, v4);
  return v7;
}
