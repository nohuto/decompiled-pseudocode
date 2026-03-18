/*
 * XREFs of ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1401D653C
 * Callers:
 *     ?DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1401D6C40 (-DxgkpPopulateFile@@YAJPEAG0W4DXGKP_HARDLINKOVERWRITETYPE@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1401D63F8 (-DxgkpCopyAttributes@@YAJPEAX0@Z.c)
 *     ?DxgkpDeleteFile@@YAJPEBG@Z @ 0x1401D6A58 (-DxgkpDeleteFile@@YAJPEBG@Z.c)
 */

__int64 __fastcall DxgkpCopyFile(PCWSTR SourceString, PCWSTR a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdi
  void *v5; // rsi
  NTSTATUS v6; // eax
  const wchar_t *v7; // r9
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-49h] BYREF
  struct _UNICODE_STRING v13; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES v15; // [rsp+C0h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+130h] [rbp+77h] BYREF
  void *FileHandle; // [rsp+138h] [rbp+7Fh] BYREF

  DestinationString = 0LL;
  v13 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlInitUnicodeString(&v13, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_QWORD *)&v15.Length = 48LL;
  *(_QWORD *)&v15.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15.RootDirectory = 0LL;
  v15.ObjectName = &v13;
  *(_OWORD *)&v15.SecurityDescriptor = 0LL;
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  IoStatusBlock = 0LL;
  v3 = ZwCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x4010u, 0LL, 0);
  if ( v3 < 0 )
  {
    LODWORD(v4) = 0;
    if ( v3 != -1073741772 )
      LODWORD(v4) = v3;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 465;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed ZwCreateFile for source in DxgkpCopyFile: 0x%I64x",
      (int)v4,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v4;
  }
  v5 = (void *)operator new[](0x10000uLL, 0x4B677844u, 258LL);
  if ( !v5 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 473;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed allocate memory for CopyBuffer",
      473LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v4) = -1073741801;
    goto LABEL_17;
  }
  v6 = ZwCreateFile(&Handle, 0x1F019Fu, &v15, &IoStatusBlock, 0LL, 0x80u, 7u, 5u, 0x4010u, 0LL, 0);
  v4 = v6;
  if ( v6 >= 0 )
  {
    LODWORD(v4) = DxgkpCopyAttributes(FileHandle, Handle);
    if ( (int)v4 < 0 )
      goto LABEL_17;
    while ( 1 )
    {
      v8 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v5, 0x10000u, 0LL, 0LL);
      v4 = v8;
      if ( v8 < 0 )
        break;
      v9 = ZwWriteFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v5, IoStatusBlock.Information, 0LL, 0LL);
      v4 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v7 = L"Failed ZwWriteFile in DxgkpCopyFile: 0x%I64x";
        WdLogGlobalForLineNumber = 546;
        goto LABEL_16;
      }
    }
    if ( v8 == -1073741807 )
    {
      LODWORD(v4) = 0;
      goto LABEL_17;
    }
    WdLogSingleEntry1(2LL);
    v7 = L"Failed ZwReadFile in DxgkpCopyFile: 0x%I64x";
    WdLogGlobalForLineNumber = 526;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v7 = L"Failed ZwCreateFile for dest in DxgkpCopyFile: 0x%I64x";
    WdLogGlobalForLineNumber = 492;
  }
LABEL_16:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_17:
  if ( Handle != (HANDLE)-1LL )
  {
    ZwClose(Handle);
    if ( (int)v4 < 0 )
      DxgkpDeleteFile(a2);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  if ( FileHandle != (void *)-1LL )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
