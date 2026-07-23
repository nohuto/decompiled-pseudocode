/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x1407DB220
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1404A5588 (PnpUnregisterPlugPlayNotification.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1407DB1A4 (PopPolicyDeviceRemove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(
        char *NotificationStructure,
        int *Context,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v6 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPolicyDeviceLock, (__int64)Context, a3, a4);
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v8 )
  {
    PopPolicyDeviceRemove((__int64)Context, v7);
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v9 )
  {
    PopPolicyDeviceRemove((__int64)Context, v7);
LABEL_13:
    v6 = 1;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v10 )
  {
    PopConnectToPolicyDevice(Context[4], (const UNICODE_STRING *)Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  if ( v6 )
  {
    PnpUnregisterPlugPlayNotification(*((struct _LIST_ENTRY **)Context + 3), 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140E01B04 + 8 * Context[4]));
  }
  return 0LL;
}
