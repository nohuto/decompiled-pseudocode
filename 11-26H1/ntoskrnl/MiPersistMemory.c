/*
 * XREFs of MiPersistMemory @ 0x1406FAB64
 * Callers:
 *     MiPersistMdl @ 0x140508064 (MiPersistMdl.c)
 *     MiPersistVa @ 0x1406FAB8C (MiPersistVa.c)
 * Callees:
 *     KeInvalidateRangeAllCaches @ 0x1404B8E20 (KeInvalidateRangeAllCaches.c)
 *     KePersistMemory @ 0x140730830 (KePersistMemory.c)
 */

void __fastcall MiPersistMemory(void *a1, ULONG a2)
{
  if ( _bittest64(&KeFeatureBits, 0x24u) )
    KePersistMemory();
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
