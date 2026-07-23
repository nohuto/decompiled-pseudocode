/*
 * XREFs of RtlpGetChainHead @ 0x1800D5D10
 * Callers:
 *     RtlStronglyEnumerateEntryHashTable @ 0x1800D5950 (RtlStronglyEnumerateEntryHashTable.c)
 *     RtlContractHashTable @ 0x1800D59C0 (RtlContractHashTable.c)
 *     RtlExpandHashTable @ 0x1800D5B20 (RtlExpandHashTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetChainHead(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) > 0x80u )
  {
    _BitScanReverse(&v4, a2 + 128);
    a2 = (a2 + 128) ^ (1 << v4);
    v2 = *(_QWORD *)(v2 + 8LL * (v4 - 7));
  }
  return v2 + 16LL * a2;
}
