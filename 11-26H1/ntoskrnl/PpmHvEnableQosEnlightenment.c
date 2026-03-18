/*
 * XREFs of PpmHvEnableQosEnlightenment @ 0x140A9CE18
 * Callers:
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmConvertTimeFrom @ 0x1403E63A8 (PpmConvertTimeFrom.c)
 *     KeEnumerateNextProcessor @ 0x14043BC70 (KeEnumerateNextProcessor.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1405B87D4 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x140A9CE8C (PpmReinitializeHeteroEngine.c)
 */

char PpmHvEnableQosEnlightenment()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // r11
  __int64 v6; // rcx
  unsigned __int16 *v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+32h] [rbp-16h]
  __int16 v11; // [rsp+36h] [rbp-12h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( CurrentPrcb->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    LOBYTE(CurrentPrcb) = HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)CurrentPrcb )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v1, v2);
        v8[1] = (unsigned __int16 *)qword_140E0B638[0];
        v8[0] = (unsigned __int16 *)PpmCheckRegistered;
        v9 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v8) )
        {
          KeGetPrcb(v12);
          v3 = PpmPerfQosTransitionHysteresisOverride;
          if ( PpmPerfQosTransitionHysteresisOverride == -1 )
            v3 = PpmPerfQosTransitionHysteresis;
          v4 = PpmConvertTimeFrom(v3, 1000000LL);
          *(_QWORD *)(v5 + 35400) = v4;
        }
        PpmPerfQosManageIdleProcessors = 0;
        PpmPerfVmQosSupported = 1;
        LOBYTE(v6) = 1;
        LOBYTE(CurrentPrcb) = PpmReinitializeHeteroEngine(v6, 0LL);
      }
    }
  }
  return (char)CurrentPrcb;
}
