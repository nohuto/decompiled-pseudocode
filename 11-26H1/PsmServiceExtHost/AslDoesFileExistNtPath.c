/*
 * XREFs of AslDoesFileExistNtPath @ 0x180098A78
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 */

__int64 __fastcall AslDoesFileExistNtPath(PWSTR FileName)
{
  unsigned int v2; // ebx
  WCHAR *Heap; // rdi
  char v4; // r14
  RTL_PATH_TYPE v5; // esi
  NTSTATUS FullPathName_UEx; // eax
  RTL_PATH_TYPE v7; // eax
  const char *v8; // r9
  __int64 v9; // r8
  NTSTATUS v10; // eax
  RTL_PATH_TYPE *InputPathType; // [rsp+20h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  RTL_PATH_TYPE v16; // [rsp+B0h] [rbp+30h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v16 = RtlPathTypeUnknown;
  v2 = 0;
  Heap = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, FileName);
  if ( DestinationString.Length <= 8u
    || *DestinationString.Buffer != 92
    || DestinationString.Buffer[1] != 92 && DestinationString.Buffer[1] != 63
    || DestinationString.Buffer[2] != 63
    || DestinationString.Buffer[3] != 92 )
  {
    v5 = 520;
    do
    {
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v5);
      if ( !Heap )
      {
        AslLogCallPrintf(1LL, "AslDoesFileExistNtPath", 658LL, "Out of memory");
        goto LABEL_27;
      }
      FullPathName_UEx = RtlGetFullPathName_UEx(FileName, v5, Heap, 0LL, &v16);
      if ( FullPathName_UEx < 0 )
      {
        v8 = "Failed to get full path [%x]";
        v9 = 669LL;
        goto LABEL_25;
      }
      v7 = v16;
      if ( v16 > (unsigned int)v5 )
      {
        if ( v4 )
        {
          AslLogCallPrintf(
            1LL,
            "AslDoesFileExistNtPath",
            678LL,
            "RtlGetFullPathName_UEx failed to get full path with larger buffer.");
          goto LABEL_27;
        }
        AslFree(NtCurrentPeb()->ProcessHeap, Heap);
        v7 = v16;
        Heap = 0LL;
        v5 = v16;
      }
      v4 = 1;
    }
    while ( v7 >= (unsigned int)v5 );
    if ( _wcsnicmp(Heap, L"\\SystemRoot\\", 0xCuLL) )
    {
      FullPathName_UEx = RtlDosPathNameToNtPathName_U_WithStatus(Heap, &DestinationString, 0LL, 0LL);
      if ( FullPathName_UEx < 0 )
      {
        v8 = "RtlDosPathNameToNtPathName_U_WithStatus failed [%x]";
        v9 = 701LL;
LABEL_25:
        LODWORD(InputPathType) = FullPathName_UEx;
        AslLogCallPrintf(1LL, "AslDoesFileExistNtPath", v9, v8, InputPathType);
        goto LABEL_27;
      }
    }
  }
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v10 >= 0 )
  {
    v2 = 1;
    ZwClose(FileHandle);
  }
  else if ( v10 == -1073741757 || v10 == -1073741790 )
  {
    v2 = 1;
  }
LABEL_27:
  if ( DestinationString.Buffer != FileName )
    RtlFreeUnicodeString(&DestinationString);
  if ( Heap )
    AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return v2;
}
