/*
 * XREFs of ZwLockProductActivationKeys @ 0x14069D3E0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140C2F2B0 (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
