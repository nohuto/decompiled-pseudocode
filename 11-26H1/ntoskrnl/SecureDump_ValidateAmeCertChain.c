/*
 * XREFs of SecureDump_ValidateAmeCertChain @ 0x1405D9C14
 * Callers:
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D9128 (SecureDump_LoadCertAndProvisionKey.c)
 * Callees:
 *     SecureDump_ConvertToRsaBlob @ 0x1405D89E4 (SecureDump_ConvertToRsaBlob.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     MinCrypK_HashMemory @ 0x1408A6794 (MinCrypK_HashMemory.c)
 *     MincrypK_ParseCertificateChainWithPolicy @ 0x1408A7D68 (MincrypK_ParseCertificateChainWithPolicy.c)
 *     MincryptFreePolicyInfo @ 0x1408AA088 (MincryptFreePolicyInfo.c)
 *     MincryptGetLeafKeyFromPolicy @ 0x1408AA0C0 (MincryptGetLeafKeyFromPolicy.c)
 *     MincryptGetRootKeyFromPolicy @ 0x1408AA0F0 (MincryptGetRootKeyFromPolicy.c)
 */

__int64 __fastcall SecureDump_ValidateAmeCertChain(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v6; // ebx
  __int64 v7; // rbx
  __int64 RootKeyFromPolicy; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 LeafKeyFromPolicy; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+90h] [rbp+20h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a1 )
  {
    if ( (_DWORD)a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v6 = MincrypK_ParseCertificateChainWithPolicy(a1, a2, &v20);
          if ( v6 >= 0 )
          {
            if ( !(_DWORD)v20 )
              goto LABEL_26;
            v7 = v21;
            if ( !(_QWORD)v21 )
              goto LABEL_26;
            if ( (DWORD2(v20) & 0xFFFF0000) != 0 )
              goto LABEL_26;
            RootKeyFromPolicy = MincryptGetRootKeyFromPolicy(&v20);
            LeafKeyFromPolicy = MincryptGetLeafKeyFromPolicy(&v20, v9, v10, RootKeyFromPolicy);
            v13 = LeafKeyFromPolicy;
            if ( !v12 || !LeafKeyFromPolicy || *(_DWORD *)(v7 + 48) != 3 || *(_DWORD *)(v7 + 16) != 3 )
              goto LABEL_26;
            if ( MEMORY[0xFFFFF78000000014] < (__int64)v22 || MEMORY[0xFFFFF78000000014] > *((__int64 *)&v22 + 1) )
            {
              v6 = -1073740283;
              goto LABEL_27;
            }
            if ( *(_DWORD *)v12 != 8
              || RtlCompareMemory(*(const void **)(v12 + 8), &rgbMicrosoftAzureAmeRoot0_PubKeyInfo, 8uLL) != 8
              || (v14 = *(_QWORD *)(v7 + 40), *(_WORD *)(v14 + 80) != 8)
              || RtlCompareMemory(*(const void **)(v14 + 72), &rgbMicrosoftAzureSkCertDomain0_Name, 8uLL) != 8 )
            {
LABEL_26:
              v6 = -1073740760;
              goto LABEL_27;
            }
            v16 = *(_QWORD *)(v7 + 40);
            v18[1] = 0;
            v23 = 0;
            v19 = *(_QWORD *)(v16 + 112);
            v18[0] = *(_DWORD *)(v16 + 104);
            v6 = MinCrypK_HashMemory(v16, v15, (unsigned int)v18, (int)a4 + 5, (__int64)&v23);
            if ( v6 >= 0 )
            {
              *(_BYTE *)(a4 + 4) = v23;
              *(_DWORD *)a4 = 32772;
              v6 = SecureDump_ConvertToRsaBlob(v13, a3);
            }
          }
        }
        else
        {
          v6 = -1073741582;
        }
      }
      else
      {
        v6 = -1073741583;
      }
    }
    else
    {
      v6 = -1073741584;
    }
  }
  else
  {
    v6 = -1073741585;
  }
LABEL_27:
  MincryptFreePolicyInfo(&v20);
  return (unsigned int)v6;
}
