/*
 * XREFs of MiAllocateSlabEntry @ 0x140206EC0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiCreateBootSlabEntries @ 0x140CFE048 (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     KcsanMarkAddressIgnored @ 0x1404F7F60 (KcsanMarkAddressIgnored.c)
 */

__int64 __fastcall MiAllocateSlabEntry(__int64 a1)
{
  unsigned int v2; // ebp
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rbx

  v2 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3];
  v3 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v3) = v3 | 0x80000000;
  result = ExAllocatePoolMm(64LL, ((unsigned __int64)v2 >> 3) + 96, 1699965261LL, v3);
  v5 = result;
  if ( result )
  {
    *(_QWORD *)(result + 56) = a1;
    *(_QWORD *)(result + 72) = result + 96;
    *(_DWORD *)(result + 64) = v2;
    KcsanMarkAddressIgnored(result + 96, (unsigned __int64)v2 >> 3);
    return v5;
  }
  return result;
}
