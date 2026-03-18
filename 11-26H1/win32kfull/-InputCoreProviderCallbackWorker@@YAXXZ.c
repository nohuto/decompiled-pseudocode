/*
 * XREFs of ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1400F77EC
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x140266B68 (W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 *     _lambda_a817e3c7b16d652902ae8ccf3226f9ac_::operator() @ 0x1402A8C98 (_lambda_a817e3c7b16d652902ae8ccf3226f9ac_--operator().c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F790C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x1400F7958 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400F79BC (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?TraceCurrentState@CursorApiRouter@@QEBAXXZ @ 0x1400F7ABC (-TraceCurrentState@CursorApiRouter@@QEBAXXZ.c)
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x140170460 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 */

void __fastcall InputCoreProviderCallbackWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const struct tagPROCESS_HID_TABLE **v13; // rdi
  const struct tagPROCESS_HID_TABLE *i; // rbx
  _BYTE v15[264]; // [rsp+20h] [rbp-108h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69856)
    && !(unsigned int)UserIsDisconnectConnection()
    && *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36336) )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
    UserSessionState = W32GetUserSessionState(v5, v4);
    InputTraceLogging::Cursor::SetCursorSuppression(*(unsigned int *)(UserSessionState + 36372));
    v9 = W32GetUserSessionState(v8, v7);
    CursorApiRouter::TraceCurrentState(*(CursorApiRouter **)(v9 + 36336));
    if ( dword_1403AA9C0 && (qword_1403AA9D0 & 0x40000) != 0 && (qword_1403AA9D8 & 0x40000) == qword_1403AA9D8 )
    {
      EnterCrit(1LL, 0LL);
      v13 = (const struct tagPROCESS_HID_TABLE **)(W32GetUserSessionState(v11, v10) + 224);
      for ( i = *v13; i != (const struct tagPROCESS_HID_TABLE *)v13; i = *(const struct tagPROCESS_HID_TABLE **)i )
        InputTraceLogging::RawInput::RawInputListener(i);
      UserSessionSwitchLeaveCrit(v12);
    }
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  }
}
