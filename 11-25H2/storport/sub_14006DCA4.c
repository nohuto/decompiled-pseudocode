/*
 * XREFs of sub_14006DCA4 @ 0x14006DCA4
 * Callers:
 *     sub_14018B8C8 @ 0x14018B8C8 (sub_14018B8C8.c)
 * Callees:
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14006DCA4(
        PUCHAR pbInput,
        unsigned __int16 a2,
        void *a3,
        unsigned __int16 a4,
        _WORD *a5,
        PUCHAR a6)
{
  _WORD *v6; // r15
  int v8; // edi
  ULONG v10; // r14d
  UCHAR *Pool2; // rsi
  NTSTATUS Property; // ebx
  unsigned __int16 v13; // cx
  size_t v14; // r8
  PUCHAR v15; // rcx
  const WCHAR *v16; // rdx
  int v17; // edx
  __int64 v18; // r8
  UCHAR pbOutput[4]; // [rsp+40h] [rbp-20h] BYREF
  ULONG pcbResult; // [rsp+44h] [rbp-1Ch] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+48h] [rbp-18h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+50h] [rbp-10h] BYREF
  ULONG v24; // [rsp+A8h] [rbp+48h] BYREF

  v6 = a5;
  v8 = a4;
  v10 = a2;
  phAlgorithm = 0LL;
  Pool2 = 0LL;
  *a5 = 0;
  Property = 0;
  phHash = 0LL;
  v24 = 0;
  *(_DWORD *)pbOutput = 0;
  pcbResult = 0;
  switch ( a4 )
  {
    case 0u:
      v13 = 256;
      if ( a2 < 0x100u )
        v13 = a2;
      v14 = v13;
      v15 = a6;
      *v6 = v14;
      memmove(v15, a3, v14);
      return (unsigned int)Property;
    case 1u:
      v16 = L"SHA256";
LABEL_11:
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, v16, L"Microsoft Primitive Provider", 8u);
      if ( Property >= 0 )
      {
        Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
        if ( Property >= 0 )
        {
          Pool2 = (UCHAR *)ExAllocatePool2(256LL, *(unsigned int *)pbOutput, 1095655762LL);
          if ( Pool2 )
          {
            Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v24, 4u, &pcbResult, 0);
            if ( Property >= 0 )
            {
              if ( v8 == 1 )
              {
                v17 = 32;
              }
              else if ( v8 == 2 )
              {
                v17 = 48;
              }
              else
              {
                v17 = 64;
              }
              if ( v24 == v17 )
              {
                Property = BCryptCreateHash(phAlgorithm, &phHash, Pool2, *(ULONG *)pbOutput, (PUCHAR)a3, v10, 0);
                if ( Property >= 0 )
                {
                  v18 = -1LL;
                  do
                    ++v18;
                  while ( pbInput[v18] );
                  Property = BCryptHashData(phHash, pbInput, v18, 0);
                  if ( Property >= 0 )
                  {
                    Property = BCryptHashData(phHash, (PUCHAR)"NVMe-over-Fabrics", 0x11u, 0);
                    if ( Property >= 0 )
                    {
                      Property = BCryptFinishHash(phHash, a6, v24, 0);
                      if ( Property >= 0 )
                        *v6 = v24;
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
      goto LABEL_31;
    case 2u:
      v16 = L"SHA384";
      goto LABEL_11;
    case 3u:
      v16 = L"SHA512";
      goto LABEL_11;
  }
  Property = -1073741811;
LABEL_31:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x414E6152u);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
