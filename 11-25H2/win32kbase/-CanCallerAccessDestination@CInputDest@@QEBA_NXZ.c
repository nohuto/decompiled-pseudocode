/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1401F6F4C
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1400B9D78 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  struct tagWND *UserWindow; // rbx
  struct tagTHREADINFO *v4; // rax

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1114);
  UserWindow = CInputDest::GetUserWindow(this);
  if ( !UserWindow )
    return 1;
  v4 = PtiCurrent();
  return UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(*((_QWORD *)v4 + 58) + 864LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)UserWindow + 2) + 464LL) + 864LL),
           0LL);
}
