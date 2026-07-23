/*
 * XREFs of KiStallBugcheckThread @ 0x1405FD0E8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x1405FCF90 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void KiStallBugcheckThread()
{
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 NestingLevel; // dl
  unsigned int v3; // ecx
  int v4; // edx
  unsigned __int8 v5; // cl
  int v6; // edx
  unsigned __int8 v7; // cl
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  NestingLevel = CurrentPrcb->NestingLevel;
  if ( NestingLevel )
  {
    if ( NestingLevel == 1 && CurrentPrcb->DpcRoutineActive )
    {
      if ( CurrentIrql > 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
        __writecr8(2uLL);
      }
      KsepShimDbLock.SchedulerApcFill3[23] |= 4u;
      RtlRaiseException(&KiRecoverableBugcheckException);
      __debugbreak();
    }
    __fastfail(4u);
  }
  if ( CurrentIrql > 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
  }
  v3 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetCurrentPrcb()->Number);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << v3;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  KsepShimDbLock.SchedulerApcFill3[23] |= 2u;
  KeWaitForSingleObject(&KsepShimDbLock.UserAffinity, Executive, 0, 0, 0LL);
  v5 = KeGetCurrentIrql();
  if ( v5 != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = 2;
    KiRaiseIrqlProcessIrqlFlags(v5, v4);
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( CurrentIrql > 2u )
  {
    v7 = KeGetCurrentIrql();
    if ( v7 != CurrentIrql )
      __writecr8(CurrentIrql);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v7, v6);
    }
  }
}
