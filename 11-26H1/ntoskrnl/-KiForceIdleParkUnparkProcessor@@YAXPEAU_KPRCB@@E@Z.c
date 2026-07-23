/*
 * XREFs of ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404EAE58
 * Callers:
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1404BE7C0 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     ?KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1404EAE30 (-KiForceIdleParkUnparkDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x140420700 (KeInterlockedSetProcessorAffinityEx.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140420840 (KeInterlockedClearProcessorAffinityEx.c)
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 *     Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline @ 0x1405FDBC4 (Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline.c)
 */

void __fastcall KiForceIdleParkUnparkProcessor(struct _KPRCB *a1, char a2)
{
  unsigned int Number; // edx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    KiRcuCheckQuiescent((__int64)a1);
    if ( a1->PowerState.Parked )
    {
      if ( a1->PowerState.SoftParked )
      {
        KeInterlockedSetProcessorAffinityEx((__int64)KiForceIdleSoftParkRestoreMask, a1->Number);
        KeTransitionProcessorParkState(a1, 1u);
      }
    }
    else
    {
      KeInterlockedSetProcessorAffinityEx((__int64)KiForceIdleUnparkRestoreMask, a1->Number);
      KeTransitionProcessorParkState(a1, 1u);
    }
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( a1->PrcbLock );
    }
    a1->QuantumEnd = 0;
    a1->IdleSchedule = 0;
LABEL_19:
    _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
    return;
  }
  Number = a1->Number;
  if ( a1->PowerState.SoftParked )
  {
    KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleSoftParkRestoreMask, Number);
    KeTransitionProcessorParkState(a1, 2u);
    if ( !(unsigned int)Feature_ForceIdleReschedulingFix__private_IsEnabledNoReportingNoInline() )
      return;
    v4 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v4);
      while ( a1->PrcbLock );
    }
    if ( (a1->IdleState & 1) == 0 )
      a1->IdleSchedule = 1;
    goto LABEL_19;
  }
  KeInterlockedClearProcessorAffinityEx((__int64)KiForceIdleUnparkRestoreMask, Number);
  KeTransitionProcessorParkState(a1, 0);
}
