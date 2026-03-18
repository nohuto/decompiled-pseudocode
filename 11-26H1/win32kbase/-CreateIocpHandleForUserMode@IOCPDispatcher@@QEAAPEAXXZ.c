/*
 * XREFs of ?CreateIocpHandleForUserMode@IOCPDispatcher@@QEAAPEAXXZ @ 0x14013365C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1401101FC (UserActivateMITInputProcessing.c)
 * Callees:
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void *__fastcall IOCPDispatcher::CreateIocpHandleForUserMode(IOCPDispatcher *this, int a2, int a3)
{
  _QWORD *v4; // rdi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // r9
  char v10; // bp
  char v12; // bl
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx

  if ( !IsInputThread((int)this, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3862LL);
  if ( !*((_QWORD *)this + 363) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3865LL);
  v4 = (_QWORD *)((char *)this + 2912);
  if ( *((_QWORD *)this + 364) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3867LL);
  v5 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 363),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 364,
         0,
         0,
         2u);
  v10 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (v7 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v7 & 2) == 0)
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v7, (_DWORD)WPP_GLOBAL_Control, v8);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        2,
        27,
        (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
        v10);
    }
  }
  else
  {
    LOBYTE(v9) = 1;
    ProtectHandle(*v4, v6, 0LL, v9);
  }
  return (void *)*v4;
}
