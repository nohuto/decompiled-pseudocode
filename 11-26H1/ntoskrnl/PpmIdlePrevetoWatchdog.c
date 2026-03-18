/*
 * XREFs of PpmIdlePrevetoWatchdog @ 0x140602330
 * Callers:
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PpmIdlePrevetoWatchdog(unsigned __int64 a1, _DWORD *a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 v7; // rsi
  KIRQL v8; // r14
  __int64 InterruptTimePrecise; // r12
  __int64 v10; // rsi
  __int64 i; // rcx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = PpmPlatformStates == 0;
  *a2 = 0;
  *a3 = 0LL;
  if ( !v3 )
  {
    v7 = (unsigned int)dword_140E27100;
    if ( dword_140E27100 != -1 )
    {
      v8 = KeAcquireSpinLockRaiseToDpc(&stru_140F10070.KcsanThread);
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
      v10 = 448 * v7;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v10 + PpmPlatformStates + 108); i = (unsigned int)(i + 1) )
      {
        v12 = *(_QWORD *)(v10 + PpmPlatformStates + 112);
        v13 = (unsigned __int64)(unsigned int)i << 6;
        v14 = *(_QWORD *)(v13 + v12 + 32);
        if ( v14 && InterruptTimePrecise - v14 >= a1 )
        {
          *a2 = *(_DWORD *)(v13 + v12 + 16);
          *a3 = *((_QWORD *)stru_140E66FF0.IptSaveArea + 3 * i + 3);
          break;
        }
      }
      KeReleaseSpinLock(&stru_140F10070.KcsanThread, v8);
    }
  }
}
