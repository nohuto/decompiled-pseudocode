/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x18010B9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlIsStateSeparationEnabled @ 0x1800D8B30 (RtlIsStateSeparationEnabled.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010BBE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010BCFC (RtlpGetBootStatusPathFromRegistry.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtWriteFile @ 0x18015EF40 (NtWriteFile.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateFile @ 0x18015F8E0 (ZwCreateFile.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS RtlCreateBootStatusDataFile(void)
{
  const wchar_t *v0; // rcx
  wchar_t *v1; // rbx
  char v2; // si
  size_t v3; // rax
  int v4; // edi
  PVOID Heap_0; // rax
  void *v6; // r14
  __int128 v8; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+E8h] [rbp+6Fh] BYREF
  wchar_t *v13; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0LL;
  v2 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  IoStatusBlock = 0LL;
  if ( v0 )
  {
    *((_QWORD *)&v8 + 1) = v0;
LABEL_3:
    v3 = 2 * wcslen(v0);
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
    LOWORD(v8) = v3;
    WORD1(v8) = v3 + 2;
    goto LABEL_6;
  }
  if ( (int)RtlpGetBootStatusPathFromRegistry(&v13) < 0 )
  {
    v1 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !RtlIsStateSeparationEnabled() )
      v1 = L"\\SystemRoot\\bootstat.dat";
  }
  else
  {
    v1 = v13;
    v2 = 1;
  }
  *((_QWORD *)&v8 + 1) = v1;
  if ( v1 )
  {
    v0 = v1;
    goto LABEL_3;
  }
LABEL_6:
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ByteOffset.QuadPart = 67584LL;
  v4 = ZwCreateFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, &ByteOffset, 4u, 0, 2u, 0x8020u, 0LL, 0);
  if ( v4 >= 0 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x10800uLL);
    v6 = Heap_0;
    if ( Heap_0 )
    {
      memset_thunk_772440563353939046(Heap_0, 254, 0x10800uLL);
      ByteOffset.QuadPart = 0LL;
      v4 = NtWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v6, 0x10800u, &ByteOffset, 0LL);
      if ( v4 >= 0 )
        v4 = RtlRestoreBootStatusDefaults(FileHandle);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v4 = -1073741801;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v2 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v1);
  return v4;
}
