/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x1407CEAC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x140424D08 (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopAcquireCoolingInterface @ 0x1407CE800 (PopAcquireCoolingInterface.c)
 *     PopDisableCoolingExtension @ 0x1407CED84 (PopDisableCoolingExtension.c)
 *     PopOrphanCoolingExtension @ 0x1407CEE54 (PopOrphanCoolingExtension.c)
 *     PopDiagTraceCoolingExtension @ 0x140AC37E0 (PopDiagTraceCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, unsigned __int64 *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    PopDisableCoolingExtension(Context);
    return 0LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    PopDisableCoolingExtension(Context);
LABEL_9:
    PopOrphanCoolingExtension(Context);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) < 0 )
      goto LABEL_9;
    PopAcquireRwLockExclusive(Context + 4, v7, v8, v9);
    *((_BYTE *)Context + 64) = 1;
    PopDiagTraceCoolingExtension(Context, POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( (unsigned __int64 *)Context[2] != Context + 2 )
      PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((struct _KTHREAD *)(Context + 4));
  }
  return 0LL;
}
