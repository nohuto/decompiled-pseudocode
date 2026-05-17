/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x1800A54FC
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x1800A4CB0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A5210 (RtlpReferenceCurrentDirectory.c)
 *     RtlpInitCurrentDir @ 0x1800A5714 (RtlpInitCurrentDir.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F860 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(unsigned __int16 *a1, __int16 a2, __int64 *a3)
{
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  __int64 Heap_0; // rax
  __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  IoStatusBlock = 0LL;
  result = RtlpDosPathNameToRelativeNtPathName(0, (__m128i *)a1, 0LL, (unsigned __int16 *)&v14, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = MEMORY[0x7FFE02DC];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlFreeHeap_0();
    if ( v8 >= 0 )
    {
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &v13, 8LL, 4);
      if ( v8 >= 0 )
      {
        Heap_0 = RtlAllocateHeap_0();
        v10 = Heap_0;
        if ( Heap_0 )
        {
          v11 = HIDWORD(v13);
          *(_QWORD *)(Heap_0 + 8) = FileHandle;
          *(_QWORD *)(Heap_0 + 32) = Heap_0 + 48;
          *(_DWORD *)Heap_0 = 1;
          *(_WORD *)(Heap_0 + 26) = a2;
          *(_DWORD *)(Heap_0 + 16) = v7;
          *(_DWORD *)(Heap_0 + 40) = v11;
          memmove((void *)(Heap_0 + 48), *((const void **)a1 + 1), *a1);
          *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
          *(_WORD *)(v10 + 24) = *a1;
          v12 = (unsigned __int64)*a1 >> 1;
          if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v12 - 2) != 92 )
          {
            if ( (unsigned __int64)*a1 + 4 > *(unsigned __int16 *)(v10 + 26) )
            {
              NtClose(FileHandle);
              RtlFreeHeap_0();
              return 3221225734LL;
            }
            *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * v12) = 92;
            *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
            *(_WORD *)(v10 + 24) += 2;
          }
          *a3 = v10;
          return 0LL;
        }
        v8 = -1073741801;
      }
      NtClose(FileHandle);
    }
    return (unsigned int)v8;
  }
  return result;
}
