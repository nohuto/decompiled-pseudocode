/*
 * XREFs of ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1400997B0
 * Callers:
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x140099728 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE.c)
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FreeMemoryBlocks(VIDMM_LINEAR_POOL *a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx
  _BYTE *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r9

  if ( a2 != 7 )
    return 3221225485LL;
  v5 = (_QWORD *)((char *)a1 + 144);
  v6 = (_QWORD *)*((_QWORD *)a1 + 18);
  do
  {
    if ( v6 == v5 )
    {
      WdLogSingleEntry5(0LL, 275LL, 23LL, 7LL, *a4, a4[1]);
      WdLogGlobalForLineNumber = 1500;
      return 3221225485LL;
    }
    v7 = v6 - 3;
    v6 = (_QWORD *)*v6;
  }
  while ( v7[56] != 7 || *(_QWORD *)v7 != *a4 );
  v8 = a4[1];
  v9 = *((_QWORD *)v7 + 1);
  if ( v9 != v8 )
  {
    WdLogSingleEntry5(0LL, 275LL, 23LL, v9, v8, 0LL);
    WdLogGlobalForLineNumber = 1488;
  }
  VIDMM_LINEAR_POOL::Free(a1, v7);
  return 0LL;
}
