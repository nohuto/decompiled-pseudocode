/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405EE900
 * Callers:
 *     MiDecommitRemoveEnclavePageForce @ 0x140341DE0 (MiDecommitRemoveEnclavePageForce.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140700050 (MiPrepareEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x140727FD0 (KiEncls.c)
 */

__int64 __fastcall KeCreateEnclaveMetadataPage(__int64 a1)
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(10LL, 3LL, a1, 0LL);
  return 0LL;
}
