/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1401D8030
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x14002C3C0 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(__int64 a1, ULONG64 a2)
{
  return RIMGetDevicePropertiesLockfree(a1, a2, 1);
}
