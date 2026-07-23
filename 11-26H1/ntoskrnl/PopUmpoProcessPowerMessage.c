/*
 * XREFs of PopUmpoProcessPowerMessage @ 0x1407DF428
 * Callers:
 *     PopUmpoProcessMessage @ 0x140AA77A8 (PopUmpoProcessMessage.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PfIoPowerEventNotify @ 0x1407C8798 (PfIoPowerEventNotify.c)
 *     PopPowerRequestNotificationsBegin @ 0x1407CC5E4 (PopPowerRequestNotificationsBegin.c)
 *     PopPowerRequestOverrideInitialize @ 0x1407CC6C4 (PopPowerRequestOverrideInitialize.c)
 *     PopAdaptiveStandbyHandlePowerMessage @ 0x1407E4270 (PopAdaptiveStandbyHandlePowerMessage.c)
 *     PopSetNewPolicyValue @ 0x1409F98F8 (PopSetNewPolicyValue.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140ABC8DC (PopPowerAggregatorScheduleWorker.c)
 */

__int64 __fastcall PopUmpoProcessPowerMessage(__int64 a1, __int64 a2)
{
  int v2; // r11d
  char v3; // al
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
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
        PfIoPowerEventNotify(*(_DWORD *)(a1 + 12), a2, 1u);
      break;
    case 8:
      PopPowerRequestHandleRequestOverrideQueryResponse((unsigned int *)(a1 + 8));
      break;
    case 0xA:
      if ( *(_BYTE *)(a1 + 8) )
        PopPowerRequestNotificationsBegin(a1);
      PopPowerRequestOverrideInitialize();
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerAggregatorLock, v7, v8, v9);
      PopPowerAggregatorUmpoInitialized = 1;
      PopPowerAggregatorScheduleWorker(PopPowerAggregatorContext);
      PopReleaseRwLock((struct _KTHREAD *)&PopPowerAggregatorLock);
      if ( qword_140E67850 )
        guard_dispatch_icall_no_overrides(v11, v10);
      break;
    case 0x12:
      v2 = *(_DWORD *)(a1 + 8);
      v3 = *(_BYTE *)(a1 + 12);
      v4 = *(_QWORD *)(a1 + 24);
      v5 = *(_QWORD *)(a1 + 32);
      v6 = *(_DWORD *)(a1 + 16);
      if ( v2 )
      {
        if ( v2 == 1 )
        {
          *(_BYTE *)(a2 + 2) = v3;
          *(_QWORD *)(a2 + 48) = v4;
          *(_QWORD *)(a2 + 56) = v5;
          *(_DWORD *)(a2 + 12) = v6;
        }
      }
      else
      {
        *(_BYTE *)a2 = v3;
        *(_QWORD *)(a2 + 32) = v4;
        *(_QWORD *)(a2 + 40) = v5;
        *(_DWORD *)(a2 + 8) = v6;
      }
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a1 - 19) <= 1 )
        PopAdaptiveStandbyHandlePowerMessage();
      break;
  }
  return 0LL;
}
