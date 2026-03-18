/*
 * XREFs of ImSessionStop @ 0x140240D10
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     ImpRpcDisconnect @ 0x14014A738 (ImpRpcDisconnect.c)
 *     ImpCleanupWork @ 0x14015208C (ImpCleanupWork.c)
 *     ImpWaitForWorkerShutdown @ 0x140155268 (ImpWaitForWorkerShutdown.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

int ImSessionStop()
{
  __int64 InputMonitorSessionState; // rbx
  int v1; // r8d
  int v2; // r8d
  int result; // eax
  int v4; // r8d
  int v5; // [rsp+38h] [rbp-29h] BYREF
  int v6; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v7; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8[2]; // [rsp+48h] [rbp-19h] BYREF
  int *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  int *v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  __int64 *v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]

  if ( KeGetCurrentIrql() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(int *)(InputMonitorSessionState + 4) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)InputMonitorSessionState != (unsigned int)PsGetCurrentProcessSessionId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(InputMonitorSessionState + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_DWORD *)InputMonitorSessionState == MEMORY[0xFFFFF780000002D8] )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (int)ImpWaitForWorkerShutdown() < 0
    && (unsigned int)dword_14029F1A0 > 2
    && tlgKeywordOn((__int64)&dword_14029F1A0, 0x400000000000LL) )
  {
    v6 = *(_DWORD *)InputMonitorSessionState;
    v5 = v1;
    v9 = &v6;
    v10 = 4LL;
    v11 = &v5;
    v12 = 4LL;
    v13 = &v7;
    v7 = 0x1000000LL;
    v14 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284848, 0LL, 0LL, 5u, v8);
  }
  if ( (int)ImpRpcDisconnect() < 0 )
  {
    if ( (unsigned int)dword_14029F1A0 > 2 && tlgKeywordOn((__int64)&dword_14029F1A0, 0x400000000000LL) )
    {
      v5 = *(_DWORD *)InputMonitorSessionState;
      v6 = v2;
      v9 = &v5;
      v10 = 4LL;
      v11 = &v6;
      v12 = 4LL;
      v13 = &v7;
      v7 = 0x1000000LL;
      v14 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_140284739, 0LL, 0LL, 5u, v8);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  result = ImpCleanupWork();
  if ( result < 0 )
  {
    if ( (unsigned int)dword_14029F1A0 > 2 && tlgKeywordOn((__int64)&dword_14029F1A0, 0x400000000000LL) )
    {
      v5 = *(_DWORD *)InputMonitorSessionState;
      v6 = v4;
      v9 = &v5;
      v10 = 4LL;
      v11 = &v6;
      v12 = 4LL;
      v13 = &v7;
      v7 = 0x1000000LL;
      v14 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_1402846F1, 0LL, 0LL, 5u, v8);
    }
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( (unsigned int)dword_14029F1A0 > 5 )
  {
    v5 = *(_DWORD *)InputMonitorSessionState;
    v10 = 4LL;
    v9 = &v5;
    result = tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14029F1A0, byte_1402846CA, 0LL, 0LL, 3u, v8);
  }
  *(_DWORD *)InputMonitorSessionState = -1;
  return result;
}
