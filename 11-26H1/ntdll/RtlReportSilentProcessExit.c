/*
 * XREFs of RtlReportSilentProcessExit @ 0x18007EAA0
 * Callers:
 *     RtlExitUserProcess @ 0x18007DD80 (RtlExitUserProcess.c)
 *     LdrpFatalExceptionFilter @ 0x18015B5A0 (LdrpFatalExceptionFilter.c)
 * Callees:
 *     WerpProcessId @ 0x18007FB30 (WerpProcessId.c)
 *     WerpGlobalFlagsForProcess @ 0x18007FCE4 (WerpGlobalFlagsForProcess.c)
 *     SendMessageToWERService @ 0x1800CB53C (SendMessageToWERService.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlReportSilentProcessExit(HANDLE ProcessHandle, NTSTATUS ExitStatus)
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
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  _PORT_MESSAGE ReceiveMessage; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h]
  _PORT_MESSAGE SendMessageA; // [rsp+5D0h] [rbp+4D0h] BYREF
  int v18; // [rsp+5F8h] [rbp+4F8h]
  int v19; // [rsp+600h] [rbp+500h]
  int v20; // [rsp+604h] [rbp+504h]
  int v21; // [rsp+608h] [rbp+508h]
  NTSTATUS v22; // [rsp+60Ch] [rbp+50Ch]

  memset_thunk_772440563353939046(&SendMessageA, 0, 0x578uLL);
  memset_thunk_772440563353939046(&ReceiveMessage, 0, 0x578uLL);
  TargetHandle = 0LL;
  if ( !ProcessHandle )
    return -1073741811;
  if ( ProcessHandle == (HANDLE)-1LL && (NtCurrentPeb()->NtGlobalFlag & 0x200) == 0 )
    return 0;
  v5 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0x1000u,
         0,
         0);
  if ( v5 < 0 )
    goto LABEL_13;
  UniqueProcess = NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  v8 = WerpProcessId(TargetHandle);
  v9 = v8;
  if ( !(_DWORD)UniqueProcess || !(_DWORD)UniqueThread || !v8 )
    return -1073741811;
  if ( (_DWORD)UniqueProcess == v8 )
    NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  else
    LOWORD(NtGlobalFlag) = WerpGlobalFlagsForProcess(TargetHandle);
  if ( (NtGlobalFlag & 0x200) != 0 )
  {
    SendMessageA.u1.Length = 91751760;
    v18 = 805306368;
    v19 = (int)UniqueThread;
    v20 = (int)UniqueProcess;
    v21 = v9;
    v22 = ExitStatus;
    ReceiveMessage.u1.Length = 91751760;
    v11 = SendMessageToWERService(&SendMessageA, &ReceiveMessage);
    if ( v11 >= 0 )
    {
      if ( v11 == 258 )
      {
        v5 = -1073741248;
      }
      else
      {
        v12 = Handle;
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
  if ( TargetHandle )
    NtClose(TargetHandle);
  return v5;
}
