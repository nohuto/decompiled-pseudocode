/*
 * XREFs of LdrpCnvrtShortToLongFileName @ 0x1801143AC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180030230 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800438A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlReleaseRelativeName @ 0x1800A6DC0 (RtlReleaseRelativeName.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenFile @ 0x18015F5A0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x18015F5E0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpCnvrtShortToLongFileName(const wchar_t *a1, const WCHAR *a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // ebx
  size_t v7; // rax
  __int64 Heap_0; // rdi
  _WORD *v9; // rax
  _WORD *v10; // rsi
  __int128 v12; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  __int128 v15; // [rsp+98h] [rbp-9h] BYREF
  __int128 v16; // [rsp+A8h] [rbp+7h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  v5 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v12 = 0LL;
  DestinationString = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( *a1 == 92 )
  {
    *((_QWORD *)&v12 + 1) = a1;
    v7 = 2 * wcslen(a1);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v12) = v7;
    WORD1(v12) = v7 + 2;
    goto LABEL_12;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName_U(2, a1, (int)&v12, 0LL, (__int64)&v15);
  if ( v6 >= 0 )
  {
    v5 = *((_QWORD *)&v12 + 1);
    if ( (_WORD)v15 )
      v12 = v15;
    else
      *(_QWORD *)&v16 = 0LL;
LABEL_12:
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( v5 )
    {
      RtlReleaseRelativeName((__int64)&v15);
      RtlFreeHeap_0();
    }
    if ( v6 >= 0 )
    {
      Heap_0 = RtlAllocateHeap_0();
      if ( Heap_0 )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v6 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap_0, 1040, 3, 1, &DestinationString, 0);
        if ( v6 >= 0 )
        {
          if ( *(_DWORD *)(Heap_0 + 60) <= 0x104u )
          {
            v9 = (_WORD *)RtlAllocateHeap_0();
            v10 = v9;
            if ( v9 )
            {
              memmove(v9, (const void *)(Heap_0 + 94), *(unsigned int *)(Heap_0 + 60));
              v10[(unsigned __int64)*(unsigned int *)(Heap_0 + 60) >> 1] = 0;
              *a3 = v10;
            }
            else
            {
              v6 = -1073741801;
            }
          }
          else
          {
            v6 = -1073741562;
          }
        }
        RtlFreeHeap_0();
      }
      else
      {
        v6 = -1073741801;
      }
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v6;
}
