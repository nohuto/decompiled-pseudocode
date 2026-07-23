/*
 * XREFs of I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408A8668
 * Callers:
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x1408A891C (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x1408A8ED4 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

__int64 __fastcall I_MinCryptFindSignerCertificateByIssuerAndSerialNumber(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  SIZE_T v4; // r14
  const void *v6; // r9
  unsigned int v7; // edi
  const void *v8; // r13
  SIZE_T v10; // rbp
  __int64 v11; // rsi
  const void *v13; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v6 = (const void *)*((_QWORD *)a2 + 1);
  v7 = 0;
  v8 = (const void *)*((_QWORD *)a1 + 1);
  v13 = v6;
  if ( (_DWORD)v4 )
  {
    v10 = *a2;
    if ( (_DWORD)v10 )
    {
      while ( v7 < a3 )
      {
        v11 = a4 + 240LL * v7;
        if ( (_DWORD)v4 == *(_DWORD *)(v11 + 112) && (_DWORD)v10 == *(_DWORD *)(v11 + 96) )
        {
          if ( RtlCompareMemory(v6, *(const void **)(v11 + 104), v10) == v10
            && RtlCompareMemory(v8, *(const void **)(v11 + 120), v4) == v4 )
          {
            return a4 + 240LL * v7;
          }
          v6 = v13;
        }
        ++v7;
      }
    }
  }
  return 0LL;
}
