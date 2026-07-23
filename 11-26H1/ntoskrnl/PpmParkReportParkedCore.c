/*
 * XREFs of PpmParkReportParkedCore @ 0x140254E74
 * Callers:
 *     PpmPerfAction @ 0x140254C00 (PpmPerfAction.c)
 * Callees:
 *     PpmIdleUpdateProcessorLatencyLimit @ 0x14028EF68 (PpmIdleUpdateProcessorLatencyLimit.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     PpmEventCoreParkingStateChangeEx @ 0x1404C0554 (PpmEventCoreParkingStateChangeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpmParkReportParkedCore(struct _KPRCB *a1)
{
  unsigned int Number; // ebx
  bool v3; // si
  int v4; // r14d
  int v5; // edx
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rdx
  unsigned __int32 *SchedulerAssist; // r8
  __int64 v15; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int32 v18; // eax
  unsigned __int32 v19; // ett

  Number = a1->Number;
  v3 = (unsigned int)KeCheckProcessorAffinityEx(&PpmParkNewSoftParkingMask, Number) != 0;
  v4 = KeCheckProcessorAffinityEx(&PpmParkNewForceParkingMask, Number);
  v5 = v3 + 1;
  if ( v4 )
    v5 = 3;
  v6 = 0;
  if ( !v4 )
    v6 = v3;
  KeTransitionProcessorParkState(a1, v5);
  v7 = a1->Number;
  a1->PowerState.Parked = 1;
  KeInterlockedSetProcessorAffinityEx(&PpmPerfCoreParkingMask, v7, v8);
  v12 = KeDisableInterrupts(v10, v9, v11);
  *(_QWORD *)&a1->InterruptLastCount = a1->InterruptCount;
  if ( v12 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v13 = v18;
        LODWORD(v13) = v18 & 0xFFDFFFFF;
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb, v13, SchedulerAssist, v15);
    }
    _enable();
  }
  if ( v6 )
  {
    KeInterlockedSetProcessorAffinityEx(&PpmParkSoftParkingMask, a1->Number, SchedulerAssist);
    a1->PowerState.SoftParked = 1;
  }
  if ( v4 )
    KeInterlockedSetProcessorAffinityEx(&PpmParkForceParkingMask, a1->Number, SchedulerAssist);
  LOBYTE(v13) = v6;
  PpmEventCoreParkingStateChangeEx(a1, v13);
  return PpmIdleUpdateProcessorLatencyLimit(a1, 0LL);
}
