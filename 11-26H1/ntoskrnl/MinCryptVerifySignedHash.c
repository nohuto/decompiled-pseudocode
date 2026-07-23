/*
 * XREFs of MinCryptVerifySignedHash @ 0x1408A6898
 * Callers:
 *     MinCryptCheckCertsAndKeys @ 0x1407218C8 (MinCryptCheckCertsAndKeys.c)
 * Callees:
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 */

__int64 __fastcall MinCryptVerifySignedHash(int a1, int a2, int a3, int a4, __int64 a5)
{
  return MinCryptVerifySignedHash2(a1, a2, a3, a4, a5, 0LL);
}
