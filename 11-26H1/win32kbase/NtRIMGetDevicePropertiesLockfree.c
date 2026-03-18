/*
 * XREFs of NtRIMGetDevicePropertiesLockfree @ 0x1401FF180
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePropertiesLockfree @ 0x14016D560 (RIMGetDevicePropertiesLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePropertiesLockfree(char *a1, char *a2)
{
  return RIMGetDevicePropertiesLockfree(a1, a2, 1);
}
