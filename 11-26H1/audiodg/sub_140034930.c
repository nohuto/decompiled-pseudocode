/*
 * XREFs of sub_140034930 @ 0x140034930
 * Callers:
 *     sub_140059318 @ 0x140059318 (sub_140059318.c)
 * Callees:
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140034930(__int64 a1)
{
  HLOCAL v1; // rdi
  struct _ACL *v2; // rsi
  struct _ACL *pSacl; // r14
  void *pOwner; // r15
  void *pPrimaryGroup; // r12
  signed int LastError; // eax
  int v7; // ebx
  DWORD v8; // edx
  HLOCAL v9; // rax
  DWORD v10; // r8d
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  HLOCAL v14; // rax
  DWORD dwAbsoluteSecurityDescriptorSize; // [rsp+68h] [rbp-9h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+6Ch] [rbp-5h] BYREF
  LPVOID ppv; // [rsp+70h] [rbp-1h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+78h] [rbp+7h] BYREF
  DWORD dwDaclSize; // [rsp+D8h] [rbp+67h] BYREF
  int v20; // [rsp+DCh] [rbp+6Bh]
  DWORD dwSaclSize; // [rsp+E0h] [rbp+6Fh] BYREF
  DWORD dwPrimaryGroupSize; // [rsp+E8h] [rbp+77h] BYREF
  DWORD dwOwnerSize; // [rsp+F0h] [rbp+7Fh] BYREF

  v20 = HIDWORD(a1);
  ppv = 0LL;
  SecurityDescriptor = 0LL;
  SecurityDescriptorSize = 0;
  v1 = 0LL;
  dwAbsoluteSecurityDescriptorSize = 0;
  v2 = 0LL;
  dwDaclSize = 0;
  pSacl = 0LL;
  dwSaclSize = 0;
  pOwner = 0LL;
  dwOwnerSize = 0;
  pPrimaryGroup = 0LL;
  dwPrimaryGroupSize = 0;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"O:LSG:LSD:(A;;0x1;;;RC)(A;;0x1;;;AU)(A;;0x1;;;IU)(A;;0x1;;;AC)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-18"
           "5714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize) )
    goto LABEL_31;
  if ( MakeAbsoluteSD(
         SecurityDescriptor,
         0LL,
         &dwAbsoluteSecurityDescriptorSize,
         0LL,
         &dwDaclSize,
         0LL,
         &dwSaclSize,
         0LL,
         &dwOwnerSize,
         0LL,
         &dwPrimaryGroupSize) )
  {
    v7 = -2147418113;
    goto LABEL_17;
  }
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError != 122 )
    goto LABEL_32;
  if ( dwAbsoluteSecurityDescriptorSize )
    v1 = LocalAlloc(0x40u, dwAbsoluteSecurityDescriptorSize);
  if ( dwDaclSize )
    v2 = (struct _ACL *)LocalAlloc(0x40u, dwDaclSize);
  if ( dwSaclSize )
    pSacl = (struct _ACL *)LocalAlloc(0x40u, dwSaclSize);
  v8 = dwOwnerSize;
  if ( dwOwnerSize )
  {
    v9 = LocalAlloc(0x40u, dwOwnerSize);
    v8 = dwOwnerSize;
    pOwner = v9;
  }
  v10 = dwPrimaryGroupSize;
  if ( dwPrimaryGroupSize )
  {
    v14 = LocalAlloc(0x40u, dwPrimaryGroupSize);
    v8 = dwOwnerSize;
    pPrimaryGroup = v14;
    v10 = dwPrimaryGroupSize;
  }
  if ( dwAbsoluteSecurityDescriptorSize && !v1
    || dwDaclSize && !v2
    || dwSaclSize && !pSacl
    || v8 && !pOwner
    || v10 && !pPrimaryGroup )
  {
    v7 = -2147024882;
    goto LABEL_17;
  }
  if ( !MakeAbsoluteSD(
          SecurityDescriptor,
          v1,
          &dwAbsoluteSecurityDescriptorSize,
          v2,
          &dwDaclSize,
          pSacl,
          &dwSaclSize,
          pOwner,
          &dwOwnerSize,
          pPrimaryGroup,
          &dwPrimaryGroupSize) )
  {
LABEL_31:
    LastError = GetLastError();
    v7 = LastError;
LABEL_32:
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_17;
  }
  if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
    && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
    && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
  {
    sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 20LL, &unk_1400C8AF0);
  }
  v7 = CoInitializeSecurity(v1, -1, 0LL, 0LL, 4u, 2u, 0LL, 0x3020u, 0LL);
  if ( v7 >= 0 )
  {
    v7 = CoCreateInstance(&stru_1400C78A0, 0LL, 1u, &stru_1400C78B0, &ppv);
    if ( v7 >= 0 )
    {
      v7 = sub_1400B6010(ppv);
      if ( v7 >= 0 )
        v7 = sub_1400B6010(ppv);
      sub_1400B6010(ppv);
    }
    else
    {
      v12 = off_1400E73D8;
      if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
        && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
        && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
      {
        v13 = 22LL;
        goto LABEL_45;
      }
    }
  }
  else
  {
    v12 = off_1400E73D8;
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_BYTE *)off_1400E73D8 + 28) & 0x10) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 4u )
    {
      v13 = 21LL;
LABEL_45:
      sub_14005A040(v12[2], v13, &unk_1400C8AF0);
    }
  }
LABEL_17:
  LocalFree(SecurityDescriptor);
  LocalFree(v1);
  LocalFree(v2);
  LocalFree(pSacl);
  LocalFree(pOwner);
  LocalFree(pPrimaryGroup);
  if ( v7 < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x40000) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 23LL, &unk_1400C8AF0);
    }
    sub_14005A470("CAudioDGModule::InitializeSecurity", 655LL, (unsigned int)v7);
  }
  return (unsigned int)v7;
}
