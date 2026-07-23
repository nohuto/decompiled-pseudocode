/*
 * XREFs of I_MinCryptCheckEKU @ 0x1408A6B18
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

char __fastcall I_MinCryptCheckEKU(const void **a1, unsigned int a2, __int64 a3)
{
  unsigned int i; // ebx

  for ( i = 0; i < a2; ++i )
  {
    if ( *(_DWORD *)(a3 + 16LL * i) == *(_DWORD *)a1
      && !memcmp(*(const void **)(a3 + 16LL * i + 8), a1[1], *(unsigned int *)a1) )
    {
      return 1;
    }
  }
  return 0;
}
