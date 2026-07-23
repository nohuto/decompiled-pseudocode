/*
 * XREFs of PopThermalSxExit @ 0x140516740
 * Callers:
 *     PopPolicyWorkerAction @ 0x1409F3240 (PopPolicyWorkerAction.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 *     PopCoolingSxTransition @ 0x140424E88 (PopCoolingSxTransition.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140495490 (IoCancelIrp.c)
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
 *     PopPowerLimitSxTransition @ 0x14052BF20 (PopPowerLimitSxTransition.c)
 *     Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline @ 0x14060A5F4 (Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopThermalSxExit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 result; // rax
  bool v5; // di
  int IsEnabledDeviceUsageNoInline; // ebx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  struct _SINGLE_LIST_ENTRY *i; // rbx
  struct _SINGLE_LIST_ENTRY *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9

  result = (unsigned int)_InterlockedExchange(&PopThermalStateTransitionInProgress, 0);
  v5 = 0;
  if ( (_DWORD)result )
  {
    if ( PoResumeFromHibernate )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, a2, a3, a4);
      if ( byte_140F0FCF2 )
      {
        byte_140F0FCF2 = 0;
        IsEnabledDeviceUsageNoInline = Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline();
        if ( IsEnabledDeviceUsageNoInline )
        {
          byte_140F0FCF1 = 0;
          byte_140F0FCF3 = 0;
        }
        ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
        v5 = IsEnabledDeviceUsageNoInline != 0;
      }
      PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
      v7 = KeAcquireSpinLockRaiseToDpc(&PopThermalEventTransitionContext);
      byte_140F0FD08 = 1;
      dword_140F0FD0C = -1;
      KeReleaseSpinLock(&PopThermalEventTransitionContext, v7);
    }
    PopAcquireRwLockShared(&PopPolicyDeviceLock, a2, a3, a4);
    for ( i = PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
          i != &PpmIdlePolicyLock.SystemAffinityTokenListHead;
          i = i->Next )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&i[54], v8, v9, v10);
      v12 = (struct _SINGLE_LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
      i[64].Next = (struct _SINGLE_LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
      i[65].Next = v12;
      LOBYTE(i[63].Next) = 0;
      if ( (unsigned int)Feature_Servicing_ThermalSxExitRereadZones__private_IsEnabledDeviceUsageNoInline() && v5 )
        IoCancelIrp((PIRP)i[7].Next);
      PopReleaseRwLock((struct _KTHREAD *)&i[54]);
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
    PopCoolingSxTransition(0);
    PopPowerLimitSxTransition(0LL);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, v13, v14, v15);
    byte_140F0FCF0 = 1;
    if ( byte_140F0FCF1 || byte_140F0FCF3 )
      PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    return PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
  }
  return result;
}
