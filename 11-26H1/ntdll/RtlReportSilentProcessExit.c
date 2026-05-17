/*
 * XREFs of RtlReportSilentProcessExit @ 0x180087720
 * Callers:
 *     RtlExitUserProcess @ 0x1800869E0 (RtlExitUserProcess.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 * Callees:
 *     WerpProcessId @ 0x1800887B0 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x180088964 (WerpGlobalFlagsForProcess.c)
 *     SendMessageToWERService @ 0x1800CDDCC (SendMessageToWERService.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportSilentProcessExit(__int64 a1, int a2)
{
  int v5; // ebx
  void *UniqueProcess; // rdi
  void *UniqueThread; // rsi
  int v8; // eax
  int v9; // ebx
  unsigned int NtGlobalFlag; // eax
  int v11; // eax
  HANDLE v12; // rdi
  NTSTATUS v13; // eax
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v15[12]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v16; // [rsp+80h] [rbp-80h]
  _DWORD v17[352]; // [rsp+5D0h] [rbp+4D0h] BYREF

  memset_thunk_772440563353939046(v17, 0, 0x578uLL);
  memset_thunk_772440563353939046(v15, 0, 0x578uLL);
  Handle[0] = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( a1 == -1 && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0LL;
  v5 = ZwDuplicateObject(-1LL, a1, -1LL, Handle, 4096, 0, 0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v8 = WerpProcessId(Handle[0]);
  v9 = v8;
  if ( !(_DWORD)UniqueProcess || !(_DWORD)UniqueThread || !v8 )
    return 3221225485LL;
  if ( (_DWORD)UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(Handle[0]);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    v17[0] = 91751760;
    v17[10] = 805306368;
    v17[12] = (_DWORD)UniqueThread;
    v17[13] = (_DWORD)UniqueProcess;
    v17[14] = v9;
    v17[15] = a2;
    v15[0] = 91751760;
    v11 = SendMessageToWERService(v17, v15);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v12 = v16;
        while ( 1 )
        {
          v13 = NtWaitForSingleObject(v12, 1u, 0LL);
          v5 = v13;
          if ( v13 < 0 || v13 == 258 )
            break;
          if ( v13 != 192 && v13 != 257 )
          {
            v5 = 0;
            break;
          }
        }
        if ( v12 )
          NtClose(v12);
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_13:
  if ( Handle[0] )
    NtClose(Handle[0]);
  return (unsigned int)v5;
}
