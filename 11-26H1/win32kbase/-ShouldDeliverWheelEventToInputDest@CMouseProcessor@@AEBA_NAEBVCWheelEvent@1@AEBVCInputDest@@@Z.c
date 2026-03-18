/*
 * XREFs of ?ShouldDeliverWheelEventToInputDest@CMouseProcessor@@AEBA_NAEBVCWheelEvent@1@AEBVCInputDest@@@Z @ 0x14016444C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     IsShellProcess @ 0x1401630B4 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CMouseProcessor::ShouldDeliverWheelEventToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3)
{
  char v3; // bl
  struct tagTHREADINFO *ThreadInfo; // rax
  CInputDest *v8; // rcx
  struct tagTHREADINFO *v9; // rax

  v3 = 0;
  if ( !*(_DWORD *)a3 )
    return 0;
  if ( *((_DWORD *)a2 + 6) == 2
    || (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, (_DWORD)a3) + 19632) + 8LL) & 2) != 0 )
  {
    return 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 120LL) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5098LL);
  if ( CInputDest::IsCompositionInput(a3) )
    return 1;
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( !ThreadInfo || (*(_BYTE *)(*((_QWORD *)ThreadInfo + 57) + 808LL) & 0x30) != 0 )
  {
    v9 = CInputDest::GetThreadInfo(v8);
    if ( !v9 || !(unsigned int)IsShellProcess(*((_QWORD *)v9 + 57)) )
      return 1;
  }
  return v3;
}
