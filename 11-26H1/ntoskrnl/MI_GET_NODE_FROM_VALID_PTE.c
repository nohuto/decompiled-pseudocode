/*
 * XREFs of MI_GET_NODE_FROM_VALID_PTE @ 0x1403D1CA0
 * Callers:
 *     MmGrowKernelStackEx @ 0x1403D1450 (MmGrowKernelStackEx.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 */

__int64 __fastcall MI_GET_NODE_FROM_VALID_PTE(__int64 *a1)
{
  unsigned __int64 PteShadow; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow((unsigned __int64)a1, *a1);
  return MiPageToNode((PteShadow >> 12) & 0xFFFFFFFFFFLL);
}
