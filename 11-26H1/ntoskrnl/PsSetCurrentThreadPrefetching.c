/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x140988020
 * Callers:
 *     PfpPrefetchSharedCleanup @ 0x140987F6C (PfpPrefetchSharedCleanup.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( Prefetching )
    return _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x19u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x19u);
}
