/*
 * XREFs of PiUEventReferenceEventEntry @ 0x14099C594
 * Callers:
 *     PiUEventNotifyClient @ 0x14099A7E8 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x1409DD808 (PiUEventNotifyUserMode.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall PiUEventReferenceEventEntry(__int64 a1)
{
  unsigned int v2; // ebx

  ExAcquireFastMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  v2 = ++*(_DWORD *)(a1 + 56);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 16));
  return v2;
}
