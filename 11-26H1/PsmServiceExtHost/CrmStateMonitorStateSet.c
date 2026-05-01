/*
 * XREFs of CrmStateMonitorStateSet @ 0x1800200C0
 * Callers:
 *     CrmStateMonitorResourceUsageIsolatedPollCSCallback @ 0x18001CD20 (CrmStateMonitorResourceUsageIsolatedPollCSCallback.c)
 *     CrmStateMonitorSystemDiskUsageCSCallback @ 0x18001CE10 (CrmStateMonitorSystemDiskUsageCSCallback.c)
 *     CrmStateMonitorDisconnectedStandbyCallback @ 0x18001CF00 (CrmStateMonitorDisconnectedStandbyCallback.c)
 *     CrmStateMonitorCPUUsageCSCallback @ 0x18001CFD0 (CrmStateMonitorCPUUsageCSCallback.c)
 *     CrmStateMonitorDelayedCsCallback @ 0x18001D1B0 (CrmStateMonitorDelayedCsCallback.c)
 *     CrmStateMonitorResourceUsageLocalPollCSCallback @ 0x18001D270 (CrmStateMonitorResourceUsageLocalPollCSCallback.c)
 *     CrmStateMonitorTimeSinceLogonReset @ 0x18001D3FC (CrmStateMonitorTimeSinceLogonReset.c)
 *     CrmStateMonitorPostResumeSetAndReset @ 0x1800492F4 (CrmStateMonitorPostResumeSetAndReset.c)
 *     CrmStateMonitorPostShellReadyUsageCallback @ 0x180063770 (CrmStateMonitorPostShellReadyUsageCallback.c)
 *     CrmStateMonitorAcDcBatteryCallback @ 0x180064AE0 (CrmStateMonitorAcDcBatteryCallback.c)
 *     CrmStateMonitorPowerSettingsCallback @ 0x180065A40 (CrmStateMonitorPowerSettingsCallback.c)
 *     CrmStateMonitorTimeSinceLogonCallback @ 0x180065E50 (CrmStateMonitorTimeSinceLogonCallback.c)
 *     CrmStateMonitorPowerConstrainedCallback @ 0x180066A40 (CrmStateMonitorPowerConstrainedCallback.c)
 *     CrmSuspendNotification @ 0x1800672E0 (CrmSuspendNotification.c)
 *     CrmStateMonitorCsAcDcCallback @ 0x180067690 (CrmStateMonitorCsAcDcCallback.c)
 *     CrmStateMonitorTimeSinceBootCallback @ 0x180067E40 (CrmStateMonitorTimeSinceBootCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisCallback @ 0x180068210 (CrmStateMonitorFanNoiseHysteresisCallback.c)
 *     CrmStateMonitorDelayedAcTimerCallback @ 0x180068930 (CrmStateMonitorDelayedAcTimerCallback.c)
 *     CrmStateMonitorDelayedAcCallback @ 0x1800690A0 (CrmStateMonitorDelayedAcCallback.c)
 *     CrmStateMonitorAcDcDisplayCallback @ 0x18006A020 (CrmStateMonitorAcDcDisplayCallback.c)
 *     CrmStateMonitorFanNoiseHysteresisTimerCallback @ 0x18006BFD0 (CrmStateMonitorFanNoiseHysteresisTimerCallback.c)
 *     CrmStateMonitorPostShellReadySetAndReset @ 0x18006DED4 (CrmStateMonitorPostShellReadySetAndReset.c)
 *     CrmStateMonitorCompositeTestCallback @ 0x1800764B0 (CrmStateMonitorCompositeTestCallback.c)
 *     CrmStateMonitorDelayedCsTimerCallback @ 0x180076850 (CrmStateMonitorDelayedCsTimerCallback.c)
 *     CrmStateMonitorDelayedInternetLossCallback @ 0x180076880 (CrmStateMonitorDelayedInternetLossCallback.c)
 *     CrmStateMonitorDelayedInternetLossTimerCallback @ 0x180076A00 (CrmStateMonitorDelayedInternetLossTimerCallback.c)
 *     CrmStateMonitorWorkerThread @ 0x180077660 (CrmStateMonitorWorkerThread.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x180020310 (CrmLogStateMonitorStateSet.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorStateSet(unsigned int *a1, const void *a2, size_t a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  const void *v11; // r15
  unsigned int v12; // esi
  const void *v13; // rdx
  __int64 v14; // rax
  unsigned int *i; // rbx
  _OWORD v17[5]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+70h] [rbp-68h]
  __int64 v19; // [rsp+80h] [rbp-58h]

  if ( !a4 )
  {
    RtlAcquireSRWLockExclusive(a1 + 2);
    a1[4] = GetCurrentThreadId();
  }
  v8 = *a1;
  v9 = *a1;
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  v18 = 0LL;
  v10 = CrmStateMonitorStateSizeGet(v9);
  v11 = (const void *)*((_QWORD *)a1 + 5);
  v12 = v10;
  memcpy_0((char *)&v17[2] + 8, v11, v10);
  if ( a2 )
    v13 = a2;
  else
    v13 = v11;
  memcpy_0(v17, v13, v12);
  if ( v8 != 5 || !a2 )
  {
    *((_QWORD *)&v18 + 1) = *((_QWORD *)a1 + 6);
    v14 = MEMORY[0x7FFE0008];
    *(_QWORD *)&v18 = MEMORY[0x7FFE0008];
LABEL_7:
    *((_QWORD *)a1 + 6) = v14;
    goto LABEL_8;
  }
  *((_QWORD *)&v18 + 1) = *((_QWORD *)a1 + 6);
  v14 = MEMORY[0x7FFE0008];
  *(_QWORD *)&v18 = MEMORY[0x7FFE0008];
  if ( LODWORD(v17[0]) == 20 * (LODWORD(v17[0]) / 0x14) )
    goto LABEL_7;
  LODWORD(v19) = 1;
LABEL_8:
  memcpy_0(*((void **)a1 + 5), a2, a3);
  for ( i = (unsigned int *)*((_QWORD *)a1 + 3); i != a1 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, const void *))i - 1))(i - 2, *a1, a2);
  if ( !a4 )
  {
    a1[4] = 0;
    RtlReleaseSRWLockExclusive(a1 + 2);
  }
  return CrmLogStateMonitorStateSet(a1, v17);
}
