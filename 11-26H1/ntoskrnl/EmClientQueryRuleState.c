/*
 * XREFs of EmClientQueryRuleState @ 0x140C09B60
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x14050FAA4 (HalpInterruptIsMsiSupported.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407CF2DC (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140CD7708 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD922C (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140CDC334 (PopReadErrataForIncorrectLidNotification.c)
 *     KeInitializeClock @ 0x140D117AC (KeInitializeClock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x14047A4FC (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1404CBA0C (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140C09DDC (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140C09E9C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  struct _LIST_ENTRY **v10; // rax
  struct _LIST_ENTRY **v11; // rbp
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rsi

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.QuantumTarget, 0LL, 0LL, v5);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.QuantumTarget, 0LL);
      v9 = v6;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(&EmpParseLock.QuantumTarget, v6, (__int64)&EmpParseLock.QuantumTarget);
      if ( v9 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v9, v7);
        else
          *((_BYTE *)v9 + 10) = 1;
      }
      v10 = EmpSearchRuleDatabase(a1);
      v11 = v10;
      if ( v10 && (v12 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v10), (v14 = v12) != 0LL) )
      {
        _InterlockedIncrement(v12);
        EmpUpdateRuleState(v13, 0LL);
        _InterlockedAdd(v14, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v11 + 4);
      }
      else
      {
        v2 = -1073741275;
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
  return v2;
}
