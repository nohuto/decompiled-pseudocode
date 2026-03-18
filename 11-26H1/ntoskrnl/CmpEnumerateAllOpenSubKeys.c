/*
 * XREFs of CmpEnumerateAllOpenSubKeys @ 0x1408AF75C
 * Callers:
 *     CmpPerformUnloadKey @ 0x1408AFC14 (CmpPerformUnloadKey.c)
 *     CmpFreezeHive @ 0x140A2F860 (CmpFreezeHive.c)
 *     CmpSearchForOpenSubKeys @ 0x140B2250C (CmpSearchForOpenSubKeys.c)
 *     CmpInvalidateSubtree @ 0x140B474C4 (CmpInvalidateSubtree.c)
 * Callees:
 *     CmpEnumerateKcbCacheBucket @ 0x1408AF85C (CmpEnumerateKcbCacheBucket.c)
 *     CmpCleanUpKCBCacheTable @ 0x1408AFB20 (CmpCleanUpKCBCacheTable.c)
 */

__int64 __fastcall CmpEnumerateAllOpenSubKeys(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int i; // edi
  unsigned int v12; // ecx
  int v13; // ecx

  v4 = *(_QWORD *)(a1 + 32);
  result = CmpCleanUpKCBCacheTable(v4);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    v10 = 0LL;
    for ( i = 0; i < *(_DWORD *)(v4 + 1656); i = v12 + 1 )
    {
      result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1648) + 24LL * i, a3, a4);
      if ( (_DWORD)result == 1 )
        return result;
      v12 = i - 1;
      if ( (_DWORD)result != 2 )
        v12 = i;
    }
    if ( a2 && *(_DWORD *)(v4 + 1672) )
    {
      do
      {
        result = CmpEnumerateKcbCacheBucket(a1, *(_QWORD *)(v4 + 1664) + 24 * v10, a3, a4);
        if ( (_DWORD)result == 1 )
          break;
        v13 = v10 - 1;
        if ( (_DWORD)result != 2 )
          v13 = v10;
        v10 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v10 < *(_DWORD *)(v4 + 1672) );
    }
  }
  return result;
}
