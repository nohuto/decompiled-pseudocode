/*
 * XREFs of SdbpGetFileTimestamp @ 0x18008E114
 * Callers:
 *     SdbpGetMergeRedirectPathInternal @ 0x18008E830 (SdbpGetMergeRedirectPathInternal.c)
 *     SdbpOpenLocalDatabaseEx @ 0x18009015C (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpGetFileTimestamp(_QWORD *a1, const WCHAR *a2, int a3)
{
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v7; // ebx
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  _BYTE v25[24]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v26; // [rsp+108h] [rbp+8h]

  v24 = 0LL;
  v17 = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v23 = 0LL;
  memset_0(v25, 0, 0x48uLL);
  P = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  p_DestinationString = &DestinationString;
  if ( _wcsnicmp(a2, L"\\SystemRoot\\", 0xCuLL) )
  {
    v7 = RtlDosPathNameToNtPathName_U_WithStatus(a2, &v17, 0LL, 0LL);
    if ( v7 < 0 )
      goto LABEL_19;
    p_DestinationString = (struct _UNICODE_STRING *)&v17;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = p_DestinationString;
  ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
  if ( !ModuleHandleW )
  {
    v7 = -1073741823;
    goto LABEL_19;
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "NtQueryInformationByName");
  if ( ProcAddress )
  {
    v10 = ((__int64 (__fastcall *)(struct _OBJECT_ATTRIBUTES *, struct _IO_STATUS_BLOCK *, _BYTE *, __int64, int))ProcAddress)(
            &ObjectAttributes,
            &IoStatusBlock,
            v25,
            72LL,
            68);
    v7 = v10;
    if ( v10 == -1073741772 )
      goto LABEL_19;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)&v26 + 1);
      v12 = v26;
LABEL_16:
      if ( a3 )
        v11 = v12;
      v7 = 0;
      *a1 = v11;
      goto LABEL_19;
    }
  }
  v13 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x60u, 0LL, 0);
  v7 = v13;
  if ( v13 >= 0 )
  {
    v14 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    v7 = v14;
    if ( v14 < 0 )
    {
      AslLogCallPrintf(1LL, "SdbpGetFileTimestamp", 1561LL, "Failed to get timestamp from %S. [%x]", a2, v14);
      goto LABEL_19;
    }
    v11 = *((_QWORD *)&v23 + 1);
    v12 = v23;
    v26 = v23;
    goto LABEL_16;
  }
  if ( v13 != -1073741772 )
    AslLogCallPrintf(1LL, "SdbpGetFileTimestamp", 1550LL, "Failed to open file [%x]", v13);
LABEL_19:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v7;
}
