/*
 * XREFs of CcWriteBehindAsyncFlushOneRange @ 0x1405B62C4
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFlushCacheAcquireRange @ 0x14039BA5C (CcFlushCacheAcquireRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14039BBBC (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCacheOneRange @ 0x14039BEE0 (CcFlushCacheOneRange.c)
 */

char __fastcall CcWriteBehindAsyncFlushOneRange(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 152) & 0x4000000) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  *(_WORD *)v4 = 1;
  *(_BYTE *)(v4 + 2) = 6;
  *(_DWORD *)(v4 + 4) = 0;
  v4 += 8LL;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  while ( CcFlushCacheAcquireRange(a1) )
  {
    CcFlushCacheOneRange((__int64 *)a1, v5, v6, v7);
    if ( !*(_DWORD *)(a1 + 60) )
      return 1;
    if ( !CcFlushCachePostProcessOneRange((__int64 *)a1) )
      return v2;
  }
  return v2;
}
