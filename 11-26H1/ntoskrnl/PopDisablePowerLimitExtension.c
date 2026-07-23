/*
 * XREFs of PopDisablePowerLimitExtension @ 0x1407CDB28
 * Callers:
 *     PopPowerLimitPnpNotification @ 0x1407CE1B0 (PopPowerLimitPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopEvaluatePowerLimitChange @ 0x1407CDC04 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D711C (PopDiagTracePowerLimitExtension.c)
 */

__int64 __fastcall PopDisablePowerLimitExtension(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v4 = (struct _KTHREAD *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive((unsigned __int64 *)(a1 + 32), a2, a3, a4);
  if ( !*(_BYTE *)(a1 + 48) )
    return PopReleaseRwLock(v4);
  *(_BYTE *)(a1 + 48) = 0;
  PopDiagTracePowerLimitExtension(a1, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_REMOVE);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 192) = &Event;
  PopEvaluatePowerLimitChange(a1);
  PopReleaseRwLock(v4);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((unsigned __int64 *)v4, v7, v8, v9);
  *(_QWORD *)(a1 + 192) = 0LL;
  v10 = *(_QWORD *)(a1 + 120);
  PopReleaseRwLock(v4);
  return guard_dispatch_icall_no_overrides(v10, v11);
}
