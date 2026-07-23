/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x1800A462C
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x1800A3DE0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A4340 (RtlpReferenceCurrentDirectory.c)
 *     RtlpInitCurrentDir @ 0x1800A4844 (RtlpInitCurrentDir.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18002EAB0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenFile @ 0x18015F4A0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F760 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(unsigned __int16 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  _QWORD *Heap_0; // rax
  _QWORD *v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 FsInformation; // [rsp+40h] [rbp-29h] BYREF
  PVOID BaseAddress[2]; // [rsp+48h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  FsInformation = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  IoStatusBlock = 0LL;
  result = RtlpDosPathNameToRelativeNtPathName(0, (__m128i *)a1, 0LL, (unsigned __int16 *)BaseAddress, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = MEMORY[0x7FFE02DC];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[1]);
    if ( v8 >= 0 )
    {
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
      if ( v8 >= 0 )
      {
        Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3 + 48);
        v10 = Heap_0;
        if ( Heap_0 )
        {
          v11 = HIDWORD(FsInformation);
          Heap_0[1] = FileHandle;
          Heap_0[4] = Heap_0 + 6;
          *(_DWORD *)Heap_0 = 1;
          *((_WORD *)Heap_0 + 13) = v3;
          *((_DWORD *)Heap_0 + 4) = v7;
          *((_DWORD *)Heap_0 + 10) = v11;
          memmove(Heap_0 + 6, *((const void **)a1 + 1), *a1);
          *(_WORD *)(v10[4] + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
          *((_WORD *)v10 + 12) = *a1;
          v12 = (unsigned __int64)*a1 >> 1;
          if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v12 - 2) != 92 )
          {
            if ( (unsigned __int64)*a1 + 4 > *((unsigned __int16 *)v10 + 13) )
            {
              NtClose(FileHandle);
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
              return 3221225734LL;
            }
            *(_WORD *)(v10[4] + 2 * v12) = 92;
            *(_WORD *)(v10[4] + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
            *((_WORD *)v10 + 12) += 2;
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
