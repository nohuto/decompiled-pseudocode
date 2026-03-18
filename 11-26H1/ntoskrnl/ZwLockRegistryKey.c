/*
 * XREFs of ZwLockRegistryKey @ 0x1407256B0
 * Callers:
 *     SepZwLockRegistryKey @ 0x14080FFB0 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140AE5D90 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
