/*
 * XREFs of MinCryptHashMemory @ 0x14071C940
 * Callers:
 *     MinCrypK_HashMemory @ 0x1408A0384 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A0AA4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MinCryptParseRevocationList @ 0x1408A1C0C (MinCryptParseRevocationList.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A250C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A27C4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x1408A29D8 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A2AC4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     HashpHashMemory @ 0x1408ABB4C (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1);
}
