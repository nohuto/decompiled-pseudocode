/*
 * XREFs of ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B77F0
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___ @ 0x1401B71D0 (W32AttachToProcessAndExecute__lambda_3e0ebc1fc332c6042372d4f23ce10571___.c)
 *     _lambda_518f380661a472ef256f22ac48aef260_::operator() @ 0x1401B755C (_lambda_518f380661a472ef256f22ac48aef260_--operator().c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z @ 0x140066784 (-SetAppClip@Mouse@InputTraceLogging@@SAXAEBUtagRECT@@@Z.c)
 *     UserIsDisconnectConnection @ 0x14006BBA0 (UserIsDisconnectConnection.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     RIMSyncWalkRimObjList @ 0x14011F9AC (RIMSyncWalkRimObjList.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012F720 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1401A0000 (-SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z.c)
 *     ?Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z @ 0x1401B4B40 (-Settings@PTP@InputTraceLogging@@SAXAEBUtagTOUCHPAD_PARAMETERS_V3@@@Z.c)
 *     ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1401B790C (-SessionInfo@Win32k@InputTraceLogging@@SAXXZ.c)
 *     TraceRawMouseThrottlingThresholds @ 0x140216E3C (TraceRawMouseThrottlingThresholds.c)
 *     ?ButtonState@Mouse@InputTraceLogging@@SAXK@Z @ 0x14021F7CC (-ButtonState@Mouse@InputTraceLogging@@SAXK@Z.c)
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
  __int64 UserSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 MouseProcessor; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _BYTE v24[264]; // [rsp+20h] [rbp-108h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 69864) && !UserIsDisconnectConnection(v3, v2) )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v24);
    InputTraceLogging::Win32k::SessionInfo();
    InputConfig::TraceCurrentConfig(v5, v4);
    if ( *(_QWORD *)(W32GetUserSessionState(v7, v6) + 36240) )
    {
      UserSessionState = W32GetUserSessionState(v9, v8);
      InputTraceLogging::Mouse::SetAppClip(
        (const struct tagRECT *)(*(_QWORD *)(UserSessionState + 36240) + 16LL),
        v11,
        v12,
        v13);
      v16 = *(_QWORD *)(W32GetUserSessionState(v15, v14) + 36240);
      v17 = *(_DWORD *)(v16 + 264);
      v19 = W32GetUserSessionState(v16, v18);
      InputTraceLogging::Mouse::SetShellClip(*(struct tagRECT **)(*(_QWORD *)(v19 + 36240) + 256LL), v17);
    }
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v9, v8);
    if ( MouseProcessor )
      InputTraceLogging::Mouse::ButtonState(*(_DWORD *)(MouseProcessor + 3772));
    TraceRawMouseThrottlingThresholds();
    v23 = W32GetUserSessionState(v22, v21);
    InputTraceLogging::PTP::Settings((const struct tagTOUCHPAD_PARAMETERS_V3 *)(v23 + 16768));
    if ( InputTraceLogging::Enabled(256, 0) )
      RIMSyncWalkRimObjList(
        1LL,
        0LL,
        (void (__fastcall *)(void *, __int64))lambda_c51e6e2186cc259f124bbf87b89b0c07_::_lambda_invoker_cdecl_);
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v24);
  }
}
