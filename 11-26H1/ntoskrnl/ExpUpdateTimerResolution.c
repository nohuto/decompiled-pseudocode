/*
 * XREFs of ExpUpdateTimerResolution @ 0x14052E534
 * Callers:
 *     ExSetTimerResolution @ 0x140418BA0 (ExSetTimerResolution.c)
 *     ExUpdateTimerResolutionPolicy @ 0x140A6677C (ExUpdateTimerResolutionPolicy.c)
 *     NtSetTimerResolution @ 0x140A667F0 (NtSetTimerResolution.c)
 * Callees:
 *     PoTraceSystemTimerResolutionUpdate @ 0x140255E78 (PoTraceSystemTimerResolutionUpdate.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExpUpdateTimerConfiguration @ 0x140379D60 (ExpUpdateTimerConfiguration.c)
 */

__int64 __fastcall ExpUpdateTimerResolution(char a1, unsigned int a2, KIRQL *a3)
{
  KIRQL v4; // al
  KIRQL v5; // r9
  unsigned __int8 *i; // rcx
  int v7; // ebx
  __int64 result; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( a3 )
  {
    v5 = *a3;
  }
  else
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread);
    a2 = v9;
    v5 = v4;
  }
  if ( a1 )
  {
    if ( a2 >= ExpLastRequestedTime || a2 >= KeMaximumIncrement )
    {
LABEL_23:
      KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v5);
      return (unsigned int)KePseudoHrTimeIncrement;
    }
  }
  else
  {
    a2 = KeMaximumIncrement;
    v9 = KeMaximumIncrement;
    if ( *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[152]
      && *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156] < (unsigned int)KeMaximumIncrement )
    {
      a2 = *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156];
      v9 = *(_DWORD *)&ExpSysDbgLock.WaitBlockFill11[156];
    }
    for ( i = (unsigned __int8 *)ExpSysDbgLock.WaitBlock[2].SparePtr;
          i != &ExpSysDbgLock.WaitBlockFill11[136];
          i = *(unsigned __int8 **)i )
    {
      a2 = v9;
      if ( (*((_DWORD *)i - 235) & 0x1000) != 0 && *((_DWORD *)i + 6) < v9 && (*((_DWORD *)i + 23) & 0x4000000) == 0 )
      {
        a2 = *((_DWORD *)i + 6);
        v9 = a2;
      }
    }
  }
  if ( a2 < KeMinimumIncrement )
  {
    a2 = KeMinimumIncrement;
    v9 = KeMinimumIncrement;
  }
  if ( a2 == ExpLastRequestedTime )
    goto LABEL_23;
  v7 = KePseudoHrTimeIncrement;
  ExpLastRequestedTime = a2;
  KeReleaseSpinLock((PKSPIN_LOCK)&ExpSysDbgLock.WaitBlock[3].Thread, v5);
  ExpUpdateTimerConfiguration((__int64)&v9, 0LL, 0LL);
  result = v9;
  if ( v7 != v9 )
  {
    PoTraceSystemTimerResolutionUpdate(KePseudoHrTimeIncrement);
    return v9;
  }
  return result;
}
