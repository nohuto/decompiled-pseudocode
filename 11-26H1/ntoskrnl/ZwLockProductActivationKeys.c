/*
 * XREFs of ZwLockProductActivationKeys @ 0x14072A260
 * Callers:
 *     DifZwLockProductActivationKeysWrapper @ 0x1406AD290 (DifZwLockProductActivationKeysWrapper.c)
 *     ExInitializeTimeRefresh @ 0x140CEA100 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
