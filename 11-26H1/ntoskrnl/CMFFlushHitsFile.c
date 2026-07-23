/*
 * XREFs of CMFFlushHitsFile @ 0x140848958
 * Callers:
 *     NtMapCMFModule @ 0x140849B30 (NtMapCMFModule.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CMFGetFileSizeEx @ 0x140848C64 (CMFGetFileSizeEx.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFFlushHitsFile(void *Src, unsigned __int64 Length)
{
  void *v4; // rsi
  __int64 result; // rax
  NTSTATUS v6; // edi
  ULONG v7; // edi
  void *Pool2; // rax
  HANDLE FileHandle; // [rsp+50h] [rbp-2B8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-2B0h] BYREF
  HANDLE EventHandle; // [rsp+60h] [rbp-2A8h] BYREF
  void *v12; // [rsp+68h] [rbp-2A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-298h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+A0h] [rbp-268h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-260h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-250h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-238h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  EventHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  v4 = 0LL;
  if ( !Src )
    return 3221225485LL;
  if ( (CMFFlagsCache & 8) != 0
    || (v12 = Src,
        v10 = Length,
        result = MmFlushVirtualMemory(KeGetCurrentThread()->ApcState.Process, &v12, &v10, &IoStatusBlock),
        (_DWORD)result == -1073741688) )
  {
    v6 = RtlStringCchPrintfW(pszDest, 0x104uLL, L"%s\\rc%04u\\rescache.hit", L"\\SystemRoot\\Rescache", CMFCacheIndex);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, pszDest);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
      {
        FileHandle = 0LL;
      }
      else
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v6 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
        if ( (v6 & 0xC0000000) != 0xC0000000 )
        {
          v10 = 0LL;
          v6 = CMFGetFileSizeEx(FileHandle, &v10);
          if ( (v6 & 0xC0000000) != 0xC0000000 )
          {
            v7 = v10;
            if ( Length < (unsigned int)v10 )
              v7 = Length;
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            v4 = Pool2;
            v12 = Pool2;
            if ( Pool2 )
            {
              memmove(Pool2, Src, v7);
              v6 = ZwWriteFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, v4, v7, &ByteOffset, 0LL);
              if ( v6 == 259 )
                v6 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            }
            else
            {
              v6 = -1073741801;
            }
          }
        }
      }
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    if ( EventHandle )
      ZwClose(EventHandle);
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v6;
  }
  return result;
}
