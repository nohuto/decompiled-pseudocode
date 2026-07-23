/*
 * XREFs of CmpInitHiveFromFile @ 0x1408BAE88
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 * Callees:
 *     EtwWriteTransfer @ 0x140213010 (EtwWriteTransfer.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiAllocateMemory @ 0x1404B7C28 (CmSiAllocateMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpOpenHiveFiles @ 0x1408BB400 (CmpOpenHiveFiles.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpLogEvent @ 0x1408BCD78 (CmpLogEvent.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140C5ECD4 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140C5EF14 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140C5EFB8 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmpInitHiveFromFile(
        unsigned __int16 *a1,
        int a2,
        _QWORD *a3,
        _BYTE *a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        void *a10)
{
  __int64 v10; // r8
  char UnloadRundown; // r15
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  char v18; // r13
  int v19; // esi
  int Hive; // eax
  ULONG_PTR v21; // rbx
  ULONG_PTR v22; // rcx
  int v23; // ebx
  _BYTE v24[8]; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v25; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-80h]
  unsigned int v27; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  _BYTE *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle[2]; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE v33[2]; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-30h]
  _QWORD *v35; // [rsp+D8h] [rbp-28h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-20h] BYREF
  __int128 FileInformation; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp+18h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  char *v42; // [rsp+160h] [rbp+60h]
  int v43; // [rsp+168h] [rbp+68h]
  int v44; // [rsp+16Ch] [rbp+6Ch]
  __int64 *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  __int64 v47; // [rsp+180h] [rbp+80h]
  _DWORD v48[2]; // [rsp+188h] [rbp+88h] BYREF

  v34 = a9;
  v35 = a3;
  v10 = a6;
  UnloadRundown = 0;
  v29 = a4;
  v26 = a2;
  v30 = a6;
  v27 = 0;
  v25 = 0LL;
  FileInformation = 0LL;
  v39 = 0LL;
  v38 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  *(_OWORD *)Handle = 0LL;
  *(_OWORD *)v33 = 0LL;
  if ( (unsigned int)dword_140E09EE8 > 4 && (qword_140E09EF8 & 8) != 0 && (qword_140E09F00 & 8) == qword_140E09F00 )
  {
    v46 = 2LL;
    v45 = (__int64 *)v48;
    v47 = *((_QWORD *)a1 + 1);
    v48[0] = *a1;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v48[1] = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v42 = byte_140058111;
    UserData.Reserved = 2;
    v43 = 31;
    v44 = 1;
    LODWORD(v28) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    a2 = v26;
    v10 = v30;
    a4 = v29;
  }
  while ( 1 )
  {
    v24[0] = *a4;
    v28 = 0LL;
    v13 = CmpOpenHiveFiles(
            (_DWORD)a1,
            a2,
            a5,
            (unsigned int)&v27,
            (__int64)v24,
            (__int64)Handle,
            v10,
            (__int64)&v28,
            (__int64)a10);
    v16 = v13;
    if ( v13 < 0 )
    {
      SetFailureLocation((__int64)a10, 0, 28, v13, 16);
      goto LABEL_7;
    }
    if ( !UnloadRundown )
      break;
    if ( (unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v15, v14) )
    {
      v16 = -1073741431;
LABEL_8:
      CmpReleaseHiveLoadUnloadRundown();
      goto LABEL_9;
    }
LABEL_22:
    v18 = v24[0];
    v19 = v24[0] == 0 ? 5 : 0;
    memset_0(a10, 0, 0x1B0uLL);
    Hive = CmpCreateHive(
             (unsigned int)&v25,
             v19,
             v26,
             v27,
             0LL,
             (__int64)Handle,
             (__int64)a1,
             a5,
             0LL,
             0LL,
             0LL,
             v34,
             (__int64)a10);
    v16 = Hive;
    if ( Hive != -1073741267 )
    {
      if ( Hive < 0 )
      {
        SetFailureLocation((__int64)a10, 0, 28, Hive, 32);
      }
      else
      {
        if ( v19 )
        {
          if ( (*(_DWORD *)(v25 + 4120) & 0x800) != 0 )
          {
            CmpAttachToRegistryProcess(&ApcState);
            v23 = CmpFlushHive(v25, 0xCu);
            CmpDetachFromRegistryProcess(&ApcState);
            if ( v23 < 0 )
              SetFailureLocation((__int64)a10, 1, 28, v23, 48);
          }
        }
        v21 = v25;
        *(_QWORD *)(v21 + 1856) = CmSiAllocateMemory();
        v22 = v25;
        if ( *(_QWORD *)(v25 + 1856) )
        {
          *(_WORD *)(v25 + 1848) = *a1;
          *(_WORD *)(v25 + 1850) = *a1;
          memmove(*(void **)(v25 + 1856), *((const void **)a1 + 1), *a1);
          v22 = v25;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v22 + 64) + 4088LL) & 4) != 0 )
          CmpLogEvent(&REG_EVENT_SELFHEAL);
        if ( ZwQueryInformationFile(Handle[0], &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation) >= 0 )
          *(_QWORD *)(v25 + 4192) = v38;
        v16 = 0;
        *(_DWORD *)(v25 + 188) = HIDWORD(v28);
        *v35 = v25;
        *v29 = v18;
      }
LABEL_7:
      if ( !UnloadRundown )
        goto LABEL_9;
      goto LABEL_8;
    }
    ZwClose(Handle[0]);
    if ( Handle[1] )
      ZwClose(Handle[1]);
    a2 = v26;
    v10 = v30;
    a4 = v29;
    if ( v33[0] )
    {
      ZwClose(v33[0]);
      a2 = v26;
      v10 = v30;
      a4 = v29;
    }
  }
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
    goto LABEL_22;
  v16 = -1073741431;
LABEL_9:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( v33[0] )
    ZwClose(v33[0]);
  if ( (unsigned int)dword_140E09EE8 > 4 && (qword_140E09EF8 & 8) != 0 && (qword_140E09F00 & 8) == qword_140E09F00 )
  {
    LODWORD(v28) = v16;
    v45 = &v28;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_140E09EF0;
    v46 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_140E09EF0;
    v42 = &byte_1400580E7;
    UserData.Reserved = 2;
    v43 = 30;
    v44 = 1;
    v27 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwWriteTransfer(qword_140E09F08, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v16;
}
