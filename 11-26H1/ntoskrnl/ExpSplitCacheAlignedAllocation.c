/*
 * XREFs of ExpSplitCacheAlignedAllocation @ 0x140447ED0
 * Callers:
 *     ExAllocateHeapPool @ 0x14039A530 (ExAllocateHeapPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSplitCacheAlignedAllocation(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edx
  __int64 v3; // r8
  unsigned __int64 v4; // rdx

  v1 = ExpCacheLineSize;
  *(_BYTE *)(a1 + 3) &= ~4u;
  v2 = (-16 - a1) & (v1 - 1);
  if ( !v2 )
    return a1;
  v3 = v2 + a1;
  v4 = (unsigned __int64)v2 >> 4;
  *(_BYTE *)v3 = v4;
  *(_BYTE *)(v3 + 2) = *(_BYTE *)(a1 + 2) - v4;
  *(_BYTE *)(v3 + 1) = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(v3 + 3) = *(_BYTE *)(a1 + 3) | 4;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)(a1 + 4);
  if ( (unsigned __int8)*(_WORD *)v3 > 1u )
    *(_QWORD *)(a1 + 16) = (__int64)stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink ^ v3;
  return v3;
}
