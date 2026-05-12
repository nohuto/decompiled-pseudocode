/*
 * XREFs of NvmeCopyCachedLogPage @ 0x14011FF34
 * Callers:
 *     NvmeQueryProtocolInfoLogPageData @ 0x140121494 (NvmeQueryProtocolInfoLogPageData.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeCopyCachedLogPage(__int64 a1, const void *a2, unsigned int a3)
{
  if ( !a2 )
    return 3221225485LL;
  memmove((void *)(a1 + *(unsigned int *)(a1 + 16)), a2, a3);
  return 0LL;
}
