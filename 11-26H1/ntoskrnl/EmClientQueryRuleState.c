/*
 * XREFs of EmClientQueryRuleState @ 0x140C03950
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x140516034 (HalpInterruptIsMsiSupported.c)
 *     PopDirectedDripsQueryEnabledMitigations @ 0x1407CC23C (PopDirectedDripsQueryEnabledMitigations.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407D7814 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140CD1560 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD308C (PopEvaluateInputSuppressionRequired.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140CD5FE0 (PopReadErrataForIncorrectLidNotification.c)
 *     KeInitializeClock @ 0x140D0B7A4 (KeInitializeClock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     EmpSearchTargetRuleList @ 0x14047FA90 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x140483480 (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1404D1E5C (EmpUpdateRuleState.c)
 *     EmpAcquirePagingReference @ 0x140C03BCC (EmpAcquirePagingReference.c)
 *     EmpReleasePagingReference @ 0x140C03C8C (EmpReleasePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  struct _KLOCK_ENTRIES *v5; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbp
  volatile signed __int32 *v12; // rax
  __int64 v13; // rcx
  volatile signed __int32 *v14; // rsi

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      v6 = (AutoBoost *)KeAbPreAcquire((__int64)&EmpParseLock.KernelStack, 0LL, 0LL, v5);
      v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpParseLock.KernelStack, 0LL);
      v9 = v6;
      if ( v8 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&EmpParseLock.KernelStack,
          v6,
          (__int64)&EmpParseLock.KernelStack);
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
  return v2;
}
