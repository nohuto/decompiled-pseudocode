/*
 * XREFs of ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x14006D708
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14006CD74 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CInputDest::CanCallerAccessDestination(CInputDest *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct tagWND *UserWindow; // rbx
  struct tagTHREADINFO *v5; // rax
  bool v6; // r9

  if ( !*(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1114LL);
  UserWindow = CInputDest::GetUserWindow(this);
  if ( !UserWindow )
    return 1;
  v5 = PtiCurrent(v3, v2);
  return UIPrivilegeIsolation::CheckAccessEx(
           (UIPrivilegeIsolation *)(*((_QWORD *)v5 + 57) + 864LL),
           (const struct tagUIPI_INFO *)(*(_QWORD *)(*((_QWORD *)UserWindow + 2) + 456LL) + 864LL),
           0LL,
           v6);
}
