/*
 * XREFs of NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400FCF50
 * Callers:
 *     NvmeFabricControllerQueueProcessAuthChallenge @ 0x1400FD2D4 (NvmeFabricControllerQueueProcessAuthChallenge.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 *     DhGetGenerator @ 0x1400E3180 (DhGetGenerator.c)
 *     DhGetKeyLength @ 0x1400E31B4 (DhGetKeyLength.c)
 *     DhGetPrime @ 0x1400E31E4 (DhGetPrime.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall NvmeFabricControllerQueueGenerateHostDHKey(__int64 a1)
{
  __int64 v1; // rax
  __int64 Pool; // rsi
  UCHAR *v4; // r14
  unsigned __int16 KeyLength; // ax
  size_t v6; // r13
  __int64 *v7; // rdi
  NTSTATUS v8; // ebx
  int v9; // r12d
  wchar_t *v10; // rcx
  void *Prime; // rax
  void *Generator; // rax
  ULONG v13; // r13d
  UCHAR *v14; // rax
  __int64 v15; // rcx
  ULONG pcbResult; // [rsp+E0h] [rbp+67h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+E8h] [rbp+6Fh] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+F0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  phAlgorithm = 0LL;
  phKey = 0LL;
  Pool = 0LL;
  pcbResult = 0;
  v4 = 0LL;
  KeyLength = DhGetKeyLength(*(unsigned __int8 *)(v1 + 4));
  v6 = KeyLength;
  v7 = (__int64 *)(a1 + 88);
  if ( KeyLength )
  {
    v9 = KeyLength;
    Pool = RaidAllocatePool(
             64LL,
             2 * (unsigned int)KeyLength + 12,
             1095655762LL,
             *(_QWORD *)(*(_QWORD *)(*v7 + 128) + 8LL));
    if ( !Pool )
      goto LABEL_4;
    v8 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"DH", L"Microsoft Primitive Provider", 0);
    if ( v8 < 0 )
    {
      v10 = L"BCryptOpenAlgorithmProvider";
      goto LABEL_22;
    }
    v8 = BCryptGenerateKeyPair(phAlgorithm, &phKey, 8 * v6, 0);
    if ( v8 < 0 )
    {
      v10 = L"BCryptGenerateKeyPair";
      goto LABEL_22;
    }
    *(_DWORD *)(Pool + 4) = 1297107012;
    *(_DWORD *)Pool = 2 * v6 + 12;
    *(_DWORD *)(Pool + 8) = v6;
    Prime = DhGetPrime(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
    memmove((void *)(Pool + 12), Prime, v6);
    Generator = DhGetGenerator(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
    memmove((void *)(Pool + v6 + 12), Generator, v6);
    v8 = BCryptSetProperty(phKey, L"DHParameters", (PUCHAR)Pool, 2 * v6 + 12, 0);
    if ( v8 < 0 )
    {
      v10 = L"BCryptSetProperty";
      goto LABEL_22;
    }
    v8 = BCryptFinalizeKeyPair(phKey, 0);
    if ( v8 < 0 )
    {
      v10 = L"BCryptFinalizeKeyPair";
      goto LABEL_22;
    }
    v13 = v6 + 2 * (v6 + 4);
    v14 = (UCHAR *)RaidAllocatePool(64LL, v13, 1095655762LL, *(_QWORD *)(*(_QWORD *)(*v7 + 128) + 8LL));
    v4 = v14;
    if ( v14 )
    {
      v8 = BCryptExportKey(phKey, 0LL, L"DHPUBLICBLOB", v14, v13, &pcbResult, 0);
      if ( v8 < 0 )
      {
        v10 = L"BCryptExportKey";
        goto LABEL_22;
      }
      if ( pcbResult == v13 && *(_DWORD *)v4 == 1112557636 && *((_DWORD *)v4 + 1) == v9 )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) = phKey;
        v15 = *(_QWORD *)(a1 + 96);
        phKey = 0LL;
        *(_QWORD *)(v15 + 16) = phAlgorithm;
        phAlgorithm = 0LL;
        goto LABEL_24;
      }
      v8 = -1073739509;
    }
    else
    {
LABEL_4:
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741637;
  }
  v10 = (wchar_t *)&word_140152E7C;
LABEL_22:
  StorEtwNvmeControllerEvent(
    *v7,
    1,
    2LL,
    (__int64)L"Generating host DH key failed",
    L"Status",
    v8,
    L"DHgID",
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
    v10,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0,
    (void *)&word_140152E7C,
    0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x414E6152u);
LABEL_24:
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( Pool )
    ExFreePoolWithTag((PVOID)Pool, 0x414E6152u);
  return (unsigned int)v8;
}
