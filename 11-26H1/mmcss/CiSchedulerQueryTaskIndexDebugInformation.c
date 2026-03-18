/*
 * XREFs of CiSchedulerQueryTaskIndexDebugInformation @ 0x14000563C
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x14000FA60 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x140003990 (CiSystemAcquireSpinLock.c)
 */

void __fastcall CiSchedulerQueryTaskIndexDebugInformation(__int64 a1, _DWORD *a2)
{
  *a2 = 0;
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  *a2 ^= ((unsigned __int8)*a2 ^ (unsigned __int8)(*(_DWORD *)(a1 + 184) >> 2)) & 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
