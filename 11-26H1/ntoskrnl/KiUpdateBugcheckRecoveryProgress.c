/*
 * XREFs of KiUpdateBugcheckRecoveryProgress @ 0x1405FD294
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405FC154 (KiAttemptBugcheckRecovery.c)
 *     KiSaveBugcheckRecoveryProgress @ 0x1405FCF60 (KiSaveBugcheckRecoveryProgress.c)
 *     KiSetBugCheckRecoveryProgressFlag @ 0x1405FD0B8 (KiSetBugCheckRecoveryProgressFlag.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeDisableInterrupts @ 0x140304E30 (KeDisableInterrupts.c)
 *     KiSendThawExecution @ 0x1404FBC80 (KiSendThawExecution.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IoSaveInitialBugCheckProgress @ 0x1405CA0B0 (IoSaveInitialBugCheckProgress.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405FC548 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 */

__int64 __fastcall KiUpdateBugcheckRecoveryProgress(_DWORD *a1)
{
  unsigned int v3; // ebx
  char v4; // bp
  bool v5; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  if ( KsepShimDbLock.SchedulerApc.ApcStateIndex )
    return 3221225473LL;
  v3 = 0;
  v4 = 1;
  v5 = KeDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( (unsigned int)KiBugCheckRecoveryFreezeOtherProcessors(0xF4240u) <= 1 )
  {
    switch ( *a1 )
    {
      case 0:
        IoSaveInitialBugCheckProgress(a1[4]);
        goto LABEL_17;
      case 1:
        IoSaveBugCheckProgress(a1[2]);
        goto LABEL_17;
      case 2:
        IoSetBugCheckProgressFlag(a1[2]);
        goto LABEL_17;
    }
    KsepShimDbLock.SchedulerApc.ApcStateIndex = 1;
  }
  else
  {
    v4 = 0;
    KsepShimDbLock.SchedulerApc.ApcStateIndex = 1;
  }
  v3 = -1073741823;
LABEL_17:
  KiSendThawExecution(v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return v3;
}
