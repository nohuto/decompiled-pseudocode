/*
 * XREFs of PopHiberCheckResume @ 0x140BFA8A0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140730A80 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     HalInitializeOnResume @ 0x140518590 (HalInitializeOnResume.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405B8380 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlRestoreEnlightenment @ 0x1405B901C (HvlRestoreEnlightenment.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x1405BD980 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlNotifyAcpiReenabled @ 0x1405BF2D0 (HvlNotifyAcpiReenabled.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopSstInvokeNotificationHandlers @ 0x140BF9490 (PopSstInvokeNotificationHandlers.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     KdInitSystem @ 0x140C12B60 (KdInitSystem.c)
 */

char PopHiberCheckResume()
{
  ULONG_PTR v0; // rdi
  char v1; // bl
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbp
  _KPROCESS *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  struct _LIST_ENTRY **p_Blink; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1

  v0 = qword_140F0FBB0;
  v1 = 0;
  v2 = *(_QWORD *)(qword_140F0FBB0 + 216);
  if ( *(_DWORD *)v2 )
  {
    PopCheckpointSystemSleep(25LL);
    BYTE1(stru_140F10828.WriteOperationCount) = 0;
    guard_dispatch_icall_no_overrides(0LL, v3);
    v4 = 5LL;
    LODWORD(stru_140F11D08.InitialStack) = 0;
    v5 = (_KPROCESS *)__rdtsc();
    LOBYTE(stru_140F10828.OtherOperationCount) = 1;
    guard_dispatch_icall_no_overrides(5LL, (unsigned __int64)HIDWORD(v5) << 32);
    guard_dispatch_icall_no_overrides(1LL, v6);
    if ( HvlHypervisorConnected )
    {
      HvlRestoreEnlightenment(1);
      guard_dispatch_icall_no_overrides(v9, v8);
      stru_140F11D08.UserIdealProcessor = 0;
    }
    guard_dispatch_icall_no_overrides(5LL, v7);
    if ( (dword_140F0FD40 & 0x1000) != 0 && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    PopSstInvokeNotificationHandlers(2u);
    if ( HvlHypervisorConnected )
    {
      HvlConfigureMemoryZeroingOnReset(1);
      if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      {
        HvlNotifyDebugDeviceAvailable();
        HvlNotifyAcpiReenabled();
      }
    }
    if ( (dword_140F0FD40 & 0x1000) == 0 && ((_BYTE)KdDebuggerEnabled && !KdPitchDebugger || KdEventLoggingEnabled) )
    {
      LOBYTE(KdDebuggerEnabled) = 0;
      KdInitSystem(0LL, 0LL);
    }
    if ( (_BYTE)KdDebuggerEnabled && *(_DWORD *)v2 == 1347113538 )
      __debugbreak();
    if ( (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x40000000) != 0 )
      __debugbreak();
    HalInitializeOnResume();
    v10 = *(_QWORD *)(v0 + 352);
    v11 = (_QWORD *)(v2 + 1184);
    v12 = 4LL;
    do
    {
      if ( *v11 )
        *(_QWORD *)(v10 + 48) = *v11;
      ++v11;
      --v12;
    }
    while ( v12 );
    p_Blink = &stru_140F10070.WaitBlock[0].WaitListEntry.Blink;
    ExpSysDbgLock.SchedulerApc.SystemArgument2 = *(PVOID *)(v2 + 1160);
    v14 = (_OWORD *)(v2 + 136);
    qword_140F0B0C0 = (__int64)v5;
    do
    {
      *(_OWORD *)p_Blink = *v14;
      *((_OWORD *)p_Blink + 1) = v14[1];
      *((_OWORD *)p_Blink + 2) = v14[2];
      *((_OWORD *)p_Blink + 3) = v14[3];
      *((_OWORD *)p_Blink + 4) = v14[4];
      *((_OWORD *)p_Blink + 5) = v14[5];
      *((_OWORD *)p_Blink + 6) = v14[6];
      p_Blink += 16;
      v15 = v14[7];
      v14 += 8;
      *((_OWORD *)p_Blink - 1) = v15;
      --v4;
    }
    while ( v4 );
    *(_OWORD *)p_Blink = *v14;
    *((_OWORD *)p_Blink + 1) = v14[1];
    *((_OWORD *)p_Blink + 2) = v14[2];
    *((_OWORD *)p_Blink + 3) = v14[3];
    *((_OWORD *)p_Blink + 4) = v14[4];
    *((_OWORD *)p_Blink + 5) = v14[5];
    p_Blink[12] = (struct _LIST_ENTRY *)*((_QWORD *)v14 + 12);
    *(_BYTE *)(v0 + 3) = 0;
    stru_140F10070.Process = v5;
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
      *(_DWORD *)(v0 + 16) = 0;
    return 1;
  }
  return v1;
}
