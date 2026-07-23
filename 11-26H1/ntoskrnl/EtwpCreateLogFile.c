/*
 * XREFs of EtwpCreateLogFile @ 0x140A16128
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1407288E0 (ZwQueryVolumeInformationFile.c)
 *     EtwpSendSessionNotification @ 0x140A14650 (EtwpSendSessionNotification.c)
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140B377A8 (EtwpEventWriteTemplateAdmin.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2, _DWORD *a3)
{
  char v3; // r12
  HANDLE v6; // r15
  struct _KLOCK_ENTRIES *v7; // r9
  _QWORD *v8; // rax
  UNICODE_STRING *v9; // r13
  AutoBoost *v10; // rax
  void *v11; // rdx
  AutoBoost *v12; // rbx
  unsigned int v13; // r8d
  int v14; // esi
  int v15; // ecx
  struct _SECURITY_CLIENT_CONTEXT *ClientContext; // rax
  char v17; // si
  struct _KLOCK_ENTRIES *v18; // r9
  char v19; // r13
  bool v20; // zf
  void *v21; // r12
  AutoBoost *v22; // rax
  void *v23; // rdx
  AutoBoost *v24; // rsi
  __int128 v25; // xmm1
  int updated; // r14d
  int v27; // r8d
  wchar_t *Buffer; // rsi
  int v30; // eax
  struct _KLOCK_ENTRIES *v31; // r9
  AutoBoost *v32; // rax
  void *v33; // rdx
  AutoBoost *v34; // rsi
  UNICODE_STRING v35; // xmm1
  char v36; // [rsp+40h] [rbp-79h] BYREF
  char v37; // [rsp+41h] [rbp-78h]
  int v38; // [rsp+44h] [rbp-75h]
  struct _SECURITY_CLIENT_CONTEXT *v39; // [rsp+48h] [rbp-71h]
  HANDLE FileHandle; // [rsp+50h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-61h] BYREF
  _DWORD *v42; // [rsp+68h] [rbp-51h]
  struct _IO_STATUS_BLOCK v43; // [rsp+70h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-39h] BYREF
  __int128 FileInformation; // [rsp+90h] [rbp-29h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-19h]
  __int64 v47; // [rsp+B0h] [rbp-9h]
  __int128 FsInformation; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v49; // [rsp+C8h] [rbp+Fh]

  v3 = 0;
  v42 = a3;
  v36 = 0;
  FileHandle = 0LL;
  v37 = 0;
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
  v9 = (UNICODE_STRING *)(a1 + 184);
  if ( !*v8 )
    v9 = (UNICODE_STRING *)(a1 + 152);
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
    v13 = *(_DWORD *)(a1 + 296);
  else
    v13 = 0;
  EtwpExpandFileName(0, v9, v13, (unsigned __int16 *)(a1 + 136), *(_QWORD *)(a1 + 1360) == EtwpHostSiloState);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
  KeAbPostRelease(a1 + 688);
  v14 = *(_DWORD *)(a1 + 12);
  v15 = v14;
  if ( (v14 & 4) != 0 )
    v36 = 1;
  if ( (*(_DWORD *)(a1 + 816) & 2) != 0 )
    v3 = 1;
  else
    v15 = v14;
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
    v30 = EtwpDelayCreate((PCWSTR *)&FileHandle, (__int64)v9, &v36, v17, 0, v3, ClientContext);
    v6 = FileHandle;
    updated = v30;
    if ( v30 < 0 )
      goto LABEL_36;
    updated = ZwQueryVolumeInformationFile(FileHandle, &v43, &FsInformation, 0x18u, FileFsSizeInformation);
    if ( updated < 0 )
      goto LABEL_36;
    ClientContext = v39;
    v38 = HIDWORD(v49);
    if ( !v36 )
    {
      if ( v17 )
      {
        ClientContext = v39;
        if ( ((HIDWORD(v49) - 1) & *(_DWORD *)(a1 + 4)) != 0 )
        {
          if ( (*(_DWORD *)(a1 + 12) & 0x400) == 0 && (*(_DWORD *)(a1 + 816) & 2) == 0 )
          {
            updated = -1073741306;
LABEL_36:
            if ( EtwEventEnabled(
                   (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
                   &ETW_EVENT_CREATE_FILE_FAILED) )
            {
              EtwpEventWriteTemplateAdmin(
                a1 + 152,
                (unsigned int)&ETW_EVENT_CREATE_FILE_FAILED,
                v27,
                a1 + 136,
                a1 + 152,
                updated,
                *(_DWORD *)(a1 + 12));
            }
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
  }
  v47 = 0x2000LL;
  FileInformation = 0LL;
  v46 = 0LL;
  ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
  if ( *(_QWORD *)(a1 + 800) )
  {
    EtwpFinalizeHeader(a1, 0LL);
    v19 = v37;
  }
  else
  {
    v19 = 1;
  }
  v20 = *(_QWORD *)(a1 + 192) == 0LL;
  v21 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 800) = v6;
  if ( !v20 )
  {
    v22 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v18);
    v24 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v22, a1 + 688);
    if ( v24 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v24, v23);
      else
        *((_BYTE *)v24 + 10) = 1;
    }
    v25 = *(_OWORD *)(a1 + 184);
    DestinationString = *(UNICODE_STRING *)(a1 + 152);
    *(_OWORD *)(a1 + 152) = v25;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
    RtlInitUnicodeString((PUNICODE_STRING)(a1 + 184), 0LL);
  }
  updated = EtwpUpdateFileHeader(a1, v36, v38);
  if ( updated < 0 )
  {
    *(_QWORD *)(a1 + 800) = v21;
    goto LABEL_36;
  }
  if ( !v19 )
    EtwpSendSessionNotification(a1, 1, 0);
  v6 = 0LL;
  if ( v21 )
    ZwClose(v21);
LABEL_43:
  if ( v6 )
  {
    ZwClose(v6);
    if ( *(_QWORD *)(a1 + 800) )
    {
      Buffer = (wchar_t *)_mm_srli_si128(_mm_loadu_si128((const __m128i *)&DestinationString), 8).m128i_u64[0];
      if ( !Buffer )
        goto LABEL_45;
      v32 = (AutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, v31);
      v34 = v32;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v32, a1 + 688);
      if ( v34 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v34, v33);
        else
          *((_BYTE *)v34 + 10) = 1;
      }
      v35 = DestinationString;
      *(_OWORD *)(a1 + 184) = *(_OWORD *)(a1 + 152);
      *(UNICODE_STRING *)(a1 + 152) = v35;
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
