/*
 * XREFs of PopDirectedDripsResumeDevices @ 0x140AC6FD4
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CF670 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140AC6B88 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC6CD8 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404C1AC4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1404CFC70 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140AC70C8 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x140B35B1C (PopDirectedDripsDestroyBroadcast.c)
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 */

void __fastcall PopDirectedDripsResumeDevices(unsigned __int32 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // si
  __int64 v6; // rbp
  unsigned __int32 v7; // eax
  __int64 v8; // r8
  unsigned __int32 v9; // ett
  __int16 v10; // di
  unsigned __int32 v11; // eax
  __int64 v12; // rcx
  unsigned __int32 v13; // ett

  v4 = a2;
  v6 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v7 = *a1;
  do
  {
    v8 = v7;
    v9 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v7, v7);
  }
  while ( v9 != v7 );
  v10 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    *((_BYTE *)a1 + 85) = 1;
    PoBroadcastSystemState(a1 + 15);
    _InterlockedOr((volatile signed __int32 *)a1, 0x20u);
  }
  if ( (v10 & 0x80u) != 0 )
    PopDirectedDripsDestroyBroadcast();
  if ( !v4 && (v10 & 0x200) == 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v11 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v12 = v11;
      v13 = v11;
      v11 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v11, v11);
    }
    while ( v13 != v11 );
    if ( !v11 )
      PopFxClearDirectedDripsCandidateDeviceList(v12, a2, v8, a4);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF6F);
  if ( !v4 )
    PopDirectedDripsReleaseTransitionLock(a1);
  PopDirectedDripsDiagTraceNotifyDevices(0, 0, (MEMORY[0xFFFFF78000000008] - v6) / 0x989680uLL, a4);
}
