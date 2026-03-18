/*
 * XREFs of MiPrefetchReleasePreallocatedPages @ 0x140505F80
 * Callers:
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiFreePageChain @ 0x140292AA4 (MiFreePageChain.c)
 */

__int64 __fastcall MiPrefetchReleasePreallocatedPages(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  result = MiFreePageChain(a2 + 88, a2, a3);
  if ( a4 )
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      result = MiReleaseNonPagedResources(a3, 512LL);
      *(_DWORD *)(a1 + 16) = 0;
    }
  }
  return result;
}
