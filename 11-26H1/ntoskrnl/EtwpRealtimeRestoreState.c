/*
 * XREFs of EtwpRealtimeRestoreState @ 0x140B561BC
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x140A138AC (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpEventWriteTemplateBackingFile @ 0x14082B8C8 (EtwpEventWriteTemplateBackingFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreState(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  int UsedProcessorCount; // eax
  __int64 v5; // rax
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int128 v9; // xmm0
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int FileInformationClass; // [rsp+20h] [rbp-69h]
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-31h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 v23; // [rsp+B0h] [rbp+27h]
  __int128 FileInformation; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v25; // [rsp+D0h] [rbp+47h]

  v25 = 0LL;
  FileInformation = 0LL;
  IoStatusBlock = 0LL;
  memset_0(Buffer, 0, 0x48uLL);
  result = ZwQueryInformationFile(
             *(HANDLE *)(a1 + 360),
             &IoStatusBlock,
             &FileInformation,
             0x18u,
             FileStandardInformation);
  if ( result >= 0 )
  {
    if ( !*((_QWORD *)&FileInformation + 1) )
      return 0;
    if ( *((__int64 *)&FileInformation + 1) < 72 )
      return -1073741566;
    v3 = *(void **)(a1 + 360);
    ByteOffset.QuadPart = 0LL;
    result = ZwReadFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result < 0 )
      return result;
    result = IoStatusBlock.Status;
    if ( IoStatusBlock.Status < 0 )
      return result;
    if ( IoStatusBlock.Information != 72 )
      return -1073741807;
    if ( Buffer[0] != 1933995090 )
      return -1073741566;
    if ( Buffer[2] != 1 )
      return -1073741566;
    UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
    if ( Buffer[3] != UsedProcessorCount )
      return -1073741566;
    if ( !v19 )
      return -1073741566;
    if ( v20 > v22 )
      return -1073741566;
    if ( v21 > v22 )
      return -1073741566;
    if ( v21 == v20 )
      return -1073741566;
    if ( (unsigned __int64)v22 < 0x48 )
      return -1073741566;
    v5 = *(_QWORD *)(a1 + 416);
    if ( v22 > v5 || v23 > v5 || *((__int64 *)&FileInformation + 1) < v22 )
      return -1073741566;
    v6 = *(void **)(a1 + 360);
    Buffer[0] = 0;
    result = ZwWriteFile(v6, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result >= 0 )
    {
      v7 = v23;
      v8 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236));
      v9 = v18;
      *(_DWORD *)(a1 + 424) = v19;
      *(_QWORD *)(a1 + 392) = v20;
      *(_QWORD *)(a1 + 384) = v21;
      *(_QWORD *)(a1 + 400) = v22;
      v10 = *(_QWORD *)(a1 + 416) - v7;
      *(_QWORD *)(a1 + 408) = v7;
      *(_OWORD *)(a1 + 432) = v9;
      if ( v10 <= v8 && *(int *)(a1 + 16) >= 0 )
      {
        _InterlockedExchange((volatile __int32 *)(a1 + 16), -1073741432);
        if ( EtwEventEnabled((REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink, &ETW_EVENT_BACKING_FILE_FULL) )
          EtwpEventWriteTemplateBackingFile(
            v12,
            v11,
            v13,
            (unsigned __int16 *)(a1 + 136),
            FileInformationClass,
            *(_DWORD *)(a1 + 12));
      }
      return 0;
    }
  }
  return result;
}
