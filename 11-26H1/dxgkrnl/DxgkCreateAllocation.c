/*
 * XREFs of DxgkCreateAllocation @ 0x14035BAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z @ 0x14035BAD8 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEAIPEA_K@Z.c)
 */

__int64 __fastcall DxgkCreateAllocation(struct _D3DKMT_CREATEALLOCATION *a1)
{
  unsigned int v2[6]; // [rsp+20h] [rbp-18h] BYREF

  v2[0] = 0;
  return DxgkCreateAllocationInternal(a1, v2, 0LL);
}
