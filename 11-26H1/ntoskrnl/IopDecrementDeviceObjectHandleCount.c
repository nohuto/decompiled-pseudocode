/*
 * XREFs of IopDecrementDeviceObjectHandleCount @ 0x1405CCFB4
 * Callers:
 *     IopRemoveDevice @ 0x1409B1DD8 (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE1AFC (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IopDecrementDeviceObjectRef @ 0x1402FD820 (IopDecrementDeviceObjectRef.c)
 */

__int64 __fastcall IopDecrementDeviceObjectHandleCount(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  return IopDecrementDeviceObjectRef(a1, 0LL, 0LL, a4);
}
