/*
 * XREFs of ZwLockRegistryKey @ 0x14069D400
 * Callers:
 *     SepZwLockRegistryKey @ 0x14077F970 (SepZwLockRegistryKey.c)
 *     NtLockProductActivationKeys @ 0x140A35D60 (NtLockProductActivationKeys.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
