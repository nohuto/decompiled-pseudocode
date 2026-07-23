/*
 * XREFs of PpmHvEnableQosEnlightenment @ 0x140AEBAB8
 * Callers:
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     PpmConvertTimeFrom @ 0x1402F3288 (PpmConvertTimeFrom.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     HvlIsRootPowerSchedulerQosPresent @ 0x1405BB044 (HvlIsRootPowerSchedulerQosPresent.c)
 *     PpmReinitializeHeteroEngine @ 0x140AD89F8 (PpmReinitializeHeteroEngine.c)
 */

char PpmHvEnableQosEnlightenment()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v1; // rdx
  unsigned int v2; // r8d
  unsigned int v3; // edx
  __int64 v4; // rax
  __int64 v5; // r11
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( CurrentPrcb->PowerState.Hypervisor == ProcHypervisorPresent )
  {
    LOBYTE(CurrentPrcb) = HvlIsRootPowerSchedulerQosPresent();
    if ( (_BYTE)CurrentPrcb )
    {
      if ( !PpmPerfVmQosSupported )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v1, v2);
        v7[1] = (unsigned __int16 *)PpmCheckRegistered.Bitmap[0];
        v7[0] = (unsigned __int16 *)&PpmCheckRegistered;
        v8 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v7) )
        {
          KeGetPrcb(v11);
          v3 = PpmPerfQosTransitionHysteresisOverride;
          if ( PpmPerfQosTransitionHysteresisOverride == -1 )
            v3 = PpmPerfQosTransitionHysteresis;
          v4 = PpmConvertTimeFrom(v3, 1000000LL);
          *(_QWORD *)(v5 + 35400) = v4;
        }
        PpmPerfQosManageIdleProcessors = 0;
        PpmPerfVmQosSupported = 1;
        LOBYTE(CurrentPrcb) = PpmReinitializeHeteroEngine(1, 0, 0);
      }
    }
  }
  return (char)CurrentPrcb;
}
