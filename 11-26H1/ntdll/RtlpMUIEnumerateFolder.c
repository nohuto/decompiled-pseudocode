/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x180022388
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800206B0 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlReAllocateHeap_0 @ 0x180001CF0 (RtlReAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeStringEx @ 0x1800A39B0 (RtlInitUnicodeStringEx.c)
 *     RtlReleaseRelativeName @ 0x1800A5EF0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18015F4E0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpMUIEnumerateFolder(PCWSTR SourceString, _QWORD *a2, PVOID *a3)
{
  char v4; // r12
  unsigned int v5; // r13d
  _DWORD *Heap_0; // r14
  unsigned __int64 v7; // rax
  PVOID v8; // rdi
  HANDLE ContainingDirectory; // rax
  NTSTATUS v10; // esi
  BOOLEAN RestartScan; // al
  __int64 v12; // r15
  NTSTATUS v13; // eax
  unsigned int *i; // rsi
  bool v15; // zf
  char *v16; // rdi
  int v17; // eax
  unsigned int v18; // edx
  char *v20; // rax
  char *v21; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  DWORD Lcid; // [rsp+68h] [rbp-71h] BYREF
  PVOID BaseAddress[2]; // [rsp+70h] [rbp-69h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-59h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+90h] [rbp-49h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp+7h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+F0h] [rbp+17h] BYREF
  int v31; // [rsp+158h] [rbp+7Fh]

  Lcid = 0;
  v31 = 0;
  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  Heap_0 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  String = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( !SourceString )
    goto LABEL_49;
  if ( !a3 )
    return v4;
  if ( !a2 )
    goto LABEL_50;
  v7 = -1LL;
  do
    ++v7;
  while ( SourceString[v7] );
  if ( v7 >= 0x104 )
    goto LABEL_50;
  *a3 = 0LL;
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned int)&DestinationString,
              0,
              (unsigned int)BaseAddress,
              0LL,
              0LL,
              (__int64)&RelativeName) >= 0 )
  {
    v8 = BaseAddress[1];
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( v8 )
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
    if ( v10 >= 0 )
    {
      if ( FileHandle )
      {
        Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap_0 )
          goto LABEL_31;
        RestartScan = 1;
        v12 = 0LL;
LABEL_17:
        v13 = NtQueryDirectoryFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Heap_0,
                0x1000u,
                FileDirectoryInformation,
                0,
                0LL,
                RestartScan);
        if ( v13 < 0 )
        {
          if ( v13 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap_0[15] || *Heap_0 )
        {
          for ( i = Heap_0; ; i = (unsigned int *)((char *)i + *i) )
          {
            v15 = (i[14] & 0x10) == 0;
            String.MaximumLength = *((_WORD *)i + 30);
            String.Length = String.MaximumLength;
            String.Buffer = (wchar_t *)(i + 16);
            if ( !v15 && RtlCultureNameToLCID(&String, &Lcid) )
            {
              v16 = (char *)*a3;
              ++v12;
              if ( *a3 )
              {
                v17 = v31;
              }
              else
              {
                v20 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                *a3 = v20;
                v16 = v20;
                if ( !v20 )
                  goto LABEL_31;
                v17 = 0;
                v5 = 520;
                v31 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v5 )
              {
                if ( v18 > 0x208 )
                  v5 += v18 + 2;
                else
                  v5 += 520;
                v21 = (char *)RtlReAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v16, v5);
                *a3 = v21;
                if ( !v21 )
                {
                  *a3 = v16;
                  goto LABEL_31;
                }
                v16 = v21;
              }
              memmove(&v16[v31], i + 16, i[15]);
              v31 += i[15] + 2;
            }
            if ( !*i )
            {
              memset_thunk_772440563353939046(Heap_0, 0, 0x1000uLL);
              RestartScan = 0;
              goto LABEL_17;
            }
          }
        }
        v4 = 1;
        *a2 = v12;
        goto LABEL_31;
      }
LABEL_50:
      if ( *a3 )
      {
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v4;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap_0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
  if ( !v4 )
  {
LABEL_49:
    if ( !a3 )
      return v4;
    goto LABEL_50;
  }
  return v4;
}
