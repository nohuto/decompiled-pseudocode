/*
 * XREFs of SendMessageToWERService @ 0x1800CDDCC
 * Callers:
 *     RtlReportSilentProcessExit @ 0x180087720 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x180088674 (ReportExceptionInternal.c)
 * Callees:
 *     SignalStartWerSvc @ 0x1800CE024 (SignalStartWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CE0D8 (WerpAllocateAndInitializeSid.c)
 *     WaitForWerSvc @ 0x1800CE1D4 (WaitForWerSvc.c)
 *     WerpFreeSid @ 0x180122620 (WerpFreeSid.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F600 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x18015FE90 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x1801600F0 (ZwAlpcSendWaitReceivePort.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SendMessageToWERService(__int64 a1, __int64 a2)
{
  NTSTATUS started; // ebx
  int v5; // eax
  size_t v6; // rax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rdi
  char v12; // dl
  __int64 *v13; // rsi
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v18; // [rsp+64h] [rbp-9Ch]
  __int64 SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 v22; // [rsp+80h] [rbp-80h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-50h]
  __int128 v27; // [rsp+C0h] [rbp-40h]
  _BYTE v28[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v29; // [rsp+E0h] [rbp-20h]

  Handle = 0LL;
  v23 = 0LL;
  *(_QWORD *)&v27 = 0LL;
  DWORD2(v27) = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset_thunk_772440563353939046(v28, 0, 0x48uLL);
  v21 = 0LL;
  v17 = 0;
  v18 = 1280;
  v22 = 0LL;
  SystemInformation = 0LL;
  started = SignalStartWerSvc();
  if ( started >= 0 )
  {
    started = NtQuerySystemInformation(SystemErrorPortTimeouts, &SystemInformation, 8u, 0LL);
    if ( started >= 0 )
    {
      v5 = WaitForWerSvc((unsigned int)SystemInformation);
      started = v5;
      if ( v5 >= 0 && v5 != 258 )
      {
        *((_QWORD *)&v24 + 1) = L"\\WindowsErrorReportingServicePort";
        v6 = 2 * wcslen(L"\\WindowsErrorReportingServicePort");
        v29 = 1400LL;
        if ( v6 >= 0xFFFE )
          LOWORD(v6) = -4;
        LOWORD(v24) = v6;
        WORD1(v24) = v6 + 2;
        v10 = WerpAllocateAndInitializeSid((unsigned int)&v17, v7, v8, v9);
        v11 = v21;
        started = v10;
        if ( v10 >= 0 )
        {
          v27 = 0LL;
          LODWORD(v25) = 48;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v26) = 0;
          *(_QWORD *)&v26 = 0LL;
          if ( HIDWORD(SystemInformation) == -1 )
          {
            v12 = 1;
          }
          else
          {
            v12 = 0;
            v22 = -10000LL * SHIDWORD(SystemInformation);
          }
          v13 = &v22;
          if ( v12 )
            v13 = 0LL;
          v14 = NtAlpcConnectPort(&Handle, &v24, &v25, v28, 0x20000, v21, 0LL, 0LL, 0LL, 0LL, v13);
          started = v14;
          if ( v14 >= 0 && v14 != 258 )
          {
            v23 = 1400LL;
            v15 = ZwAlpcSendWaitReceivePort(Handle, 0x20000LL, a1, 0LL, a2, &v23, 0LL, v13);
            started = v15;
            if ( v15 >= 0 && v15 != 258 )
            {
              started = 0;
              if ( *(int *)(a2 + 44) < 0 )
                started = *(_DWORD *)(a2 + 44);
            }
          }
        }
        if ( v11 )
          WerpFreeSid(v11);
      }
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)started;
}
