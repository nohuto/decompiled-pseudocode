/*
 * XREFs of GenerateRandomBytes @ 0x14008DE9C
 * Callers:
 *     NvmeFabricControllerQueueSendAuthReply @ 0x1400FE2D4 (NvmeFabricControllerQueueSendAuthReply.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140198C38 (NvmeAdapterCreateAuthenticationKey.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall GenerateRandomBytes(unsigned __int16 a1, __int64 a2, void *a3)
{
  ULONG v4; // esi
  NTSTATUS v5; // ebx
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  phAlgorithm = 0LL;
  memset_0(a3, 0, 0x100uLL);
  v5 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RNG", 0LL, 0);
  if ( v5 >= 0 )
    v5 = BCryptGenRandom(phAlgorithm, (PUCHAR)a3, v4, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)v5;
}
