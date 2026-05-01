/*
 * XREFs of ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180315F0C
 * Callers:
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18067CC14 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180111364 (-GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall Common::GetProcessWorkingDirectoryByPID(DWORD dwProcessId, char a2, char *a3, unsigned __int16 *a4)
{
  HANDLE v8; // rdi
  signed int LastError; // eax
  int v10; // ebx
  NTSTATUS InformationProcess; // ebx
  signed int v13; // eax
  signed int v14; // eax
  SIZE_T v15; // r9
  signed int v16; // eax
  _OWORD ProcessInformation[3]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v18[56]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v19; // [rsp+A8h] [rbp-58h]
  LPCVOID v20; // [rsp+B0h] [rbp-50h]
  _BYTE Buffer[32]; // [rsp+4C0h] [rbp+3C0h] BYREF
  LPCVOID lpBaseAddress; // [rsp+4E0h] [rbp+3E0h]

  memset_0(Buffer, 0, 0x7D0uLL);
  memset_0(v18, 0, 0x448uLL);
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  if ( a3 && a4 )
  {
    *(_WORD *)a3 = 0;
    v8 = OpenProcess(0x1010u, 0, dwProcessId);
    if ( v8 )
      goto LABEL_10;
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError == 5 )
    {
      if ( a2 )
        return Common::GetProcessImageInfoByPID(dwProcessId, 0LL, 0LL, a3, a4);
    }
    else if ( LastError <= 0 )
    {
      goto LABEL_9;
    }
    v10 = (unsigned __int16)LastError | 0x80070000;
LABEL_9:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_10:
    InformationProcess = NtQueryInformationProcess(v8, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL);
    if ( InformationProcess < 0 )
    {
      v10 = InformationProcess | 0x10000000;
      if ( v10 < 0 )
        goto LABEL_30;
    }
    if ( !ReadProcessMemory(v8, *((LPCVOID *)&ProcessInformation[0] + 1), Buffer, 0x7D0uLL, 0LL) )
    {
      v13 = GetLastError();
      v10 = v13;
      if ( v13 > 0 )
        v10 = (unsigned __int16)v13 | 0x80070000;
      if ( v10 < 0 )
        goto LABEL_30;
    }
    if ( ReadProcessMemory(v8, lpBaseAddress, v18, 0x448uLL, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      v14 = GetLastError();
      v10 = v14;
      if ( v14 > 0 )
        v10 = (unsigned __int16)v14 | 0x80070000;
      if ( v10 < 0 )
        goto LABEL_30;
    }
    if ( v20 )
    {
      v15 = 2LL * *(unsigned int *)a4;
      if ( v19 < v15 )
      {
        if ( ReadProcessMemory(v8, v20, a3, v15, 0LL) )
        {
          v10 = 0;
        }
        else
        {
          v16 = GetLastError();
          v10 = v16;
          if ( v16 > 0 )
            v10 = (unsigned __int16)v16 | 0x80070000;
        }
      }
      else
      {
        v10 = -2147024774;
      }
      *(_DWORD *)a4 = (v19 >> 1) + 1;
    }
LABEL_30:
    if ( v8 )
      CloseHandle(v8);
    return (unsigned int)v10;
  }
  return 2147500035LL;
}
