/*
 * XREFs of EtwpFinalizeHeader @ 0x140ABCAB0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x140A16128 (EtwpCreateLogFile.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     EtwpAddLastDroppedEvent @ 0x140482284 (EtwpAddLastDroppedEvent.c)
 *     EtwpQueryUsedProcessorCount @ 0x140482564 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1407288E0 (ZwQueryVolumeInformationFile.c)
 *     EtwpIsWow64Logger @ 0x140A12520 (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x140ABCE74 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddDebugInfoEvents @ 0x140ABD02C (EtwpAddDebugInfoEvents.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, char a2)
{
  _QWORD *v2; // r13
  char v4; // r12
  NTSTATUS result; // eax
  ULONG Length; // r15d
  ULONG v7; // esi
  __int64 Buffer; // rdi
  void *v9; // rcx
  NTSTATUS v10; // r14d
  LARGE_INTEGER v11; // rax
  bool v12; // zf
  int v13; // eax
  unsigned int v14; // r15d
  ULONG v15; // eax
  NTSTATUS v16; // eax
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  ULONG v20; // ecx
  void *v21; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  int v24; // [rsp+68h] [rbp-19h]
  unsigned __int64 FileInformation; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK v27; // [rsp+88h] [rbp+7h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp+17h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+27h]

  v29 = 0LL;
  v2 = (_QWORD *)(a1 + 96);
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( (_QWORD *)*v2 != v2
    || *(_QWORD *)(a1 + 1304) != a1 + 1304
    || *(_DWORD *)(a1 + 120)
    || (v4 = 0, *(_QWORD *)(a1 + 1568)) )
  {
    v4 = 1;
  }
  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 800),
             &IoStatusBlock,
             &FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v24 = HIDWORD(v29);
    Length = ~(HIDWORD(v29) - 1) & (HIDWORD(v29) + 383);
    LODWORD(FileInformation) = ~(HIDWORD(v29) - 1);
    v7 = Length;
    if ( v4 )
      v7 = *(_DWORD *)(a1 + 4);
    Buffer = ExAllocatePool2(0x100uLL);
    if ( !Buffer )
      return -1073741801;
    v9 = *(void **)(a1 + 800);
    ByteOffset.QuadPart = 0LL;
    v10 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, &ByteOffset, 0LL);
    if ( v10 < 0 )
      goto LABEL_25;
    v11.QuadPart = Length;
    ByteOffset.QuadPart = Length;
    if ( !a2 )
    {
      *(_DWORD *)(Buffer + 140) = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(Buffer + 116) = EtwpQueryUsedProcessorCount(a1);
      *(_DWORD *)(Buffer + 152) += *(_DWORD *)(a1 + 240);
      KeQuerySystemTimePrecise((_QWORD *)(Buffer + 120));
      v12 = !EtwpIsWow64Logger(a1);
      v13 = *(_DWORD *)(a1 + 252);
      if ( v12 )
        *(_DWORD *)(Buffer + 380) += v13;
      else
        *(_DWORD *)(Buffer + 372) += v13;
      *(_DWORD *)(Buffer + 112) = (unsigned __int16)NtBuildNumber;
      v11 = ByteOffset;
    }
    v14 = *(_DWORD *)(Buffer + 4);
    if ( v14 > v11.LowPart )
    {
      if ( !v4 )
      {
LABEL_22:
        ByteOffset.QuadPart = 0LL;
        v15 = *(_DWORD *)(Buffer + 48);
        if ( v15 >= v7 )
          v15 = v7;
        v16 = ZwWriteFile(
                *(HANDLE *)(a1 + 800),
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                (PVOID)Buffer,
                FileInformation & (v15 + v24 - 1),
                &ByteOffset,
                0LL);
        v10 = v16;
        if ( !a2 && v16 >= 0 )
        {
          v17 = *(_DWORD *)(a1 + 12);
          if ( (v17 & 0x20) != 0 )
          {
            v18 = *(unsigned int *)(a1 + 292)
                * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
            v27 = 0LL;
            if ( (v17 & 0x4000000) != 0 && (v17 & 1) != 0 )
              v19 = *(_QWORD *)(a1 + 216);
            else
              v19 = *(unsigned int *)(a1 + 4) * (unsigned __int64)*(unsigned int *)(a1 + 248);
            if ( v19 < v18 )
            {
              v21 = *(void **)(a1 + 800);
              FileInformation = v19;
              v10 = ZwSetInformationFile(v21, &v27, &FileInformation, 8u, FileEndOfFileInformation);
            }
          }
        }
LABEL_25:
        ExFreePoolWithTag((PVOID)Buffer, 0);
        return v10;
      }
      v20 = *(_DWORD *)(Buffer + 4);
      if ( v14 >= v7 )
        v20 = v7;
      v10 = ZwReadFile(
              *(HANDLE *)(a1 + 800),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              (PVOID)(Buffer + v11.QuadPart),
              FileInformation & (v20 - v11.LowPart + v24 - 1),
              &ByteOffset,
              0LL);
      if ( v10 < 0 )
        goto LABEL_25;
    }
    if ( v4 && v14 < v7 && v14 >= 0x178 )
    {
      *(_DWORD *)(Buffer + 48) = v14;
      if ( *(_QWORD *)(a1 + 1568) )
        EtwpAddLastDroppedEvent(a1, Buffer);
      if ( (_QWORD *)*v2 != v2 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, Buffer, v7, Buffer + 88, 3);
      if ( *(_QWORD *)(a1 + 1304) != a1 + 1304 )
        EtwpAddBinaryInfoEvents(a1, Buffer, v7, 2LL);
    }
    goto LABEL_22;
  }
  return result;
}
