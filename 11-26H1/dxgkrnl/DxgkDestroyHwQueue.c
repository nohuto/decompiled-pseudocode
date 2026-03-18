/*
 * XREFs of DxgkDestroyHwQueue @ 0x1403F0A90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyHwQueueInternal @ 0x1403F0AA8 (DxgkDestroyHwQueueInternal.c)
 */

__int64 __fastcall DxgkDestroyHwQueue(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return DxgkDestroyHwQueueInternal(a1, a2);
}
