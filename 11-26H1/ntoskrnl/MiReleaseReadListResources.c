/*
 * XREFs of MiReleaseReadListResources @ 0x140A52550
 * Callers:
 *     MmWaitForCacheManagerPrefetch @ 0x14039F6A8 (MmWaitForCacheManagerPrefetch.c)
 *     MiPrefetchControlArea @ 0x140A4F258 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x140A50CB0 (MmPrefetchForCacheManager.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MmPrefetchPagesEx @ 0x140A51A98 (MmPrefetchPagesEx.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     MiRemoveViewsFromSectionWithPfn @ 0x14045ED08 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiFreeReadListPages @ 0x140A525E0 (MiFreeReadListPages.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseReadListResources(__int64 a1)
{
  __int64 v1; // rbx
  void **v3; // rdi
  void ***v4; // rbx
  void **v5; // rax
  __int64 v6; // rsi

  v1 = *(_QWORD *)(a1 + 8);
  MiFreeReadListPages(a1);
  if ( (*(_DWORD *)(v1 + 56) & 0x20) == 0 )
  {
    v3 = (void **)(a1 + 24);
    while ( 1 )
    {
      v4 = (void ***)*v3;
      if ( *v3 == v3 )
        break;
      if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v5;
      v6 = 0LL;
      for ( v5[1] = v3; (unsigned int)v6 < *((_DWORD *)v4 + 4); v6 = (unsigned int)(v6 + 1) )
        MiRemoveViewsFromSectionWithPfn((__int64 *)v4[v6 + 3], *((unsigned int *)v4[v6 + 3] + 11), 2);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
