/*
 * XREFs of MiFreeLargePageCharges @ 0x1403CE610
 * Callers:
 *     MiFreeContiguousPages @ 0x1403CD758 (MiFreeContiguousPages.c)
 *     MiFreeSmallPageFromMdl @ 0x1403CE304 (MiFreeSmallPageFromMdl.c)
 *     MiFinishLargePageFree @ 0x1403CFEB0 (MiFinishLargePageFree.c)
 *     MiFreeContiguousLargePageRun @ 0x140706440 (MiFreeContiguousLargePageRun.c)
 *     MiFreeLargeProcessPagesToCache @ 0x140716898 (MiFreeLargeProcessPagesToCache.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
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
