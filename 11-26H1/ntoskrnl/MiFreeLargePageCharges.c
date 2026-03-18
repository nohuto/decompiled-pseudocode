/*
 * XREFs of MiFreeLargePageCharges @ 0x1403C4704
 * Callers:
 *     MiFreeContiguousPages @ 0x1403C3858 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x1403C43F8 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403C5FB0 (MiFinishLargePageFree.c)
 *     MiFreeContiguousLargePageRun @ 0x140701770 (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140711B98 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403C2FD8 (MiReleaseNonPagedResourcesNotExposed.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 result; // rax

  if ( a2 )
  {
    if ( (a3 & 0x20) != 0 )
      return MiReleaseNonPagedResourcesNotExposed(a1, a2);
    else
      return MiReleaseNonPagedResources(a1, a2);
  }
  return result;
}
