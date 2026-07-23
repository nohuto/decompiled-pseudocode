/*
 * XREFs of PopNotifyPolicyDevice @ 0x1407DAD80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopConnectToPolicyDevice @ 0x1407DAA8C (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1407DAE34 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopEnableHiberFile @ 0x1409BEEB4 (PopEnableHiberFile.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(
        char *NotificationStructure,
        __int64 Context,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v4; // edi
  __int64 v5; // rax
  bool v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-8h]

  v4 = Context;
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v7 = v5 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopPolicyDeviceHandleWakeAlarmNotification();
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4LL);
    PopAcquirePolicyLock(v9, v8);
    v10 = PopHiberEnabled;
    PopEnableHiberFile(0LL);
    if ( v10 )
    {
      LOBYTE(v12) = 1;
      PopEnableHiberFile(v12);
    }
    PopReleasePolicyLock(v12, v11, v13, v14, v16);
    PopReleaseTransitionLock(4LL);
  }
  else if ( !v7 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPolicyDeviceLock, Context, a3, a4);
    PopConnectToPolicyDevice(v4, *((const UNICODE_STRING **)NotificationStructure + 5));
    PopReleaseRwLock((struct _KTHREAD *)&PopPolicyDeviceLock);
  }
  return 0LL;
}
