/*
 * XREFs of NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400FCC1C
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

__int64 __fastcall NvmeFabricControllerQueueComputeSharedDHValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  UCHAR *pbInput; // r14
  __int64 v5; // r12
  unsigned __int16 KeyLength; // ax
  __int64 v7; // rdx
  size_t v8; // rbx
  __int64 *v9; // rdi
  int v10; // r15d
  UCHAR *Pool; // rax
  NTSTATUS v12; // ebx
  void *Prime; // rax
  void *Generator; // rax
  wchar_t *v15; // rcx
  ULONG v16; // r11d
  __int64 v17; // r8
  ULONG v18; // edi
  ULONG v19; // r10d
  char *v20; // r9
  char v21; // dl
  ULONG v22; // eax
  __int64 v23; // rax
  ULONG pcbResult; // [rsp+E0h] [rbp+8h] BYREF
  BCRYPT_SECRET_HANDLE phAgreedSecret; // [rsp+E8h] [rbp+10h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+F0h] [rbp+18h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 6);
  phKey = 0LL;
  pcbResult = 0;
  pbInput = 0LL;
  phAgreedSecret = 0LL;
  v5 = a2 + v2;
  KeyLength = DhGetKeyLength(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  v8 = KeyLength;
  if ( !KeyLength || *(_WORD *)(v7 + 10) != KeyLength )
  {
    v12 = -1073741637;
    v9 = (__int64 *)(a1 + 88);
    goto LABEL_20;
  }
  v9 = (__int64 *)(a1 + 88);
  v10 = KeyLength;
  Pool = (UCHAR *)RaidAllocatePool(
                    64LL,
                    KeyLength + 2 * ((unsigned int)KeyLength + 4),
                    1095655762LL,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) + 8LL));
  pbInput = Pool;
  if ( !Pool )
  {
    v12 = -1073741801;
    goto LABEL_20;
  }
  *(_DWORD *)Pool = 1112557636;
  *((_DWORD *)Pool + 1) = v8;
  Prime = DhGetPrime(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  memmove(pbInput + 8, Prime, v8);
  Generator = DhGetGenerator(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  memmove(&pbInput[v8 + 8], Generator, v8);
  memmove(&pbInput[(unsigned int)(2 * v8) + 8], (const void *)(v5 + 16), v8);
  v12 = BCryptImportKeyPair(
          *(BCRYPT_ALG_HANDLE *)(*(_QWORD *)(a1 + 96) + 16LL),
          0LL,
          L"DHPUBLICBLOB",
          &phKey,
          pbInput,
          v8 + 2 * (v8 + 4),
          0);
  if ( v12 < 0 )
  {
    v15 = L"BCryptImportKeyPair";
LABEL_21:
    StorEtwNvmeControllerEvent(
      *v9,
      1,
      2LL,
      (__int64)L"Generating shared DH value failed",
      L"Status",
      v12,
      L"DHgID",
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
      v15,
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
    goto LABEL_22;
  }
  v12 = BCryptSecretAgreement(*(BCRYPT_KEY_HANDLE *)(*(_QWORD *)(a1 + 96) + 24LL), phKey, &phAgreedSecret, 0);
  if ( v12 < 0 )
  {
    v15 = L"BCryptSecretAgreement";
    goto LABEL_21;
  }
  v12 = BCryptDeriveKey(phAgreedSecret, L"TRUNCATE", 0LL, (PUCHAR)(*(_QWORD *)(a1 + 96) + 40LL), 0x400u, &pcbResult, 0);
  if ( v12 < 0 )
  {
    v15 = L"BCryptDeriveKey";
    goto LABEL_21;
  }
  v16 = pcbResult;
  if ( pcbResult != v10 )
  {
    v12 = -1073739509;
LABEL_20:
    v15 = (wchar_t *)&word_140152E7C;
    goto LABEL_21;
  }
  v17 = *(_QWORD *)(a1 + 96);
  v18 = pcbResult >> 1;
  v19 = 0;
  if ( pcbResult >> 1 )
  {
    v20 = (char *)(v17 + 40);
    do
    {
      v21 = *v20;
      v22 = v16 - v19++;
      v23 = v22 - 1;
      *v20++ = *(_BYTE *)(v23 + v17 + 40);
      *(_BYTE *)((unsigned int)v23 + v17 + 40) = v21;
    }
    while ( v19 < v18 );
  }
LABEL_22:
  if ( phAgreedSecret )
    BCryptDestroySecret(phAgreedSecret);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbInput )
    ExFreePoolWithTag(pbInput, 0x414E6152u);
  return (unsigned int)v12;
}
