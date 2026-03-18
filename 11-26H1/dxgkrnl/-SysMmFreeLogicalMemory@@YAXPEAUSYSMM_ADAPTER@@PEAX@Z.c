/*
 * XREFs of ?SysMmFreeLogicalMemory@@YAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x140287F10
 * Callers:
 *     <none>
 * Callees:
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009CC60 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

void __fastcall SysMmFreeLogicalMemory(struct SYSMM_LOGICAL_ALLOCATOR **a1, struct SYSMM_LOGICAL_BLOCK *a2)
{
  SmmFreeLogicalAddress(a1[44], a2);
}
