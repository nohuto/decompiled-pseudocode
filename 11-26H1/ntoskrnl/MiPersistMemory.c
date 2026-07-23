/*
 * XREFs of MiPersistMemory @ 0x1406FF834
 * Callers:
 *     MiPersistMdl @ 0x140501A38 (MiPersistMdl.c)
 *     MiPersistVa @ 0x1406FF85C (MiPersistVa.c)
 * Callees:
 *     KeInvalidateRangeAllCaches @ 0x1404B2650 (KeInvalidateRangeAllCaches.c)
 *     KePersistMemory @ 0x140735400 (KePersistMemory.c)
 */

void __fastcall MiPersistMemory(void *a1, ULONG a2)
{
  if ( _bittest64(&KeFeatureBits, 0x24u) )
    KePersistMemory();
  else
    KeInvalidateRangeAllCaches(a1, a2);
}
