/*
 * XREFs of EmClientRuleEvaluate @ 0x140C03A80
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404E1A2C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140B05F90 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140CD602C (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EmpEvaluateTargetRule @ 0x140473EF0 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x14047FA90 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140483480 (EmpSearchRuleDatabase.c)
 *     EmpAcquirePagingReference @ 0x140C03BCC (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140C03C8C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.KernelStack, 0LL, 0LL, v9);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.KernelStack, 0LL);
      v13 = v10;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&EmpParseLock.KernelStack,
          v10,
          (__int64)&EmpParseLock.KernelStack);
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v11);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      v14 = EmpSearchRuleDatabase(a1);
      if ( v14 && (v15 = EmpSearchTargetRuleList((__int64)v14)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v16 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v15, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.KernelStack, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.KernelStack);
      KeAbPostRelease((unsigned __int64)&EmpParseLock.KernelStack);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
