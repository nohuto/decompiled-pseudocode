/*
 * XREFs of AslpFileLargeMapCreate @ 0x140B6CF80
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1407805D8 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1407284C0 (ZwMapViewOfSection.c)
 *     ZwCreateSection @ 0x140728900 (ZwCreateSection.c)
 *     AslpFileLargeMapDelete @ 0x14077EE90 (AslpFileLargeMapDelete.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     MmSecureVirtualMemory @ 0x140AADF70 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  NTSTATUS v5; // ebx
  HANDLE v6; // rax
  unsigned __int64 v7; // rsi
  SIZE_T *v8; // r15
  NTSTATUS v9; // eax
  HANDLE v10; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-50h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+D0h] [rbp+50h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = AslAlloc();
  v15 = v3;
  v4 = v3;
  if ( !v3 )
  {
    v5 = -1073741801;
    goto LABEL_15;
  }
  ObjectAttributes.Length = 48;
  FileHandle = *(HANDLE *)a2;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateSection((PHANDLE)(v3 + 8), 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  if ( v5 < 0 )
    goto LABEL_4;
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
    goto LABEL_4;
  v6 = MmSecureVirtualMemory(*(PVOID *)(v4 + 48), *(_QWORD *)(v4 + 56), 2u);
  *(_QWORD *)(v4 + 72) = v6;
  if ( !v6 )
  {
LABEL_7:
    AslLogCallPrintf(1LL, (__int64)"AslpFileLargeMapCreate");
    v5 = -1073741823;
    goto LABEL_15;
  }
  v7 = *(_QWORD *)(a2 + 16);
  v8 = (SIZE_T *)(v4 + 24);
  if ( v7 > 0x20000000 )
    v7 = 0x20000000LL;
  do
  {
    *v8 = v7;
    *(_QWORD *)(v4 + 32) = 0LL;
    v9 = ZwMapViewOfSection(
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
    v7 >>= 1;
    v5 = v9;
  }
  while ( v9 == -1073741801 && v7 >= 0x100000 );
  if ( v9 < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL, (__int64)"AslpFileLargeMapCreate");
    goto LABEL_15;
  }
  v10 = MmSecureVirtualMemory(*(PVOID *)(v4 + 16), *v8, 2u);
  *(_QWORD *)(v4 + 40) = v10;
  if ( !v10 )
    goto LABEL_7;
  *(_QWORD *)v4 = a2;
  *a1 = v4;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
LABEL_15:
  if ( v4 )
    AslpFileLargeMapDelete(&v15);
  return (unsigned int)v5;
}
