/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x140604DE0
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 v7; // rsi
  KIRQL v8; // r14
  LARGE_INTEGER InterruptTimePrecise; // r12
  __int64 v10; // rsi
  __int64 i; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF

  v3 = PpmPlatformStates == 0;
  *a2 = 0;
  *a3 = 0LL;
  if ( !v3 )
  {
    v7 = (unsigned int)dword_140E27240;
    if ( dword_140E27240 != -1 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
      v10 = 448 * v7;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v10 + PpmPlatformStates + 108); i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(v10 + PpmPlatformStates + 112);
        v13 = (unsigned __int64)(unsigned int)i << 6;
        v14 = *(_QWORD *)(v13 + v12 + 32);
        if ( v14 && InterruptTimePrecise.QuadPart - v14 >= a1 )
        {
          *a2 = *(_DWORD *)(v13 + v12 + 16);
          *a3 = *(_QWORD *)(stru_140E67200.Padding[4] + 24 * i + 24);
          break;
        }
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v8);
    }
  }
}
