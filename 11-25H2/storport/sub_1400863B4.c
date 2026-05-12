/*
 * XREFs of sub_1400863B4 @ 0x1400863B4
 * Callers:
 *     sub_1400F384C @ 0x1400F384C (sub_1400F384C.c)
 *     sub_1400F3E44 @ 0x1400F3E44 (sub_1400F3E44.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400863B4(
        LPCWSTR pszAlgId,
        ULONG cbInput,
        PUCHAR pbInput,
        ULONG cbSecret,
        __int64 a5,
        ULONG *a6,
        PUCHAR a7)
{
  UCHAR *Pool2; // rdi
  NTSTATUS Property; // ebx
  ULONG *v12; // rsi
  ULONG pcbResult; // [rsp+40h] [rbp-20h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-18h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+50h] [rbp-10h] BYREF
  ULONG pbOutput; // [rsp+A8h] [rbp+48h] BYREF

  phAlgorithm = 0LL;
  phHash = 0LL;
  Pool2 = 0LL;
  pbOutput = 0;
  pcbResult = 0;
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, pszAlgId, 0LL, cbSecret != 0 ? 8 : 0);
  if ( Property >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
    if ( Property >= 0 )
    {
      Pool2 = (UCHAR *)ExAllocatePool2(256LL, pbOutput, 1095655762LL);
      if ( Pool2 )
      {
        v12 = a6;
        Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)a6, 4u, &pcbResult, 0);
        if ( Property >= 0 )
        {
          if ( *v12 <= 0x100 )
          {
            Property = BCryptCreateHash(
                         phAlgorithm,
                         &phHash,
                         Pool2,
                         pbOutput,
                         (PUCHAR)(a5 & -(__int64)(cbSecret != 0)),
                         cbSecret,
                         0);
            if ( Property >= 0 )
            {
              Property = BCryptHashData(phHash, pbInput, cbInput, 0);
              if ( Property >= 0 )
                Property = BCryptFinishHash(phHash, a7, *v12, 0);
            }
          }
          else
          {
            Property = -1073741637;
          }
        }
      }
      else
      {
        Property = -1073741801;
      }
    }
  }
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x414E6152u);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
