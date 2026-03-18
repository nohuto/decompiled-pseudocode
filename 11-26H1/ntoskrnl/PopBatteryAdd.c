/*
 * XREFs of PopBatteryAdd @ 0x1407D7CF0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     IoSynchronousCallDriver @ 0x1404B2910 (IoSynchronousCallDriver.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404E11C4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopChangeCapability @ 0x140943114 (PopChangeCapability.c)
 *     PopPrepareIoctl @ 0x140AFBC84 (PopPrepareIoctl.c)
 *     PopBatteryWaitTag @ 0x140B625D0 (PopBatteryWaitTag.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopBatteryAdd(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 80), SynchronizationEvent, 0);
  if ( ++dword_140F0FE70 == 1 )
  {
    PopAcquirePolicyLock(v3, v2);
    LOBYTE(v4) = 1;
    PopChangeCapability(&stru_140F10828.WaitBlockFill11[54], v4);
    PopReleasePolicyLock(v6, v5, v7, v8, v13);
    _m_prefetchw(&PopCadLoadReason);
    if ( !_InterlockedOr(&PopCadLoadReason, 1u) )
      ExQueueWorkItem(&PopCadTriggerDriverLoadWorkItem, DelayedWorkQueue);
  }
  *(_DWORD *)(a1 + 248) = 0;
  if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
  {
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), 2703464, 0, (unsigned int)&v14, 0, 8);
    if ( IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56)) >= 0 )
      *(_DWORD *)(a1 + 248) = HIDWORD(v14);
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&qword_140F0FE60, v9, v10, v11);
  byte_140F0FE78 = 1;
  PopBatteryWaitTag(a1);
  PopBatteryQueueWork(8u);
  return PopReleaseRwLock((struct _KTHREAD *)&qword_140F0FE60);
}
