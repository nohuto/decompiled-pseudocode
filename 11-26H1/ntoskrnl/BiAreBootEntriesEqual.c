/*
 * XREFs of BiAreBootEntriesEqual @ 0x1409A1ECC
 * Callers:
 *     BiUpdateBcdObject @ 0x1409A1B44 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409A396C (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && !memcmp(a1, a2, (unsigned int)a1[1]);
}
