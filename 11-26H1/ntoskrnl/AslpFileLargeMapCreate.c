/*
 * XREFs of AslpFileLargeMapCreate @ 0x1409E2CD8
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14077DAD8 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1407238F0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x140723D30 (ZwCreateSection.c)
 *     AslpFileLargeMapDelete @ 0x14077C39C (AslpFileLargeMapDelete.c)
 *     AslAlloc @ 0x1409E4C90 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409E8884 (AslLogCallPrintf.c)
 *     MmSecureVirtualMemory @ 0x140AB0320 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  const char *v6; // r9
  int v7; // r8d
  HANDLE v8; // rax
  const char *v9; // r9
  int v10; // r8d
  unsigned __int64 v11; // rsi
  SIZE_T *v12; // r15
  NTSTATUS v13; // eax
  HANDLE v14; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+50h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = AslAlloc(a1, 80LL);
  v19 = v3;
  v4 = v3;
  if ( !v3 )
  {
    v5 = -1073741801;
    goto LABEL_20;
  }
  ObjectAttributes.Length = 48;
  FileHandle = *(HANDLE *)a2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateSection((PHANDLE)(v3 + 8), 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v5 < 0 )
  {
    v6 = "ZwCreateSection failed [%x]";
    v7 = 346;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslpFileLargeMapCreate", v7, (_DWORD)v6);
    goto LABEL_20;
  }
  *(_QWORD *)(v4 + 64) = *(_QWORD *)(a2 + 16) - 4096LL - (unsigned __int16)(*(_QWORD *)(a2 + 16) - 4096);
  v5 = ZwMapViewOfSection(
         *(HANDLE *)(v4 + 8),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)(v4 + 48),
         0LL,
         0LL,
         (PLARGE_INTEGER)(v4 + 64),
         (PSIZE_T)(v4 + 56),
         ViewUnmap,
         0x500000u,
         2u);
  if ( v5 < 0 )
  {
    v6 = "ZwMapViewOfSection failed to map the end of the file [%x]";
    v7 = 374;
    goto LABEL_5;
  }
  v8 = MmSecureVirtualMemory(*(PVOID *)(v4 + 48), *(_QWORD *)(v4 + 56), 2u);
  *(_QWORD *)(v4 + 72) = v8;
  if ( !v8 )
  {
    v9 = "MmSecureVirtualMemory failed to secure the end view";
    v10 = 381;
LABEL_10:
    AslLogCallPrintf(1, (unsigned int)"AslpFileLargeMapCreate", v10, (_DWORD)v9);
    v5 = -1073741823;
    goto LABEL_20;
  }
  v11 = *(_QWORD *)(a2 + 16);
  v12 = (SIZE_T *)(v4 + 24);
  if ( v11 > 0x20000000 )
    v11 = 0x20000000LL;
  do
  {
    *v12 = v11;
    *(_QWORD *)(v4 + 32) = 0LL;
    v13 = ZwMapViewOfSection(
            *(HANDLE *)(v4 + 8),
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            (PVOID *)(v4 + 16),
            0LL,
            0LL,
            (PLARGE_INTEGER)(v4 + 32),
            (PSIZE_T)(v4 + 24),
            ViewUnmap,
            0x500000u,
            2u);
    v11 >>= 1;
    v5 = v13;
  }
  while ( v13 == -1073741801 && v11 >= 0x100000 );
  if ( v13 < 0 )
  {
    v6 = "ZwMapViewOfSection failed to map the start of the file [%x]";
    v7 = 416;
    goto LABEL_5;
  }
  v14 = MmSecureVirtualMemory(*(PVOID *)(v4 + 16), *v12, 2u);
  *(_QWORD *)(v4 + 40) = v14;
  if ( !v14 )
  {
    v9 = "MmSecureVirtualMemory failed to secure the start view";
    v10 = 423;
    goto LABEL_10;
  }
  *(_QWORD *)v4 = a2;
  *a1 = v4;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
LABEL_20:
  if ( v4 )
    AslpFileLargeMapDelete(&v19);
  return (unsigned int)v5;
}
