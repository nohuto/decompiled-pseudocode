/*
 * XREFs of MinCryptHashMemory @ 0x1407215D0
 * Callers:
 *     MinCrypK_HashMemory @ 0x1408A6794 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MinCryptParseRevocationList @ 0x1408A801C (MinCryptParseRevocationList.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A8BD4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A8DE8 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     HashpHashMemory @ 0x1408B1F90 (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1);
}
