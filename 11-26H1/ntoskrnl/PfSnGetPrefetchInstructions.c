/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x140987060
 * Callers:
 *     PfSnBeginScenario @ 0x1409D16A0 (PfSnBeginScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     SmDecompressBuffer @ 0x140463934 (SmDecompressBuffer.c)
 *     PfLockSharedAcquire @ 0x1404ABEA0 (PfLockSharedAcquire.c)
 *     PfLockSharedRelease @ 0x1404AE4B4 (PfLockSharedRelease.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtReadFile @ 0x1409293A0 (NtReadFile.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     PfVerifyScenarioBuffer @ 0x140987380 (PfVerifyScenarioBuffer.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, __int64 a2, UCHAR **a3, struct _KLOCK_ENTRIES *a4)
{
  UCHAR *v5; // rdi
  void *v6; // r14
  int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // ebx
  wchar_t *Pool2; // r15
  int v12; // ebx
  ULONG Length; // esi
  void *Buffer; // rax
  int v15; // eax
  SIZE_T v17; // [rsp+50h] [rbp-B0h]
  unsigned int v18; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  int v20; // [rsp+90h] [rbp-70h] BYREF
  int v21; // [rsp+94h] [rbp-6Ch] BYREF
  UCHAR *v22; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  int v24[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h]
  __int128 v26; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v29)(_QWORD); // [rsp+F8h] [rbp-8h]
  __int128 FileInformation; // [rsp+100h] [rbp+0h] BYREF
  __int64 v31; // [rsp+110h] [rbp+10h]

  v18 = 0;
  *(_QWORD *)&v26 = 0LL;
  DWORD2(v26) = 0;
  v31 = 0LL;
  DestinationString = 0LL;
  v21 = 0;
  v5 = 0LL;
  *(_OWORD *)v24 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v8 = a2;
  FileInformation = 0LL;
  PfLockSharedAcquire((volatile signed __int64 *)&stru_140E66D40.ForegroundLossTime, a2, (__int64)a3, a4);
  v9 = -1LL;
  do
    ++v9;
  while ( *((_WORD *)&stru_140E66D40.ThreadFlags2 + v9) );
  v10 = 2 * v9 + 102;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    RtlStringCbPrintfW(Pool2, v10, L"%s\\%ws-%08X.%ws", &stru_140E66D40.512, a1, *(_DWORD *)(a1 + 60), L"pf");
    PfLockSharedRelease((struct _KTHREAD *)&stru_140E66D40.ForegroundLossTime);
    RtlInitUnicodeString(&DestinationString, Pool2);
    v24[0] = 48;
    *(_QWORD *)&v25 = &DestinationString;
    *(_QWORD *)&v24[2] = 0LL;
    DWORD2(v25) = 576;
    LODWORD(v17) = 0;
    v26 = 0LL;
    v12 = IopCreateFile(
            &FileHandle,
            -2146435072,
            (__int64)v24,
            (unsigned int *)&IoStatusBlock,
            0LL,
            0,
            0,
            1u,
            32,
            0LL,
            v17,
            0,
            0LL,
            0,
            32,
            0LL);
    if ( v12 >= 0 )
    {
      v12 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        Length = DWORD2(FileInformation);
        v20 = 0x10000000;
        if ( DWORD2(FileInformation) > 0x10000000 || !DWORD2(FileInformation) || HIDWORD(FileInformation) )
        {
LABEL_25:
          v12 = -1073741823;
          goto LABEL_14;
        }
        Buffer = (void *)ExAllocatePool2(0x100uLL);
        v6 = Buffer;
        if ( Buffer )
        {
          v12 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
          if ( v12 >= 0 )
          {
            v28 = PfSnScenarioAlloc;
            v29 = PspUserApcKernelRoutine;
            v15 = SmDecompressBuffer((__int64)v6, Length, &v22, &v18, &v20);
            v5 = v22;
            v12 = v15;
            if ( v15 >= 0 )
            {
              if ( !(unsigned __int8)PfVerifyScenarioBuffer(v22, v18, &v21) )
              {
                v12 = -1073741701;
                goto LABEL_14;
              }
              if ( *((_DWORD *)v5 + 20) == v8 )
              {
                *a3 = v5;
                v12 = 0;
                v5 = 0LL;
                goto LABEL_14;
              }
              goto LABEL_25;
            }
          }
        }
        else
        {
          v12 = -1073741670;
        }
      }
    }
  }
  else
  {
    v12 = -1073741670;
    PfLockSharedRelease((struct _KTHREAD *)&stru_140E66D40.ForegroundLossTime);
  }
LABEL_14:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v12;
}
