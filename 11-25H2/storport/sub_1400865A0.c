/*
 * XREFs of sub_1400865A0 @ 0x1400865A0
 * Callers:
 *     sub_1400F5B44 @ 0x1400F5B44 (sub_1400F5B44.c)
 *     sub_14018B8C8 @ 0x14018B8C8 (sub_14018B8C8.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400865A0(unsigned __int16 a1, __int64 a2, void *a3)
{
  ULONG v4; // esi
  NTSTATUS v5; // ebx
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp+20h] BYREF

  phAlgorithm = 0LL;
  v4 = a1;
  memset_0(a3, 0, 0x100uLL);
  v5 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RNG", 0LL, 0);
  if ( v5 >= 0 )
    v5 = BCryptGenRandom(phAlgorithm, (PUCHAR)a3, v4, 0);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)v5;
}
