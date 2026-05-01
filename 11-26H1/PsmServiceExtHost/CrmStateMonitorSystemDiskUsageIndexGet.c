/*
 * XREFs of CrmStateMonitorSystemDiskUsageIndexGet @ 0x180077098
 * Callers:
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180077288 (CrmStateMonitorSystemDiskUsageStart.c)
 * Callees:
 *     StringCbPrintfW @ 0x18002064C (StringCbPrintfW.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180043410 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall CrmStateMonitorSystemDiskUsageIndexGet(_DWORD *a1)
{
  unsigned __int16 *NtSystemRoot; // rax
  HANDLE FileW; // rdi
  DWORD LastError; // ebx
  signed int v5; // eax
  DWORD OutBuffer; // [rsp+48h] [rbp-C0h] BYREF
  DWORD OutBuffer_4; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 OutBuffer_8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A8h]
  int v11; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+78h] [rbp-90h] BYREF
  UUID *v13; // [rsp+98h] [rbp-70h]
  __int64 v14; // [rsp+A0h] [rbp-68h]
  DWORD *p_OutBuffer_4; // [rsp+A8h] [rbp-60h]
  __int64 v16; // [rsp+B0h] [rbp-58h]
  wchar_t pszDest[264]; // [rsp+B8h] [rbp-50h] BYREF

  OutBuffer_8 = 0LL;
  v10 = 0LL;
  v11 = 0;
  OutBuffer = 0;
  NtSystemRoot = (unsigned __int16 *)RtlGetNtSystemRoot();
  StringCbPrintfW(pszDest, 0x208uLL, L"\\\\.\\%wc:", *NtSystemRoot);
  FileW = CreateFileW(pszDest, 0x100080u, 7u, 0LL, 3u, 0x80u, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_9;
    }
    LOWORD(v5) = GetLastError();
LABEL_8:
    LastError = (unsigned __int16)v5 | 0xC0070000;
    goto LABEL_9;
  }
  if ( DeviceIoControl(FileW, 0x560000u, 0LL, 0, &OutBuffer_8, 0x20u, &OutBuffer, 0LL)
    || (v5 = GetLastError(), LastError = v5, v5 == 234) )
  {
    LastError = 0;
    *a1 = DWORD2(OutBuffer_8);
LABEL_15:
    CloseHandle(FileW);
    return LastError;
  }
  if ( v5 > 0 )
    goto LABEL_8;
LABEL_9:
  if ( (LastError & 0x80000000) != 0 && (unsigned int)dword_1800E12E8 > 5 )
  {
    v14 = 16LL;
    v16 = 4LL;
    v13 = &Uuid;
    OutBuffer_4 = LastError;
    p_OutBuffer_4 = &OutBuffer_4;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1800E12E8, byte_1800CC897, 0LL, 0LL, 4u, &v12);
  }
  if ( FileW != (HANDLE)-1LL )
    goto LABEL_15;
  return LastError;
}
