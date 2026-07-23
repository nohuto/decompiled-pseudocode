/*
 * XREFs of HvpViewMapGetStorageLength @ 0x140B0BC44
 * Callers:
 *     HvUnCOWReconciledPages @ 0x14045EE58 (HvUnCOWReconciledPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapGetStorageLength(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 8) - 4096);
}
