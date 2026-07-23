/*
 * XREFs of MinCryptDecodeOid @ 0x1408A6814
 * Callers:
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x1408A67C0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x1408A68C0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall MinCryptDecodeOid(__int64 a1, unsigned int a2, unsigned int *a3)
{
  SIZE_T v3; // r14
  const void *v5; // r12
  __int64 i; // rdi

  v3 = *a3;
  v5 = (const void *)*((_QWORD *)a3 + 1);
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    if ( (_DWORD)v3 == *(_DWORD *)(a1 + 24 * i) && RtlCompareMemory(v5, *(const void **)(a1 + 24 * i + 8), v3) == v3 )
      return *(unsigned int *)(a1 + 24 * i + 16);
  }
  return 0LL;
}
