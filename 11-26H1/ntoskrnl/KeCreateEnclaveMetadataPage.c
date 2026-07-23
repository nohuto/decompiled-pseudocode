/*
 * XREFs of KeCreateEnclaveMetadataPage @ 0x1405F1270
 * Callers:
 *     MiDecommitRemoveEnclavePageForce @ 0x140343E60 (MiDecommitRemoveEnclavePageForce.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140704D20 (MiPrepareEnclaveMetadataPage.c)
 * Callees:
 *     KiEncls @ 0x14072CBA0 (KiEncls.c)
 */

__int64 __fastcall KeCreateEnclaveMetadataPage(__int64 a1)
{
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  KiEncls(10LL, 3LL, a1, 0LL);
  return 0LL;
}
