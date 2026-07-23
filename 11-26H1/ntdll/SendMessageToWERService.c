/*
 * XREFs of SendMessageToWERService @ 0x1800CB53C
 * Callers:
 *     RtlReportSilentProcessExit @ 0x18007EAA0 (RtlReportSilentProcessExit.c)
 *     ReportExceptionInternal @ 0x18007F9F4 (ReportExceptionInternal.c)
 * Callees:
 *     SignalStartWerSvc @ 0x1800CB794 (SignalStartWerSvc.c)
 *     WerpAllocateAndInitializeSid @ 0x1800CB848 (WerpAllocateAndInitializeSid.c)
 *     WaitForWerSvc @ 0x1800CB944 (WaitForWerSvc.c)
 *     WerpFreeSid @ 0x1801223C0 (WerpFreeSid.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtQuerySystemInformation @ 0x18015F500 (NtQuerySystemInformation.c)
 *     NtAlpcConnectPort @ 0x18015FD90 (NtAlpcConnectPort.c)
 *     ZwAlpcSendWaitReceivePort @ 0x18015FFF0 (ZwAlpcSendWaitReceivePort.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall SendMessageToWERService(PPORT_MESSAGE SendMessageA, PPORT_MESSAGE ReceiveMessage)
{
  int started; // ebx
  int v5; // eax
  size_t v6; // rax
  int v7; // eax
  PSID v8; // rdi
  char v9; // dl
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  int Flags; // [rsp+20h] [rbp-E0h]
  int RequiredServerSid; // [rsp+28h] [rbp-D8h]
  int ConnectionMessage; // [rsp+30h] [rbp-D0h]
  int BufferLength; // [rsp+38h] [rbp-C8h]
  int OutMessageAttributes; // [rsp+40h] [rbp-C0h]
  int InMessageAttributes; // [rsp+48h] [rbp-B8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  __int64 SystemInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE PortHandle; // [rsp+70h] [rbp-90h] BYREF
  PSID v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING PortName; // [rsp+90h] [rbp-70h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-30h] BYREF

  PortHandle = 0LL;
  v25 = 0LL;
  PortName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset_thunk_772440563353939046(&PortAttributes, 0, 0x48uLL);
  v23 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v24 = 0LL;
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
        PortName.Buffer = (wchar_t *)L"\\WindowsErrorReportingServicePort";
        v6 = 2 * wcslen(L"\\WindowsErrorReportingServicePort");
        PortAttributes.MaxMessageLength = 1400LL;
        if ( v6 >= 0xFFFE )
          LOWORD(v6) = -4;
        PortName.Length = v6;
        PortName.MaximumLength = v6 + 2;
        v7 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               Flags,
               RequiredServerSid,
               ConnectionMessage,
               BufferLength,
               OutMessageAttributes,
               InMessageAttributes,
               (__int64)&v23);
        v8 = v23;
        started = v7;
        if ( v7 >= 0 )
        {
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          if ( HIDWORD(SystemInformation) == -1 )
          {
            v9 = 1;
          }
          else
          {
            v9 = 0;
            v24 = -10000LL * SHIDWORD(SystemInformation);
          }
          Timeout = (LARGE_INTEGER *)&v24;
          if ( v9 )
            Timeout = 0LL;
          v11 = NtAlpcConnectPort(
                  &PortHandle,
                  &PortName,
                  &ObjectAttributes,
                  &PortAttributes,
                  0x20000u,
                  v23,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  Timeout);
          started = v11;
          if ( v11 >= 0 && v11 != 258 )
          {
            v25 = 1400LL;
            v12 = ZwAlpcSendWaitReceivePort(PortHandle, 0x20000u, SendMessageA, 0LL, ReceiveMessage, &v25, 0LL, Timeout);
            started = v12;
            if ( v12 >= 0 && v12 != 258 )
            {
              started = 0;
              if ( (ReceiveMessage[1].u2.ZeroInit & 0x80000000) != 0 )
                started = ReceiveMessage[1].u2.ZeroInit;
            }
          }
        }
        if ( v8 )
          WerpFreeSid(v8);
      }
    }
  }
  if ( PortHandle )
    NtClose(PortHandle);
  return (unsigned int)started;
}
