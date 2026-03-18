/*
 * XREFs of MinCryptDecodeHashAlgorithmIdentifier @ 0x1408A03B0
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A0AA4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A250C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A27C4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A2AC4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x1408A0404 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x1408A320C (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeHashAlgorithmIdentifier(__int64 a1)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v2) >= 0 )
    return MinCryptDecodeOid(byte_140BDF440, 23LL, v3);
  else
    return 0LL;
}
