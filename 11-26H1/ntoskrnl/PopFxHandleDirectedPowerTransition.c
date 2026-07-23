/*
 * XREFs of PopFxHandleDirectedPowerTransition @ 0x1403C172C
 * Callers:
 *     PopFxDirectedPowerTransitionWorker @ 0x1403C16F0 (PopFxDirectedPowerTransitionWorker.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1403B5280 (PopFxEnableWorkOrderWatchdog.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x1403C309C (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1406075B8 (PopFxCompleteDirectedPowerTransition.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

struct _KTHREAD *__fastcall PopFxHandleDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edx
  __int64 v9; // rax

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v4 != v2 );
  v5 = v2 & 0x1000;
  LOBYTE(v3) = v5 != 0;
  PopDiagTraceFxDeviceDirectedTransition(*(_QWORD *)(BugCheckParameter3 + 48), v3);
  v8 = *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[16];
  if ( !v5 )
    v8 = *(_DWORD *)&PopFxBlockingDeviceListLock.PriorityFloorCounts[20];
  PopFxEnableWorkOrderWatchdog(BugCheckParameter3 + 960, v8, v6, v7);
  guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 192), 0LL);
  v9 = *(_QWORD *)(BugCheckParameter3 + 1008);
  if ( v9 )
    *(_QWORD *)(v9 + 168) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 1200), 0xFFFFFFFF) == 1 )
    return (struct _KTHREAD *)PopFxCompleteDirectedPowerTransition(BugCheckParameter3);
  else
    return PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
