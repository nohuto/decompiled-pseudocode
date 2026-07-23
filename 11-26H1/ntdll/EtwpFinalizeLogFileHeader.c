/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180067224
 * Callers:
 *     EtwpLogger @ 0x180066820 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x180158DAC (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     RtlGetSystemTimePrecise @ 0x18005CC80 (RtlGetSystemTimePrecise.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180067588 (EtwpAddReloggedHeaderExtensionEvents.c)
 *     EtwpAddProviderTrackingInfo @ 0x180067658 (EtwpAddProviderTrackingInfo.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800676E4 (EtwpWriteRemainingCompressedData.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1800677B0 (EtwpFinalizeRelogFileHeaderStats.c)
 *     NtReadFile @ 0x18015EF00 (NtReadFile.c)
 *     NtWriteFile @ 0x18015EF40 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x18015F320 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18015F760 (ZwQueryVolumeInformationFile.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  int v5; // r12d
  int v6; // r13d
  ULONG Length; // r15d
  LARGE_INTEGER *Buffer; // r14
  int v9; // esi
  int v10; // eax
  NTSTATUS v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned __int64 v14; // rdx
  int v17; // [rsp+5Ch] [rbp-25h] BYREF
  unsigned __int64 FileInformation; // [rsp+60h] [rbp-21h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+68h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v21; // [rsp+80h] [rbp-1h] BYREF
  __int128 FsInformation; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  v2 = 0;
  ByteOffset.QuadPart = 0LL;
  v3 = (*(_DWORD *)(a1 + 308) & 0x4000000) == 0;
  v23 = 0LL;
  v17 = 0;
  IoStatusBlock = 0LL;
  v5 = 0;
  v6 = 0;
  FsInformation = 0LL;
  LODWORD(FileInformation) = 0;
  if ( !v3 )
  {
    v9 = EtwpWriteRemainingCompressedData(a1, &v17, &FileInformation);
    if ( v9 < 0 )
      goto LABEL_20;
    v5 = v17;
    *(_DWORD *)(a1 + 376) += v17;
    v6 = FileInformation;
    *(_DWORD *)(a1 + 372) += FileInformation;
  }
  if ( *(_QWORD *)(a1 + 448) != a1 + 448
    || *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 504)
    || (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
  {
    Length = *(_DWORD *)(a1 + 192);
    goto LABEL_4;
  }
  v9 = ZwQueryVolumeInformationFile(*(HANDLE *)(a1 + 128), &IoStatusBlock, &FsInformation, 0x18u, FileFsSizeInformation);
  if ( v9 >= 0 )
  {
    Length = -HIDWORD(v23) & (HIDWORD(v23) + 7);
LABEL_4:
    Buffer = (LARGE_INTEGER *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v9 = -1073741801;
      return RtlNtStatusToDosError(v9);
    }
    v9 = NtReadFile(*(HANDLE *)(a1 + 128), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v9 < 0 )
      goto LABEL_19;
    if ( Length >= Buffer->LowPart )
      Length = Buffer->LowPart;
    if ( !a2 )
    {
      Buffer[14].HighPart = *(_DWORD *)(a1 + 188);
      Buffer[17].HighPart = *(_DWORD *)(a1 + 376);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 368);
      Buffer[47].HighPart += *(_DWORD *)(a1 + 372);
      v10 = *(_DWORD *)(a1 + 308);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, Length, v5, v6);
      }
      else
      {
        Buffer[15] = RtlGetSystemTimePrecise();
      }
    }
    Buffer[6].LowPart = Buffer->HighPart;
    EtwpAddReloggedHeaderExtensionEvents(a1, Buffer, Length);
    EtwpAddProviderTrackingInfo(a1, Buffer, Length);
    v11 = NtWriteFile(*(HANDLE *)(a1 + 128), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v9 = v11;
    if ( a2 )
      goto LABEL_19;
    if ( v11 < 0 )
      goto LABEL_19;
    v12 = *(_DWORD *)(a1 + 308);
    v13 = v12 & 0x4000000;
    if ( (v12 & 0x20) == 0 && !v13 )
      goto LABEL_19;
    v21 = 0LL;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 344);
    }
    else
    {
      v14 = *(unsigned int *)(a1 + 192) * (unsigned __int64)*(unsigned int *)(a1 + 376);
      if ( v14 >= *(unsigned int *)(a1 + 304) * ((-(__int64)((v12 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
      {
LABEL_19:
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Buffer);
        goto LABEL_20;
      }
    }
    FileInformation = v14;
    if ( v14 )
      v9 = ZwSetInformationFile(*(HANDLE *)(a1 + 128), &v21, &FileInformation, 8u, FileEndOfFileInformation);
    goto LABEL_19;
  }
LABEL_20:
  if ( v9 )
    return RtlNtStatusToDosError(v9);
  return v2;
}
