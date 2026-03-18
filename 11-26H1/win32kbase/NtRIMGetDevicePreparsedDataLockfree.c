/*
 * XREFs of NtRIMGetDevicePreparsedDataLockfree @ 0x1401FF160
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedDataLockfree @ 0x140198040 (RIMGetDevicePreparsedDataLockfree.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedDataLockfree(char *a1, void *a2, unsigned int *a3)
{
  return RIMGetDevicePreparsedDataLockfree(a1, a2, a3, 1);
}
