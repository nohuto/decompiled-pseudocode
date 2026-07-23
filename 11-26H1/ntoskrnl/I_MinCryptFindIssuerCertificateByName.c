/*
 * XREFs of I_MinCryptFindIssuerCertificateByName @ 0x1408A6B84
 * Callers:
 *     MinCryptCheckCertsAndKeys @ 0x1407218C8 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408A6EB4 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     I_MinCryptGetCertificateEKUs @ 0x1408A6DDC (I_MinCryptGetCertificateEKUs.c)
 *     I_MinCryptCheckEKURequirements @ 0x1408A9CB0 (I_MinCryptCheckEKURequirements.c)
 */

__int64 __fastcall I_MinCryptFindIssuerCertificateByName(
        unsigned int *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  SIZE_T v5; // r15
  const void *v7; // r9
  unsigned int i; // edi
  __int64 v11; // rsi
  const void *v13; // [rsp+20h] [rbp-38h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v5 = *a1;
  v7 = (const void *)*((_QWORD *)a1 + 1);
  v13 = v7;
  if ( (_DWORD)v5 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v11 = a3 + 240LL * i;
      if ( (_DWORD)v5 == *(_DWORD *)(v11 + 160) )
      {
        if ( RtlCompareMemory(v7, *(const void **)(v11 + 168), v5) == v5 )
        {
          if ( !a4 )
            return a3 + 240LL * i;
          if ( !a5 )
            return a3 + 240LL * i;
          if ( (*(_DWORD *)(a4 + 4) & 1) == 0 )
            return a3 + 240LL * i;
          v14 = 50;
          if ( (int)I_MinCryptGetCertificateEKUs(v11 + 224, &v14, a5) >= 0 )
          {
            if ( (unsigned __int8)I_MinCryptCheckEKURequirements(v14, a5, a4) )
              return a3 + 240LL * i;
          }
        }
        v7 = v13;
      }
    }
  }
  return 0LL;
}
