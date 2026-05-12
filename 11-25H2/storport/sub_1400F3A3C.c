/*
 * XREFs of sub_1400F3A3C @ 0x1400F3A3C
 * Callers:
 *     sub_1400F4C14 @ 0x1400F4C14 (sub_1400F4C14.c)
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 */

__int64 __fastcall sub_1400F3A3C(__int64 a1, unsigned __int16 a2, UCHAR *a3, UCHAR *a4)
{
  _QWORD *v4; // r13
  UCHAR *Pool2; // rsi
  __int64 v8; // r12
  int v9; // edi
  char v10; // cl
  const WCHAR *v11; // rdx
  NTSTATUS Property; // ebx
  __int64 v13; // rdi
  UCHAR *v14; // rdx
  __int64 v15; // r8
  UCHAR *v16; // rdx
  UCHAR v18[4]; // [rsp+A0h] [rbp+7h] BYREF
  UCHAR pbOutput[4]; // [rsp+A4h] [rbp+Bh] BYREF
  ULONG pcbResult; // [rsp+A8h] [rbp+Fh] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+B0h] [rbp+17h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+B8h] [rbp+1Fh] BYREF
  UCHAR pbInput; // [rsp+100h] [rbp+67h] BYREF
  PUCHAR v24; // [rsp+118h] [rbp+7Fh]

  v24 = a4;
  v4 = *(_QWORD **)(a1 + 88);
  phAlgorithm = 0LL;
  Pool2 = 0LL;
  phHash = 0LL;
  *(_DWORD *)v18 = 0;
  *(_DWORD *)pbOutput = 0;
  pcbResult = 0;
  pbInput = 0;
  v8 = v4[12];
  v9 = a2;
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL);
  switch ( v10 )
  {
    case 1:
      v11 = L"SHA256";
      break;
    case 2:
      v11 = L"SHA384";
      break;
    case 3:
      v11 = L"SHA512";
      break;
    default:
      Property = -1073741811;
      goto LABEL_30;
  }
  Property = BCryptOpenAlgorithmProvider(&phAlgorithm, v11, L"Microsoft Primitive Provider", 8u);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Pool2 = (UCHAR *)ExAllocatePool2(256LL, *(unsigned int *)pbOutput, 1095655762LL);
  if ( !Pool2 )
  {
    Property = -1073741801;
LABEL_30:
    sub_1400A870C(
      (__int64)v4,
      1,
      2,
      (__int64)L"Computing controller response failed",
      L"Status",
      Property,
      L"HashID",
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + 3LL),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    goto LABEL_31;
  }
  Property = BCryptGetProperty(phAlgorithm, L"HashDigestLength", v18, 4u, &pcbResult, 0);
  if ( Property < 0 )
    goto LABEL_30;
  if ( *(_DWORD *)v18 != v9 )
  {
    Property = -1073741820;
    goto LABEL_30;
  }
  Property = BCryptCreateHash(
               phAlgorithm,
               &phHash,
               Pool2,
               *(ULONG *)pbOutput,
               (PUCHAR)(v4[209] + 532LL),
               *(unsigned __int16 *)(v4[209] + 14LL),
               0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, a3, *(ULONG *)v18, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, (PUCHAR)(*(_QWORD *)(a1 + 96) + 12LL), 4u, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, *(PUCHAR *)(a1 + 96), 2u, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, (PUCHAR)(*(_QWORD *)(a1 + 96) + 2LL), 1u, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, (PUCHAR)"Controller", 0xAu, 0);
  if ( Property < 0 )
    goto LABEL_30;
  v13 = -1LL;
  v14 = (UCHAR *)(v8 + 60);
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  Property = BCryptHashData(phHash, v14, v15, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptHashData(phHash, &pbInput, 1u, 0);
  if ( Property < 0 )
    goto LABEL_30;
  v16 = (UCHAR *)(v4[208] + 20LL);
  do
    ++v13;
  while ( v16[v13] );
  Property = BCryptHashData(phHash, v16, v13, 0);
  if ( Property < 0 )
    goto LABEL_30;
  Property = BCryptFinishHash(phHash, v24, *(ULONG *)v18, 0);
  if ( Property < 0 )
    goto LABEL_30;
LABEL_31:
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x414E6152u);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  return (unsigned int)Property;
}
