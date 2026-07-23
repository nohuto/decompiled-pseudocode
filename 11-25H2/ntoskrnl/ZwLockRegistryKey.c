/*
 * XREFs of ZwLockRegistryKey @ 0x14069D400
 * Callers:
 *     SepZwLockRegistryKey @ 0x14077F970 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140A35D60 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
