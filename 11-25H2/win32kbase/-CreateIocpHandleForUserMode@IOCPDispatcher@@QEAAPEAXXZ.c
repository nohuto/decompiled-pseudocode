/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14020F40C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018D99C (UserActivateMITInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this, __int64 a2)
{
  void **v3; // rdi
  NTSTATUS v4; // eax
  int v5; // edx
  __int64 v6; // rcx
  char v7; // bp
  char v8; // bl
  bool v9; // si
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx

  if ( !IsInputThread((__int64)this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3937);
  if ( !*((_QWORD *)this + 363) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3940);
  v3 = (void **)((char *)this + 2912);
  if ( *((_QWORD *)this + 364) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3942);
  v4 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 363),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 364,
         0,
         0,
         2u);
  v7 = v4;
  if ( v4 >= 0 )
  {
    ProtectHandle(*v3, v5, 0LL, 1);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v6 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v6 & 2) == 0)
      || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v8 = 0;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v6, WPP_GLOBAL_Control);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        2,
        26,
        (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
        v7);
    }
  }
  return *v3;
}
