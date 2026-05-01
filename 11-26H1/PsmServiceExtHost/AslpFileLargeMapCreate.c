/*
 * XREFs of AslpFileLargeMapCreate @ 0x1800A23E0
 * Callers:
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A1E40 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslpFileLargeMapDelete @ 0x1800A261C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeMapCreate(void ***a1, HANDLE *a2)
{
  void **Heap; // rax
  void **v4; // rbx
  unsigned int v5; // edi
  NTSTATUS v6; // eax
  const char *v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  ULONG SectionPageProtection[2]; // [rsp+20h] [rbp-60h]
  HANDLE FileHandle; // [rsp+30h] [rbp-50h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void **v15; // [rsp+D0h] [rbp+50h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Heap = (void **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x40uLL);
  v15 = Heap;
  v4 = Heap;
  if ( !Heap )
  {
    v5 = -1073741801;
    goto LABEL_15;
  }
  ObjectAttributes.Length = 48;
  FileHandle = *a2;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateSection(Heap + 1, 0xF0005u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = "ZwCreateSection failed [%x]";
    v8 = 346LL;
LABEL_5:
    SectionPageProtection[0] = v6;
    AslLogCallPrintf(1LL, "AslpFileLargeMapCreate", v8, v7, *(_QWORD *)SectionPageProtection);
    goto LABEL_15;
  }
  v4[7] = (char *)a2[2] - (unsigned __int16)((unsigned __int16)a2[2] - 4096) - 4096;
  v6 = ZwMapViewOfSection(
         v4[1],
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         v4 + 5,
         0LL,
         0LL,
         (PLARGE_INTEGER)v4 + 7,
         (PSIZE_T)v4 + 6,
         ViewUnmap,
         0x500000u,
         2u);
  v5 = v6;
  if ( v6 < 0 )
  {
    v7 = "ZwMapViewOfSection failed to map the end of the file [%x]";
    v8 = 374LL;
    goto LABEL_5;
  }
  v9 = (unsigned __int64)a2[2];
  if ( v9 > 0x20000000 )
    v9 = 0x20000000LL;
  do
  {
    v4[3] = (void *)v9;
    v4[4] = 0LL;
    v6 = ZwMapViewOfSection(
           v4[1],
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           v4 + 2,
           0LL,
           0LL,
           (PLARGE_INTEGER)v4 + 4,
           (PSIZE_T)v4 + 3,
           ViewUnmap,
           0x500000u,
           2u);
    v9 >>= 1;
    v5 = v6;
  }
  while ( v6 == -1073741801 && v9 >= 0x100000 );
  if ( v6 < 0 )
  {
    v7 = "ZwMapViewOfSection failed to map the start of the file [%x]";
    v8 = 416LL;
    goto LABEL_5;
  }
  *v4 = a2;
  *a1 = v4;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
LABEL_15:
  if ( v4 )
    AslpFileLargeMapDelete(&v15);
  return v5;
}
