/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x140222284
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400B9B64 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     IsShellProcess @ 0x140129D90 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v8; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 2 || (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(this, a2) + 19600) + 8LL) & 2) != 0 )
    return 1;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5087);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_BYTE *)(*((_QWORD *)ThreadInfo + 58) + 808LL) & 0x30) != 0 )
  {
    v8 = CInputDest::GetThreadInfo(a3);
    if ( !v8 || !(unsigned int)IsShellProcess(*((_QWORD *)v8 + 58)) )
      return 1;
  }
  return v3;
}
