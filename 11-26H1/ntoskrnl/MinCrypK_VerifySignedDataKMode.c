/*
 * XREFs of MinCrypK_VerifySignedDataKMode @ 0x1408A8E80
 * Callers:
 *     MinCrypK_ParseRevocationList @ 0x1407216F8 (MinCrypK_ParseRevocationList.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408A8BD4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 * Callees:
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 */

__int64 __fastcall MinCrypK_VerifySignedDataKMode(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  return MinCrypK_VerifySignedDataKModeEx(a1, a2, 0, 0, a5, a6, a7);
}
