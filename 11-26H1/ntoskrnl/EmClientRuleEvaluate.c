/*
 * XREFs of EmClientRuleEvaluate @ 0x140C09C90
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x1404DB10C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140CDC380 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpEvaluateTargetRule @ 0x14046D670 (EmpEvaluateTargetRule.c)
 *     EmpSearchTargetRuleList @ 0x14047A4FC (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     EmpAcquirePagingReference @ 0x140C09DDC (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140C09E9C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _KLOCK_ENTRIES *v9; // r9
  AutoBoost *v10; // rax
  void *v11; // rdx
  signed __int8 v12; // cf
  AutoBoost *v13; // rdi
  struct _LIST_ENTRY **v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v10 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, v9);
      v12 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL);
      v13 = v10;
      if ( v12 )
        ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v10, (__int64)&EmpParseLock.QuantumTarget);
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
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpParseLock.QuantumTarget, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpParseLock.QuantumTarget);
      KeAbPostRelease((unsigned __int64)&EmpParseLock.QuantumTarget);
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
