/*
 * XREFs of ZwLockRegistryKey @ 0x14072A280
 * Callers:
 *     SepZwLockRegistryKey @ 0x140815A40 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140AE3B50 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
