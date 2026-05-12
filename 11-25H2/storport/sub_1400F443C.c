/*
 * XREFs of sub_1400F443C @ 0x1400F443C
 * Callers:
 *     sub_1400F4AF8 @ 0x1400F4AF8 (sub_1400F4AF8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400DB158 @ 0x1400DB158 (sub_1400DB158.c)
 *     sub_1400DB18C @ 0x1400DB18C (sub_1400DB18C.c)
 *     sub_1400DB1BC @ 0x1400DB1BC (sub_1400DB1BC.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400F443C(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  UCHAR *pbInput; // rsi
  __int64 v5; // r12
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  size_t v8; // rbx
  __int64 *v9; // rdi
  int v10; // r14d
  UCHAR *v11; // rax
  NTSTATUS v12; // ebx
  void *v13; // rax
  void *v14; // rax
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
  v6 = sub_1400DB18C(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  v8 = v6;
  if ( !v6 || *(_WORD *)(v7 + 10) != v6 )
  {
    v12 = -1073741637;
    v9 = (__int64 *)(a1 + 88);
    goto LABEL_20;
  }
  v9 = (__int64 *)(a1 + 88);
  v10 = v6;
  v11 = (UCHAR *)sub_1400143E0(
                   64LL,
                   v6 + 2 * ((unsigned int)v6 + 4),
                   1095655762LL,
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 128LL) + 8LL));
  pbInput = v11;
  if ( !v11 )
  {
    v12 = -1073741801;
    goto LABEL_20;
  }
  *(_DWORD *)v11 = 1112557636;
  *((_DWORD *)v11 + 1) = v8;
  v13 = sub_1400DB1BC(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  memmove(pbInput + 8, v13, v8);
  v14 = sub_1400DB158(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
  memmove(&pbInput[v8 + 8], v14, v8);
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
    sub_1400A870C(
      *v9,
      1,
      2,
      (__int64)L"Generating shared DH value failed",
      L"Status",
      v12,
      L"DHgID",
      *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
      v15,
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
    v15 = (wchar_t *)&dword_140149108;
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
