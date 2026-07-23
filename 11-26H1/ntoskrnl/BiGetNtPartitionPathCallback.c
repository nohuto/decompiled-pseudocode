/*
 * XREFs of BiGetNtPartitionPathCallback @ 0x1408988F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     BiGetDriveLayoutBlock @ 0x1408986BC (BiGetDriveLayoutBlock.c)
 *     BiGetPartitionVhdFilePath @ 0x140B1E440 (BiGetPartitionVhdFilePath.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall BiGetNtPartitionPathCallback(const WCHAR *a1, unsigned int a2, __int64 a3)
{
  wchar_t *v3; // r15
  __int64 v4; // rbx
  int *v5; // r13
  _BYTE *v6; // rsi
  char v7; // di
  wchar_t *v8; // r14
  unsigned __int64 v9; // rcx
  _DWORD *v10; // r15
  int v11; // ebx
  int v12; // eax
  const WCHAR *v13; // r13
  int *v14; // rsi
  __int64 i; // rax
  __int64 v16; // r13
  int v17; // eax
  const wchar_t *PartitionVhdFilePath; // rax
  bool v19; // zf
  __int64 v20; // rcx
  wchar_t *v21; // rbx
  const wchar_t *v22; // rax
  __int64 ShareAccess; // [rsp+20h] [rbp-89h]
  wchar_t *Dst; // [rsp+30h] [rbp-79h]
  PVOID P; // [rsp+38h] [rbp-71h] BYREF
  HANDLE FileHandle; // [rsp+40h] [rbp-69h] BYREF
  int *v28; // [rsp+48h] [rbp-61h]
  wchar_t *Str1; // [rsp+50h] [rbp-59h]
  _OWORD v30[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v31; // [rsp+78h] [rbp-31h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp+17h] BYREF
  char v37; // [rsp+128h] [rbp+7Fh]

  v3 = *(wchar_t **)(a3 + 8);
  v4 = *(_QWORD *)(a3 + 24);
  v5 = *(int **)(a3 + 40);
  v31 = 0LL;
  v6 = (_BYTE *)a3;
  FileHandle = 0LL;
  P = 0LL;
  v7 = 0;
  v8 = 0LL;
  v37 = *(_BYTE *)(a3 + 1);
  Dst = *(wchar_t **)(a3 + 16);
  v28 = *(int **)(a3 + 32);
  memset(v30, 0, sizeof(v30));
  Str1 = v3;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (int)BiGetDriveLayoutBlock(a1, &P, (__int64)v30) < 0 )
    return v7;
  if ( LODWORD(v30[0]) == 7 || !v3 )
  {
    v9 = *(_QWORD *)(v4 + 4) - *(_QWORD *)((char *)v30 + 4);
    if ( !v9 )
    {
      v9 = *(_QWORD *)(v4 + 12) - *(_QWORD *)((char *)v30 + 12);
      if ( !v9 )
        v9 = *(unsigned int *)(v4 + 20) - (unsigned __int64)DWORD1(v30[1]);
    }
    if ( v9 )
    {
      ExFreePoolWithTag(P, 0x4B444342u);
      return v7;
    }
  }
  v10 = P;
  if ( *(_DWORD *)P )
  {
    if ( *(_DWORD *)P == 1 )
      v11 = 0;
    else
      v11 = 2;
  }
  else
  {
    v11 = 1;
  }
  if ( v5 )
  {
    if ( v11 == 1 )
    {
      v12 = *v5;
      v13 = Dst;
      swprintf_s(Dst, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", a2, v12);
      RtlInitUnicodeString(&DestinationString, Dst);
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0) >= 0 )
      {
        ZwClose(FileHandle);
        v7 = 1;
      }
      goto LABEL_44;
    }
    goto LABEL_19;
  }
  if ( v11 != 1 )
  {
LABEL_19:
    if ( v11 )
      goto LABEL_43;
  }
  v14 = 0LL;
  if ( !v11 )
  {
    if ( v5 )
    {
      v14 = v5;
    }
    else if ( v28 )
    {
      v14 = v28;
    }
  }
  for ( i = 0LL; ; i = (unsigned int)((_DWORD)P + 1) )
  {
    LODWORD(P) = i;
    if ( (unsigned int)i >= v10[1] )
      break;
    v16 = 36 * i;
    v17 = v10[36 * i + 18];
    if ( !v17 )
      continue;
    LODWORD(ShareAccess) = v17;
    swprintf_s(Dst, 0x35uLL, L"\\Device\\Harddisk%lu\\Partition%lu", a2, ShareAccess);
    if ( v37 )
    {
      PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(Dst);
      v8 = (wchar_t *)PartitionVhdFilePath;
      if ( PartitionVhdFilePath )
      {
        if ( !wcsicmp(Str1, PartitionVhdFilePath) )
          goto LABEL_41;
        ExFreePoolWithTag(v8, 0x4B444342u);
        v8 = 0LL;
      }
    }
    if ( v11 == 1 )
    {
      if ( !v28 )
        continue;
      v19 = *(_QWORD *)v28 == *(_QWORD *)&v10[v16 + 14];
    }
    else
    {
      if ( !v14 )
        continue;
      v20 = *(_QWORD *)v14 - *(_QWORD *)&v10[v16 + 24];
      if ( *(_QWORD *)v14 == *(_QWORD *)&v10[v16 + 24] )
        v20 = *((_QWORD *)v14 + 1) - *(_QWORD *)&v10[v16 + 26];
      v19 = v20 == 0;
    }
    if ( v19 )
    {
LABEL_41:
      v7 = 1;
      break;
    }
  }
  v6 = (_BYTE *)a3;
LABEL_43:
  v13 = Dst;
LABEL_44:
  ExFreePoolWithTag(v10, 0x4B444342u);
  v21 = Str1;
  if ( Str1 && !v37 && v7 )
  {
    v22 = (const wchar_t *)BiGetPartitionVhdFilePath(v13);
    v8 = (wchar_t *)v22;
    if ( !v22 || wcsicmp(v21, v22) )
    {
      v7 = 0;
      goto LABEL_50;
    }
LABEL_51:
    ExFreePoolWithTag(v8, 0x4B444342u);
  }
  else
  {
LABEL_50:
    if ( v8 )
      goto LABEL_51;
  }
  if ( v7 )
    *v6 = 1;
  return v7;
}
