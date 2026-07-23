/*
 * XREFs of I_MinCryptBuildErrorPolicy @ 0x1408A9C74
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408A7D80 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptGetSigningTime @ 0x1408A87B4 (I_MinCryptGetSigningTime.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall I_MinCryptBuildErrorPolicy(unsigned int a1, __int64 a2, int a3)
{
  int v3; // eax

  if ( a2 && !*(_DWORD *)a2 )
  {
    *(_OWORD *)a2 = 0LL;
    v3 = 0x10000000;
    *(_OWORD *)(a2 + 16) = 0LL;
    if ( a3 )
      v3 = a3;
    *(_OWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)a2 = 48;
    *(_DWORD *)(a2 + 8) = v3;
    *(_DWORD *)(a2 + 4) = a1;
  }
  return a1;
}
