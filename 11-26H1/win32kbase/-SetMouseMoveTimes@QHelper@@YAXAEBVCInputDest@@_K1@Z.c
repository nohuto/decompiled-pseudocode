/*
 * XREFs of ?SetMouseMoveTimes@QHelper@@YAXAEBVCInputDest@@_K1@Z @ 0x14006CC74
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14009C278 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMoveTimes(QHelper *this, const struct CInputDest *a2, __int64 a3)
{
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v7; // rax
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rax

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 485LL);
  if ( *(_DWORD *)this )
  {
    ThreadInfo = CInputDest::GetThreadInfo(this);
    if ( ThreadInfo )
    {
      v7 = *((_QWORD *)ThreadInfo + 58);
      if ( v7 )
        *(_QWORD *)(v7 + 208) = a2;
    }
  }
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 499LL);
  if ( *(_DWORD *)this )
  {
    v8 = CInputDest::GetThreadInfo(this);
    if ( v8 )
    {
      v9 = *((_QWORD *)v8 + 58);
      if ( v9 )
        *(_QWORD *)(v9 + 216) = a3;
    }
  }
}
