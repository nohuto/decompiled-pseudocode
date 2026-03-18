/*
 * XREFs of PopBuildDeviceNotifyList @ 0x140C04CC8
 * Callers:
 *     PoInitializeBroadcast @ 0x140AC58BC (PoInitializeBroadcast.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimer @ 0x140483D00 (KeInitializeTimer.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C04DF0 (IoBuildPoDeviceNotifyList.c)
 */

void __fastcall PopBuildDeviceNotifyList(void *a1, char a2)
{
  struct _KEVENT Event; // [rsp+38h] [rbp-49h] BYREF
  struct _KDPC Dpc; // [rsp+58h] [rbp-29h] BYREF
  struct _KTIMER Timer; // [rsp+98h] [rbp+17h] BYREF

  memset(&Dpc, 0, 60);
  memset(&Event, 0, sizeof(Event));
  memset_0(&Timer, 0, sizeof(Timer));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  KeInitializeTimer(&Timer);
  KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)PopBuildDeviceNotifyListWatchdog, &Event);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout )
    KiSetTimerEx((__int64)&Timer, -10000000LL * (int)PopWatchdogSleepTimeout, 0, 0, (__int64)&Dpc);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST);
  IoBuildPoDeviceNotifyList(a1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BUILDNOTIFYLIST_END);
  if ( (a2 & 4) == 0 && (_DWORD)PopWatchdogSleepTimeout && !KeCancelTimer(&Timer) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
}
