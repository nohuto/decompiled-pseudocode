/*
 * XREFs of HvpViewMapGetStorageLength @ 0x140B09E84
 * Callers:
 *     HvUnCOWReconciledPages @ 0x140465CE8 (HvUnCOWReconciledPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpViewMapGetStorageLength(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 8) - 4096);
}
