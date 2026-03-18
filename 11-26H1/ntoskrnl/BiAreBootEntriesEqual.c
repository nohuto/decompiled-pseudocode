/*
 * XREFs of BiAreBootEntriesEqual @ 0x1409D0EEC
 * Callers:
 *     BiUpdateBcdObject @ 0x1409D0B64 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409D298C (BiUpdateEfiEntry.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

bool __fastcall BiAreBootEntriesEqual(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && !memcmp(a1, a2, (unsigned int)a1[1]);
}
