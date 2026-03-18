/*
 * XREFs of PopPowerLimitPnpNotification @ 0x1407CB110
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopAcquirePowerLimitInterface @ 0x1407CA744 (PopAcquirePowerLimitInterface.c)
 *     PopDisablePowerLimitExtension @ 0x1407CAA88 (PopDisablePowerLimitExtension.c)
 *     PopEvaluatePowerLimitChange @ 0x1407CAB64 (PopEvaluatePowerLimitChange.c)
 *     PopOrphanPowerLimitExtension @ 0x1407CB020 (PopOrphanPowerLimitExtension.c)
 *     PopDiagTracePowerLimitExtension @ 0x1407D3F9C (PopDiagTracePowerLimitExtension.c)
 *     PopDiagTracePowerLimitRequest @ 0x1407D4330 (PopDiagTracePowerLimitRequest.c)
 */

__int64 __fastcall PopPowerLimitPnpNotification(
        char *NotificationStructure,
        unsigned __int64 *Context,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  __int64 v11; // rax
  _QWORD *v12; // rsi
  unsigned __int64 i; // rdi

  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    PopDisablePowerLimitExtension((__int64)Context, (__int64)Context, a3, a4);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v6 )
  {
    PopDisablePowerLimitExtension((__int64)Context, (__int64)Context, a3, a4);
LABEL_9:
    PopOrphanPowerLimitExtension(Context, v7, v8, v9);
    return 0LL;
  }
  v11 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v11 )
  {
    if ( (int)PopAcquirePowerLimitInterface((__int64)Context) < 0 )
      goto LABEL_9;
    PopAcquireRwLockExclusive(Context + 4, v7, v8, v9);
    *((_BYTE *)Context + 48) = 1;
    PopDiagTracePowerLimitExtension(Context, POP_ETW_EVENT_POWER_LIMIT_EXTENSION_ADD);
    v12 = Context + 2;
    for ( i = Context[2]; (_QWORD *)i != v12; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 16) != 1 )
      {
        *(_BYTE *)(i + 16) = 1;
        PopDiagTracePowerLimitRequest(i, POP_ETW_EVENT_POWER_LIMIT_REQUEST_ADD);
      }
    }
    if ( (_QWORD *)*v12 != v12 )
      PopEvaluatePowerLimitChange((__int64)Context);
    PopReleaseRwLock((struct _KTHREAD *)(Context + 4));
  }
  return 0LL;
}
