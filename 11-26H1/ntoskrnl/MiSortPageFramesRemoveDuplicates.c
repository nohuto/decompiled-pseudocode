/*
 * XREFs of MiSortPageFramesRemoveDuplicates @ 0x1406F6BD4
 * Callers:
 *     MiGetListOfPendingBadPages @ 0x14052D078 (MiGetListOfPendingBadPages.c)
 *     MmEnumerateBadPages @ 0x140B6099C (MmEnumerateBadPages.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiSortPageFramesRemoveDuplicates(__int64 *a1, size_t a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  size_t v5; // r8
  __int64 *i; // r9
  __int64 v7; // rdx

  v3 = a1;
  qsort(a1, a2, 8uLL, (int (__cdecl *)(const void *, const void *))MiBadPageSort);
  v4 = 0LL;
  v5 = 0LL;
  for ( i = v3; v5 < a2; ++v5 )
  {
    v7 = *i;
    if ( !v5 || ((*(v3 - 1) ^ v7) & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      *v3++ = v7;
      ++v4;
    }
    ++i;
  }
  return v4;
}
