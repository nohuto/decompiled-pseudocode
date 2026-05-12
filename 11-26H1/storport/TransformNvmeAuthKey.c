/*
 * XREFs of TransformNvmeAuthKey @ 0x140077FF4
 * Callers:
 *     AddNvmeAuthKey @ 0x14007491C (AddNvmeAuthKey.c)
 *     NvmeLoadAuthKeys @ 0x140075F84 (NvmeLoadAuthKeys.c)
 * Callees:
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall TransformNvmeAuthKey(
        PUCHAR pbInput,
        unsigned __int16 a2,
        void *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5,
        PUCHAR a6)
{
  unsigned __int16 *v6; // r15
  int v8; // edi
  ULONG v10; // r14d
  UCHAR *Pool2; // rsi
  NTSTATUS Property; // ebx
  PUCHAR v13; // rcx
  const WCHAR *v14; // rdx
  int v15; // edx
  __int64 v16; // r8
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG pcbResult; // [rsp+44h] [rbp-1Ch] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-18h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+50h] [rbp-10h] BYREF
  ULONG v22; // [rsp+A8h] [rbp+48h] BYREF

  v6 = a5;
  v8 = a4;
  v10 = a2;
  phAlgorithm = 0LL;
  Pool2 = 0LL;
  *a5 = 0;
  Property = 0;
  phHash = 0LL;
  v22 = 0;
  *(_DWORD *)pbOutput = 0;
  pcbResult = 0;
  switch ( a4 )
  {
    case 0u:
      v13 = a6;
      *v6 = a2;
      memmove(v13, a3, a2);
      return (unsigned int)Property;
    case 1u:
      v14 = L"SHA256";
LABEL_9:
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, v14, L"Microsoft Primitive Provider", 8u);
      if ( Property >= 0 )
      {
        Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
        if ( Property >= 0 )
        {
          Pool2 = (UCHAR *)ExAllocatePool2(256LL, *(unsigned int *)pbOutput, 1095655762LL);
          if ( Pool2 )
          {
            Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v22, 4u, &pcbResult, 0);
            if ( Property >= 0 )
            {
              if ( v8 == 1 )
              {
                v15 = 32;
              }
              else if ( v8 == 2 )
              {
                v15 = 48;
              }
              else
              {
                v15 = 64;
              }
              if ( v22 == v15 )
              {
                Property = BCryptCreateHash(phAlgorithm, &phHash, Pool2, *(ULONG *)pbOutput, (PUCHAR)a3, v10, 0);
                if ( Property >= 0 )
                {
                  v16 = -1LL;
                  do
                    ++v16;
                  while ( pbInput[v16] );
                  Property = BCryptHashData(phHash, pbInput, v16, 0);
                  if ( Property >= 0 )
                  {
                    Property = BCryptHashData(phHash, (PUCHAR)"NVMe-over-Fabrics", 0x11u, 0);
                    if ( Property >= 0 )
                    {
                      Property = BCryptFinishHash(phHash, a6, v22, 0);
                      if ( Property >= 0 )
                        *v6 = v22;
                    }
                  }
                }
              }
              else
              {
                Property = -1073741820;
              }
            }
          }
          else
          {
            Property = -1073741801;
          }
        }
      }
      goto LABEL_29;
    case 2u:
      v14 = L"SHA384";
      goto LABEL_9;
    case 3u:
      v14 = L"SHA512";
      goto LABEL_9;
  }
  Property = -1073741811;
LABEL_29:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x414E6152u);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
