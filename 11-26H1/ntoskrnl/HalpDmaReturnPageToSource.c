/*
 * XREFs of HalpDmaReturnPageToSource @ 0x140534F0C
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x140509940 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1407854E0 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaReturnToContiguousPool @ 0x14035B35C (HalpDmaReturnToContiguousPool.c)
 *     HalpDmaReturnToScatterPool @ 0x14035B454 (HalpDmaReturnToScatterPool.c)
 */

void __fastcall HalpDmaReturnPageToSource(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(a2 + 48);
  LOBYTE(a3) = 1;
  if ( (v3 & 1) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 152) )
      a1 = *(_QWORD *)(a1 + 160);
    v4 = v3 | 4;
    if ( (v4 & 2) != 0 )
    {
      *(_QWORD *)(a2 + 48) = v4 | 8;
      HalpDmaReturnToScatterPool(a1, a2, a3);
    }
    else
    {
      *(_QWORD *)(a2 + 48) = v4 & 0xFFFFFFFFFFFFFFF7uLL;
      HalpDmaReturnToContiguousPool(a1, a2, 1);
    }
  }
}
