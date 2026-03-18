/*
 * XREFs of EtwpCreateLogFile @ 0x140A15DA4
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140A6E1B4 (EtwpStartLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1407238D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x140723D10 (ZwQueryVolumeInformationFile.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     EtwpSendSessionNotification @ 0x140A1545C (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x140A16624 (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x140A16914 (EtwpExpandFileName.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B35598 (EtwpEventWriteTemplateAdmin.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2, unsigned int *a3)
{
  char v3; // r12
  HANDLE v6; // r15
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r13
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  __int64 v13; // r8
  int v14; // esi
  int v15; // ecx
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // rax
  bool v17; // si
  __int64 v18; // rdx
  struct _KLOCK_ENTRIES *v19; // r9
  char v20; // r13
  bool v21; // zf
  void *v22; // r12
  AutoBoost *v23; // rax
  void *v24; // rdx
  AutoBoost *v25; // rsi
  __int128 v26; // xmm1
  NTSTATUS updated; // r14d
  int v28; // r8d
  wchar_t *Buffer; // rsi
  int v31; // eax
  struct _KLOCK_ENTRIES *v32; // r9
  AutoBoost *v33; // rax
  void *v34; // rdx
  AutoBoost *v35; // rsi
  UNICODE_STRING v36; // xmm1
  char v37; // [rsp+40h] [rbp-79h]
  unsigned int v38; // [rsp+44h] [rbp-75h]
  struct _SECURITY_CLIENT_CONTEXT *v39; // [rsp+48h] [rbp-71h]
  HANDLE FileHandle; // [rsp+50h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  unsigned int *v42; // [rsp+68h] [rbp-51h]
  struct _IO_STATUS_BLOCK v43; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-39h] BYREF
  __int128 FileInformation; // [rsp+90h] [rbp-29h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-19h]
  __int64 v47; // [rsp+B0h] [rbp-9h]
  __int128 FsInformation; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v49; // [rsp+C8h] [rbp+Fh]

  v3 = 0;
  v42 = a3;
  v37 = 0;
  FileHandle = 0LL;
  v39 = 0LL;
  v47 = 0LL;
  v38 = 0;
  v6 = 0LL;
  FileInformation = 0LL;
  v46 = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 816) & 4) == 0 )
    return 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 824), 0xFFFFFFFC);
  v8 = (_QWORD *)(a1 + 192);
  if ( !*(_QWORD *)(a1 + 160) && !*v8 )
    return 0LL;
  v9 = a1 + 184;
  if ( !*v8 )
    v9 = a1 + 152;
  v10 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v7);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v10, a1 + 688);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v13 = *(unsigned int *)(a1 + 296);
  else
    v13 = 0LL;
  EtwpExpandFileName(0LL, v9, v13, a1 + 136, *(_QWORD *)(a1 + 1360) == EtwpHostSiloState);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
  v14 = *(_DWORD *)(a1 + 12);
  v15 = v14;
  if ( (v14 & 4) != 0 )
    v37 = 1;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v3 = 1;
  else
    v15 = *(_DWORD *)(a1 + 12);
  if ( a2 && *(_QWORD *)(a1 + 720) )
  {
    ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
    v14 = v15;
    v39 = (struct _SECURITY_CLIENT_CONTEXT *)(a1 + 704);
  }
  else
  {
    ClientContext = 0LL;
  }
  v17 = (v14 & 0x4000000) == 0;
  while ( !v6 )
  {
    v49 = 0LL;
    FsInformation = 0LL;
    v43 = 0LL;
    v31 = EtwpDelayCreate((__int64)&FileHandle, 0, v3, ClientContext);
    v6 = FileHandle;
    updated = v31;
    if ( v31 < 0 )
      goto LABEL_36;
    updated = ZwQueryVolumeInformationFile(FileHandle, &v43, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( updated < 0 )
      goto LABEL_36;
    ClientContext = v39;
    v38 = HIDWORD(v49);
    if ( !v37 && v17 )
    {
      ClientContext = v39;
      if ( ((HIDWORD(v49) - 1) & *(_DWORD *)(a1 + 4)) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 && (*(_DWORD *)(a1 + 816) & 2) == 0 )
        {
          updated = -1073741306;
LABEL_36:
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CREATE_FILE_FAILED) )
            EtwpEventWriteTemplateAdmin(
              a1 + 152,
              (unsigned int)&ETW_EVENT_CREATE_FILE_FAILED,
              v28,
              a1 + 136,
              a1 + 152,
              updated,
              *(_DWORD *)(a1 + 12));
          goto LABEL_43;
        }
        v17 = 0;
        ZwClose(v6);
        ClientContext = v39;
        v6 = 0LL;
        FileHandle = 0LL;
      }
    }
  }
  v47 = 0x2000LL;
  FileInformation = 0LL;
  v46 = 0LL;
  ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
  if ( *(_QWORD *)(a1 + 800) )
  {
    EtwpFinalizeHeader(a1, 0LL);
    v20 = 0;
  }
  else
  {
    v20 = 1;
  }
  v21 = *(_QWORD *)(a1 + 192) == 0LL;
  v22 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 800) = v6;
  if ( !v21 )
  {
    v23 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v19);
    v25 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v23, a1 + 688);
    if ( v25 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v25, v24);
      else
        *((_BYTE *)v25 + 10) = 1;
    }
    v26 = *(_OWORD *)(a1 + 184);
    DestinationString = *(UNICODE_STRING *)(a1 + 152);
    *(_OWORD *)(a1 + 152) = v26;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
    RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
  }
  LOBYTE(v18) = v37;
  updated = EtwpUpdateFileHeader(a1, v18, v38);
  if ( updated < 0 )
  {
    *(_QWORD *)(a1 + 800) = v22;
    goto LABEL_36;
  }
  if ( !v20 )
    EtwpSendSessionNotification(a1, 1, 0);
  v6 = 0LL;
  if ( v22 )
    ZwClose(v22);
LABEL_43:
  if ( v6 )
  {
    ZwClose(v6);
    if ( *(_QWORD *)(a1 + 800) )
    {
      Buffer = (wchar_t *)_mm_srli_si128(_mm_loadu_si128((const __m128i *)&DestinationString), 8).m128i_u64[0];
      if ( !Buffer )
        goto LABEL_45;
      v33 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v32);
      v35 = v33;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v33, a1 + 688);
      if ( v35 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v35, v34);
        else
          *((_BYTE *)v35 + 10) = 1;
      }
      v36 = DestinationString;
      *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
      *(UNICODE_STRING *)(a1 + 152) = v36;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
      KeAbPostRelease(a1 + 688);
      RtlInitUnicodeString(&DestinationString, 0LL);
    }
  }
  Buffer = DestinationString.Buffer;
LABEL_45:
  if ( v42 )
    *v42 = v38;
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 184));
  if ( Buffer )
    ExFreePool(Buffer);
  return (unsigned int)updated;
}
