/*
 * XREFs of EtwpSavePersistedLogger @ 0x140834B24
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x1408350F8 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     MmUnmapReservedMapping @ 0x1403CBB70 (MmUnmapReservedMapping.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1404AECD0 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpInitializeCompressedWriter @ 0x140834520 (EtwpInitializeCompressedWriter.c)
 *     EtwpQueryPersistedMemory @ 0x140834A30 (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x140835210 (EtwpTraceSavePersistedLoggerStop.c)
 *     EtwpWriteBufferCompressed @ 0x140835324 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x1408354E0 (EtwpWriteRemainingCompressedData.c)
 *     EtwpExpandFileName @ 0x140A1586C (EtwpExpandFileName.c)
 *     EtwpDelayCreate @ 0x140A15A94 (EtwpDelayCreate.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     MmAllocateMappingAddressEx @ 0x140AF4820 (MmAllocateMappingAddressEx.c)
 *     MmFreeMappingAddress @ 0x140B14CF0 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(__int64 a1, __int64 a2)
{
  HANDLE v3; // r13
  int v4; // esi
  struct _MDL *v5; // r14
  PVOID v6; // rdi
  _QWORD *v7; // r12
  __int64 v8; // r8
  __int64 Length; // r15
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  BOOLEAN v15; // al
  __int64 v16; // rcx
  __int64 i; // rdx
  int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // edi
  int v22; // r15d
  struct _MDL *v23; // r10
  __int64 v24; // r11
  unsigned int v25; // eax
  __int64 v26; // r8
  bool v27; // zf
  int v28; // eax
  _DWORD *v29; // rax
  _DWORD *v30; // rdi
  unsigned int v31; // eax
  int v32; // r10d
  unsigned int v33; // r11d
  struct _MDL *v34; // r15
  __int64 v35; // rbx
  unsigned int v36; // r9d
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rcx
  _DWORD *Buffer; // rax
  void *v41; // rdi
  int UserData; // [rsp+20h] [rbp-E0h]
  unsigned int j; // [rsp+54h] [rbp-ACh] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h]
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-98h] BYREF
  int v49; // [rsp+70h] [rbp-90h]
  int v50; // [rsp+74h] [rbp-8Ch]
  int v51; // [rsp+78h] [rbp-88h] BYREF
  PVOID MappingAddress; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  HANDLE v56; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER ByteOffset; // [rsp+B0h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  char v59[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+F0h] [rbp-10h]
  PVOID v62; // [rsp+F8h] [rbp-8h]
  _OWORD FileInformation[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v64; // [rsp+130h] [rbp+30h]

  v55 = a2;
  v53 = a1;
  ByteOffset.QuadPart = 0LL;
  v64 = 0LL;
  j = 0;
  FileHandle = 0LL;
  v45 = 0;
  memset(FileInformation, 0, sizeof(FileInformation));
  v3 = 0LL;
  v4 = 0;
  v49 = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  v51 = 0;
  v6 = 0LL;
  IoStatusBlock = 0LL;
  v7 = 0LL;
  v48 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset_0(v59, 0, 0x40uLL);
  EtwWrite(
    (REGHANDLE)stru_140F03830.SavedApcState.ApcListHead[0].Blink,
    &ETW_EVENT_SAVE_PERSISTED_LOGGER_START,
    0LL,
    0,
    0LL);
  Length = *(unsigned int *)(a1 + 8);
  v50 = Length;
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
  }
  else
  {
    MappingAddress = (PVOID)MmAllocateMappingAddressEx((unsigned int)Length, 1266119749LL, 0LL);
    v6 = MappingAddress;
    if ( MappingAddress && (Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL), (v5 = Mdl) != 0LL) )
    {
      v13 = v55;
      Mdl->MdlFlags |= 2u;
      v10 = EtwpQueryPersistedMemory(v12, v13, &v48, &j);
      if ( v10 < 0 )
      {
        v7 = v48;
      }
      else
      {
        v14 = v53;
        v15 = RtlCreateUnicodeString(&DestinationString, (PCWSTR)(v53 + *(unsigned int *)(v53 + 12)));
        v7 = v48;
        if ( v15 )
        {
          v16 = 0LL;
          for ( i = 0LL; (unsigned int)i < j; i = (unsigned int)(i + 1) )
          {
            v8 = v48[i] >> 40;
            if ( !v8 )
              goto LABEL_13;
            v16 += v8;
          }
          if ( v16 << 12 != Length * *(unsigned int *)(v14 + 4) )
          {
LABEL_13:
            v10 = -1072103376;
            goto LABEL_60;
          }
          LOBYTE(UserData) = 0;
          v10 = EtwpExpandFileName(0LL, &DestinationString, 0LL, &DestinationString, UserData);
          if ( v10 >= 0 )
          {
            v18 = EtwpDelayCreate((__int64)&FileHandle, 0, 1, 0LL);
            v3 = FileHandle;
            v10 = v18;
            if ( v18 >= 0 )
            {
              LODWORD(v64) = 0x2000;
              v56 = FileHandle;
              ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
              v10 = EtwpInitializeCompressedWriter((__int64)v59, Length, (__int64)v3);
              if ( v10 >= 0 )
              {
                v19 = 0;
                v20 = 0;
                v46 = 0;
                v21 = (unsigned int)Length >> 12;
                LODWORD(v48) = (unsigned int)Length >> 12;
                for ( j = 0; ; v20 = j )
                {
                  LODWORD(FileHandle) = v19;
                  if ( v19 >= *(_DWORD *)(v53 + 4) )
                    break;
                  if ( v21 )
                  {
                    v22 = v46;
                    v23 = v5 + 1;
                    v24 = v21;
                    do
                    {
                      v25 = v20 + 1;
                      v23->Next = (struct _MDL *)(v20 + (v7[v22] & 0xFFFFFFFFFFLL));
                      v20 = 0;
                      v23 = (struct _MDL *)((char *)v23 + 8);
                      v26 = v7[v22] >> 40;
                      v27 = v25 == v26;
                      if ( v25 != v26 )
                        v20 = v25;
                      v28 = v22 + 1;
                      if ( !v27 )
                        v28 = v22;
                      v22 = v28;
                      --v24;
                    }
                    while ( v24 );
                    LODWORD(Length) = v50;
                    v3 = v56;
                    v46 = v28;
                    j = v20;
                  }
                  v29 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v5, MmCached);
                  v30 = v29;
                  if ( *v29 == (_DWORD)Length
                    && (v29[2] <= *v29 ? (v31 = v29[2]) : (v31 = v29[1]), v30[12] = v31, v31 <= (unsigned int)Length) )
                  {
                    if ( v31 > 0x48 )
                    {
                      if ( (_DWORD)Length != v31 )
                        memset_0((char *)v30 + v31, 255, (unsigned int)Length - v31);
                      if ( (_DWORD)FileHandle )
                        v10 = EtwpWriteBufferCompressed(v59, v30);
                      else
                        v60 += (unsigned int)Length;
                    }
                  }
                  else
                  {
                    ++v4;
                    v10 = -1073741306;
                    v45 = v4;
                  }
                  MmUnmapReservedMapping(v30, 0x4B777445u, v5);
                  if ( v10 < 0 && !(_DWORD)FileHandle )
                  {
                    v6 = MappingAddress;
                    goto LABEL_60;
                  }
                  v21 = (unsigned int)v48;
                  v19 = (_DWORD)FileHandle + 1;
                }
                EtwpWriteRemainingCompressedData(v59, &v51, &v45);
                v32 = 0;
                if ( v21 )
                {
                  v33 = j;
                  v34 = v5 + 1;
                  v35 = v21;
                  do
                  {
                    v36 = v33 + 1;
                    v37 = v32 + 1;
                    v34->Next = (struct _MDL *)(v33 + (v7[v32] & 0xFFFFFFFFFFLL));
                    v34 = (struct _MDL *)((char *)v34 + 8);
                    v38 = v7[v32] >> 40;
                    v39 = v33 + 1;
                    if ( v39 != v38 )
                      v37 = v32;
                    v33 = 0;
                    v32 = v37;
                    if ( v39 != v38 )
                      v33 = v36;
                    --v35;
                  }
                  while ( v35 );
                  LODWORD(Length) = v50;
                }
                Buffer = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v5, MmCached);
                v4 = v45;
                v41 = Buffer;
                Buffer[34] |= 0x4000000u;
                Buffer[11] = 3;
                v49 = v51;
                v27 = Buffer[37] == 4;
                LODWORD(v48) = v51 + 1;
                Buffer[35] = v51 + 1;
                if ( v27 )
                  Buffer[93] += v4;
                else
                  Buffer[95] += v4;
                v10 = ZwWriteFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
                MmUnmapReservedMapping(v41, 0x4B777445u, v5);
                v6 = MappingAddress;
                if ( v10 >= 0 )
                  v49 = (int)v48;
                else
                  LOBYTE(v4) = v4 + 1;
              }
            }
          }
        }
        else
        {
          v10 = -1073741801;
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_60:
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v62 )
  {
    ExFreePoolWithTag(v62, 0);
    v62 = 0LL;
  }
  if ( v3 )
    ZwClose(v3);
  if ( v6 )
    MmFreeMappingAddress(v6, 0x4B777445u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v55, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, *(_DWORD *)(v53 + 4), v49, v4, v10);
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v10;
}
