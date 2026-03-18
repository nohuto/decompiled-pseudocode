/*
 * XREFs of ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___ @ 0x14028D334 (W32AttachToProcessAndExecute__lambda_a70196c1be52c1f14bc2c501e0d73881___.c)
 *     _lambda_db335634cca102d801ed3f8d4f73e9a4_::operator() @ 0x14028D430 (_lambda_db335634cca102d801ed3f8d4f73e9a4_--operator().c)
 * Callees:
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x14011E084 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     IsRemoteConnection @ 0x1401590F0 (IsRemoteConnection.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14021B760 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z @ 0x140221338 (-ChangeCursorApiMode@Api@Cursor@InputTraceLogging@@SAX_NW4CursorApi@123@1000@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14023E998 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z @ 0x14026F218 (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@@Z.c)
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DC73C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 */

void __fastcall InputCoreProviderCallbackWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const struct tagPROCESS_HID_TABLE **v18; // rdi
  const struct tagPROCESS_HID_TABLE *i; // rbx
  _BYTE v20[256]; // [rsp+30h] [rbp-108h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69864)
    && !(unsigned int)UserIsDisconnectConnection(v3, v2)
    && *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36304) )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
    W32GetUserSessionState(v7, v6);
    InputTraceLogging::Cursor::SetCursorSuppression();
    v10 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 36304);
    IsInputProcessingActivated();
    IsRemoteConnection(v12, v11);
    W32GetUserSessionState(v14, v13);
    InputTraceLogging::Cursor::Api::ChangeCursorApiMode(0);
    InputTraceLogging::Cursor::Api::SetCursorSynchronizationMode(*(_BYTE *)(v10 + 14));
    if ( InputTraceLogging::Enabled(0x40000, 0) )
    {
      EnterCrit(1LL, 0LL);
      v18 = (const struct tagPROCESS_HID_TABLE **)(W32GetUserSessionState(v16, v15) + 224);
      for ( i = *v18; i != (const struct tagPROCESS_HID_TABLE *)v18; i = *(const struct tagPROCESS_HID_TABLE **)i )
        InputTraceLogging::RawInput::RawInputListener(i);
      UserSessionSwitchLeaveCrit(v17);
    }
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v20);
  }
}
