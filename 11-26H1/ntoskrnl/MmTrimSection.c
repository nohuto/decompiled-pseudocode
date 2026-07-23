/*
 * XREFs of MmTrimSection @ 0x14045DEB0
 * Callers:
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcCoherencyFlushAndPurgeCache @ 0x14045DD80 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiFlushRelease @ 0x14036F2C0 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x14045DF50 (MiComputeFlushRange.c)
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 */

__int64 __fastcall MmTrimSection(int a1, __int64 *a2, int a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int128 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v4 = a4 & 1 | 0x20;
  if ( (a4 & 2) == 0 )
    v4 = a4 & 1;
  if ( a2 )
  {
    v5 = *a2;
    a2 = &v11;
    v11 = v5;
  }
  if ( !(unsigned int)MiComputeFlushRange(a1, (_DWORD)a2, a3, v4 >= 0x20, (__int64)&v8) )
    return 0LL;
  v6 = MiTrimSection(&v8, 0LL, v4);
  MiFlushRelease(v8, *((ULONG_PTR *)&v9 + 1), v10);
  return v6;
}
