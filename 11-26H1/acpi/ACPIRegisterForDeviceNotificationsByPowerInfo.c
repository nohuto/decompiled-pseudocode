/*
 * XREFs of ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1400530EC
 * Callers:
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x140049968 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 *     ACPIRegisterForDeviceNotifications @ 0x14004F080 (ACPIRegisterForDeviceNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIRegisterForDeviceNotificationsByPowerInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned int v7; // ebp
  _QWORD *Pool2; // rbx
  void *v9; // rdi
  KIRQL v10; // al

  v4 = a1 - 376;
  v7 = -1073741823;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1299211073LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Pool2[3] = v4;
    Pool2[2] = DispatchNotificationWorker;
    *Pool2 = 0LL;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)(v4 + 928) || (v9 = 0LL, (*(_QWORD *)(v4 + 928) = Pool2) != 0LL) )
    {
      *(_QWORD *)(a1 + 16) = a2;
      v7 = 0;
      *(_QWORD *)(a1 + 24) = a3;
    }
  }
  KeReleaseSpinLock(&NotifyHandlerLock, v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x4D706341u);
  return v7;
}
