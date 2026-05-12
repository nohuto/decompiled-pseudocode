/*
 * XREFs of sub_1400F4774 @ 0x1400F4774
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

__int64 __fastcall sub_1400F4774(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  UCHAR *v4; // r14
  unsigned __int16 v5; // ax
  size_t v6; // r13
  __int64 *v7; // rdi
  NTSTATUS v8; // ebx
  int v9; // r12d
  wchar_t *v10; // rcx
  void *v11; // rax
  void *v12; // rax
  ULONG cbOutput; // r13d
  UCHAR *v14; // rax
  __int64 v15; // rcx
  ULONG pcbResult; // [rsp+E0h] [rbp+67h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+E8h] [rbp+6Fh] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+F0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 96);
  phAlgorithm = 0LL;
  phKey = 0LL;
  v3 = 0LL;
  pcbResult = 0;
  v4 = 0LL;
  v5 = sub_1400DB18C(*(unsigned __int8 *)(v1 + 4));
  v6 = v5;
  v7 = (__int64 *)(a1 + 88);
  if ( v5 )
  {
    v9 = v5;
    v3 = sub_1400143E0(64LL, 2 * (unsigned int)v5 + 12, 1095655762LL, *(_QWORD *)(*(_QWORD *)(*v7 + 128) + 8LL));
    if ( !v3 )
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
    *(_DWORD *)(v3 + 4) = 1297107012;
    *(_DWORD *)v3 = 2 * v6 + 12;
    *(_DWORD *)(v3 + 8) = v6;
    v11 = sub_1400DB1BC(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
    memmove((void *)(v3 + 12), v11, v6);
    v12 = sub_1400DB158(*(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + 4LL));
    memmove((void *)(v3 + v6 + 12), v12, v6);
    v8 = BCryptSetProperty(phKey, L"DHParameters", (PUCHAR)v3, 2 * v6 + 12, 0);
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
    cbOutput = v6 + 2 * (v6 + 4);
    v14 = (UCHAR *)sub_1400143E0(64LL, cbOutput, 1095655762LL, *(_QWORD *)(*(_QWORD *)(*v7 + 128) + 8LL));
    v4 = v14;
    if ( v14 )
    {
      v8 = BCryptExportKey(phKey, 0LL, L"DHPUBLICBLOB", v14, cbOutput, &pcbResult, 0);
      if ( v8 < 0 )
      {
        v10 = L"BCryptExportKey";
        goto LABEL_22;
      }
      if ( pcbResult == cbOutput && *(_DWORD *)v4 == 1112557636 && *((_DWORD *)v4 + 1) == v9 )
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
  v10 = (wchar_t *)&dword_140149108;
LABEL_22:
  sub_1400A870C(
    *v7,
    1,
    2,
    (__int64)L"Generating host DH key failed",
    L"Status",
    v8,
    L"DHgID",
    *(_BYTE *)(*(_QWORD *)(a1 + 96) + 4LL),
    v10,
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
  if ( v4 )
    ExFreePoolWithTag(v4, 0x414E6152u);
LABEL_24:
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( v3 )
    ExFreePoolWithTag((PVOID)v3, 0x414E6152u);
  return (unsigned int)v8;
}
