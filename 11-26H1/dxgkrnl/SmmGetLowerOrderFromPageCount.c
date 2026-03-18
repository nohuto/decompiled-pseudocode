/*
 * XREFs of SmmGetLowerOrderFromPageCount @ 0x14009CE30
 * Callers:
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1402879D0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x140287E80 (SmmInitializeLogicalAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetLowerOrderFromPageCount(unsigned __int64 a1)
{
  __int64 result; // rax

  _BitScanReverse64((unsigned __int64 *)&result, a1);
  return result;
}
