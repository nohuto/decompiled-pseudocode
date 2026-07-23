/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x140986DB0
 * Callers:
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x140986DF0 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 168);
  if ( v2 )
  {
    if ( (unsigned __int8)FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
