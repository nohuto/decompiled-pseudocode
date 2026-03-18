/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x14077595C
 * Callers:
 *     PopUmpoProcessMessage @ 0x140AAA1C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1404A65D0 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline @ 0x1406004D0 (Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PfIoPowerEventNotify @ 0x1407C5738 (PfIoPowerEventNotify.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407C9544 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407C9624 (PopPowerRequestOverrideInitialize.c)
 *     PopIdleTriggerAdaptiveStandbyAction @ 0x1407DA37C (PopIdleTriggerAdaptiveStandbyAction.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407DF87C (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopSetNewPolicyValue @ 0x140A3DED8 (PopSetNewPolicyValue.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABB41C (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1, __int64 a2)
{
  int v3; // r10d
  char v4; // al
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 4:
      result = PopSetNewPolicyValue(a1 + 8, a2, (unsigned int)(*(_DWORD *)a1 - 4));
      if ( (int)result < 0 )
        return result;
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 20) )
        PfIoPowerEventNotify(*(unsigned int *)(a1 + 12), a2, 1LL);
      break;
    case 8:
      PopPowerRequestHandleRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        PopPowerRequestNotificationsBegin();
      PopPowerRequestOverrideInitialize();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v8, v9, v10);
      PopPowerAggregatorUmpoInitialized = 1;
      PopPowerAggregatorScheduleWorker(&PopPowerAggregatorLock.Header.WaitListHead.Blink);
      PopReleaseRwLock(&PopPowerAggregatorLock);
      if ( qword_140E675F0 )
        guard_dispatch_icall_no_overrides(v12, v11);
      break;
    case 0xE:
      if ( !(unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
        PopIdleTriggerAdaptiveStandbyAction(*(unsigned int *)(a1 + 8));
      break;
    case 0x12:
      v3 = *(_DWORD *)(a1 + 8);
      v4 = *(_BYTE *)(a1 + 12);
      v5 = *(_QWORD *)(a1 + 24);
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(_DWORD *)(a1 + 16);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          *(_BYTE *)(a2 + 2) = v4;
          *(_QWORD *)(a2 + 48) = v5;
          *(_QWORD *)(a2 + 56) = v6;
          *(_DWORD *)(a2 + 12) = v7;
        }
      }
      else
      {
        *(_BYTE *)a2 = v4;
        *(_QWORD *)(a2 + 32) = v5;
        *(_QWORD *)(a2 + 40) = v6;
        *(_DWORD *)(a2 + 8) = v7;
      }
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a1 - 19) <= 1 )
      {
        if ( (unsigned int)Feature_PoAdaptiveStandby__private_IsEnabledDeviceUsageNoInline() )
          PopAdaptiveStandbyHandlePowerMessage(a1);
      }
      break;
  }
  return 0LL;
}
