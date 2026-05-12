/*
 * XREFs of RaidFreezeUnitQueue @ 0x1400A6784
 * Callers:
 *     RaUnitAsyncError @ 0x140016430 (RaUnitAsyncError.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A9E8C (RaidUnitTestDeviceQueue.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x14002DED0 (RiDisableDeviceQueueFastPath.c)
 *     RaUnitLockForwardIo @ 0x140042F00 (RaUnitLockForwardIo.c)
 */

void __fastcall RaidFreezeUnitQueue(__int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 720;
  *(_BYTE *)(v2 + 36) = 1;
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)v2, 0);
  RaUnitLockForwardIo(a1, 3);
}
