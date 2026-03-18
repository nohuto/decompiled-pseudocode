/*
 * XREFs of PopDiagTraceFxRundown @ 0x14042B1A4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14042AB54 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceControlCallback @ 0x140AC0910 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopDiagTraceDeviceVerboseRundown @ 0x140ADB770 (PopDiagTraceDeviceVerboseRundown.c)
 *     PopFxTraceDeviceRegistration @ 0x140AEE2C4 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxPluginRegistration @ 0x140B3BBA8 (PopDiagTraceFxPluginRegistration.c)
 */

void __fastcall PopDiagTraceFxRundown(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  LegacyAutoBoost *v7; // rbx
  ULONG_PTR *j; // rbx
  LegacyAutoBoost *v9; // rbx
  __int64 v10; // r8
  ULONG_PTR *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
  {
    v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140F12420.StateSaveArea, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&stru_140F12420.StateSaveArea,
        0,
        v9,
        (struct _KTHREAD *)&stru_140F12420.StateSaveArea);
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v9 + 33) |= 2u;
      else
        *((_BYTE *)v9 + 10) = 1;
    }
    for ( i = (ULONG_PTR *)qword_140F123F0; i != &qword_140F123F0; i = (ULONG_PTR *)*i )
    {
      LOBYTE(v10) = 1;
      PopDiagTraceFxPluginRegistration(i, i[3], v10);
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140F12420.StateSaveArea, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&stru_140F12420.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&stru_140F12420.StateSaveArea);
  }
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v7, &qword_140F123D0);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( j = (ULONG_PTR *)qword_140F123E0; j != &qword_140F123E0; j = (ULONG_PTR *)*j )
  {
    if ( j[6] )
    {
      if ( !a1 )
      {
        LOBYTE(v6) = 1;
        PopFxTraceDeviceRegistration(j, v6);
      }
      PopDiagTraceDeviceVerboseRundown(j, a1);
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
}
