/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1400E9D80
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x140218448 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     UninitializeInputSensorsOnSharedThread @ 0x14021C3F4 (UninitializeInputSensorsOnSharedThread.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1400E9F44 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ?CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1400E9FEC (-CleanupThreadDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ProtectHandle @ 0x140133808 (ProtectHandle.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  HANDLE v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // si
  bool v11; // di
  bool v12; // bp
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // [rsp+28h] [rbp-60h]
  _OWORD v17[3]; // [rsp+50h] [rbp-38h] BYREF
  char v18; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+20h] BYREF

  if ( this[363] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    IOCPDispatcher::CleanupThreadDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v18, 1);
      v19 = 0;
      memset(v17, 0, 32);
      while ( 1 )
      {
        v6 = this[363];
        LOBYTE(v16) = 0;
        v20 = -200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v17, 1LL, &v19, &v20, v16);
        v10 = v7;
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_10;
      }
      v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v8, v9);
        LOBYTE(v14) = v12;
        LOBYTE(v15) = v11;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v15,
          v14,
          *(_QWORD *)(UserSessionState + 69136),
          2,
          2,
          25,
          (__int64)&WPP_a07c44b8f26832a02b5dbe6dbb74dde0_Traceguids,
          v10);
      }
LABEL_10:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v18);
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
