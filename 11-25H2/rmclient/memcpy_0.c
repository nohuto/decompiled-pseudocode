/*
 * XREFs of memcpy_0 @ 0x18001C042
 * Callers:
 *     RmpClientWnfSubscriptionWorker @ 0x18000A6A0 (RmpClientWnfSubscriptionWorker.c)
 *     CempGetTokenHostInfo @ 0x18000D0F0 (CempGetTokenHostInfo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
