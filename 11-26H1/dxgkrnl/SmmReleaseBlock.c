/*
 * XREFs of SmmReleaseBlock @ 0x14009CEDC
 * Callers:
 *     SmmAcquireBlock @ 0x140061824 (SmmAcquireBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009CC60 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14028785C (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 * Callees:
 *     SmmGetSiblingBlock @ 0x140069FBC (SmmGetSiblingBlock.c)
 *     SmmCoalesceBlocks @ 0x14009CB04 (SmmCoalesceBlocks.c)
 */

_QWORD *__fastcall SmmReleaseBlock(__int64 a1, __int64 *a2)
{
  __int64 SiblingBlock; // rax
  __int64 *v4; // rdx
  _QWORD *result; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rdx

  SiblingBlock = SmmGetSiblingBlock(a1, a2);
  if ( SiblingBlock && !_bittest64((const signed __int64 *)(SiblingBlock + 32), 0x34u) )
    return (_QWORD *)SmmCoalesceBlocks(a1, v4, (__int64 *)SiblingBlock);
  v4[4] &= ~0x10000000000000uLL;
  v6 = (_DWORD *)(a1 + 24 * (((unsigned __int64)v4[4] >> 53) & 0x3F));
  result = v4 + 2;
  v7 = *(_QWORD *)v6;
  if ( *(_DWORD **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *result = v7;
  result[1] = v6;
  *(_QWORD *)(v7 + 8) = result;
  *(_QWORD *)v6 = result;
  ++v6[4];
  return result;
}
