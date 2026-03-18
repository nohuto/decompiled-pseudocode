/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1409B5CF0
 * Callers:
 *     IopCreateFile @ 0x1409B3A58 (IopCreateFile.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x1409B5D30 (FsRtlpCleanupEcps.c)
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
