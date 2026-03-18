/*
 * XREFs of ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z @ 0x14011B60C
 * Callers:
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x14011B504 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM.c)
 * Callees:
 *     EvictAllocationCallback @ 0x1400B62BC (EvictAllocationCallback.c)
 */

void __fastcall VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  __int64 v4; // rbx
  char *v5; // rdi
  __int64 v9; // rdx
  unsigned __int64 *v10; // rax

  v4 = *((_QWORD *)this + 9);
  v5 = (char *)this + 64;
  do
  {
    v9 = v4;
    if ( (char *)v4 == v5 )
      break;
    v10 = (unsigned __int64 *)(v4 - 24);
    v4 = *(_QWORD *)(v4 + 8);
  }
  while ( *v10 >= a3
       || *(_QWORD *)(v9 - 16) + *v10 <= a2
       || *(_BYTE *)(v9 + 32) != 3
       || EvictAllocationCallback(a4, *(_QWORD **)(v9 - 8)) );
}
