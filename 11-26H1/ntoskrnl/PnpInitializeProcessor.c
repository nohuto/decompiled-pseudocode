/*
 * XREFs of PnpInitializeProcessor @ 0x1405DAF0C
 * Callers:
 *     KeStartDynamicProcessor @ 0x1407BD540 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  void *v0; // rcx
  __int128 v2; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0LL;
  v0 = (void *)*((_QWORD *)IopRootDeviceNode + 4);
  DWORD2(v2) = 1;
  PnpRequestDeviceAction(v0, 6u, 0, &v2, 0LL, 0LL, 0LL);
  return 0LL;
}
