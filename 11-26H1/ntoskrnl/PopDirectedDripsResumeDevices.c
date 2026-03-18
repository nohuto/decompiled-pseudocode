/*
 * XREFs of PopDirectedDripsResumeDevices @ 0x140AC5364
 * Callers:
 *     PopDirectedDripsWorkerRoutine @ 0x1407CC5D0 (PopDirectedDripsWorkerRoutine.c)
 *     PopDirectedDripsRefreshDisengageState @ 0x140AC4F18 (PopDirectedDripsRefreshDisengageState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x140AC5068 (PopDirectedDripsHandleResiliencyNotification.c)
 * Callees:
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1404C7D84 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopDirectedDripsDiagTraceNotifyDevices @ 0x1404D64A0 (PopDirectedDripsDiagTraceNotifyDevices.c)
 *     PopDirectedDripsReleaseTransitionLock @ 0x140AC5458 (PopDirectedDripsReleaseTransitionLock.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x140B336CC (PopDirectedDripsDestroyBroadcast.c)
 *     PoBroadcastSystemState @ 0x140C05D10 (PoBroadcastSystemState.c)
 */

void __fastcall PopDirectedDripsResumeDevices(unsigned __int32 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // si
  __int64 v6; // rbp
  unsigned __int32 v7; // eax
  __int64 v8; // r8
  unsigned __int32 v9; // ett
  __int16 v10; // di
  unsigned __int32 Blink; // eax
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
    _m_prefetchw(&PopDirectedDripsUmLock.Header.WaitListHead.Blink);
    Blink = (unsigned __int32)PopDirectedDripsUmLock.Header.WaitListHead.Blink;
    do
    {
      v12 = Blink;
      v13 = Blink;
      Blink = _InterlockedCompareExchange(
                (volatile signed __int32 *)&PopDirectedDripsUmLock.Header.WaitListHead.Blink,
                Blink,
                Blink);
    }
    while ( v13 != Blink );
    if ( !Blink )
      PopFxClearDirectedDripsCandidateDeviceList(v12, a2, v8, a4);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF6F);
  if ( !v4 )
    PopDirectedDripsReleaseTransitionLock(a1);
  PopDirectedDripsDiagTraceNotifyDevices(0, 0, (MEMORY[0xFFFFF78000000008] - v6) / 0x989680uLL, a4);
}
