/*
 * XREFs of KiStallBugcheckThread @ 0x1405FA6C8
 * Callers:
 *     KiScheduleBugcheckRecovery @ 0x1405FA570 (KiScheduleBugcheckRecovery.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-28h] BYREF

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
      KsepShimDbLock.WaitBlockFill11[175] |= 4u;
      RtlRaiseException((ULONG_PTR)&KiRecoverableBugcheckException);
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
  v3 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * KeGetCurrentPrcb()->Number);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v3 >> 6);
  Affinity.Mask = 1LL << v3;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
  __writecr8(0LL);
  KsepShimDbLock.WaitBlockFill11[175] |= 2u;
  KeWaitForSingleObject(&KsepShimDbLock.AffinityVersion, Executive, 0, 0, 0LL);
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
