/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x140082720
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020EF28 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x140216EDC (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1400828DC (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x14008292C (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  HANDLE v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  char v9; // si
  bool v10; // di
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // [rsp+28h] [rbp-60h]
  _OWORD v16[3]; // [rsp+50h] [rbp-38h] BYREF
  char v17; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  if ( this[363] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v17, 1);
      v18 = 0;
      memset(v16, 0, 32);
      while ( 1 )
      {
        v6 = this[363];
        LOBYTE(v15) = 0;
        v19 = -200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v16, 1LL, &v18, &v19, v15);
        v9 = v7;
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_10;
      }
      v10 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69144),
          2,
          2,
          24,
          (__int64)&WPP_16b0d3e1bc85332a6529a599abe513a5_Traceguids,
          v9);
      }
LABEL_10:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v17, v8);
    }
    v5 = this[364];
    if ( v5 )
    {
      ProtectHandle(v5, v4, 0LL, 0LL);
      ObCloseHandle(this[364], 1);
      this[364] = 0LL;
    }
    ZwClose(this[363]);
    this[363] = 0LL;
  }
}
