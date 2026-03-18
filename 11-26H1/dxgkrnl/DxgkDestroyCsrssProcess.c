/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x140204FC0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RemoveAllAdaptersFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x140203584 (-RemoveAllAdaptersFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1403651C0 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 */

void DxgkDestroyCsrssProcess()
{
  DXGGLOBAL *Global; // rax
  __int64 v1; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v3; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 702;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSessionData != NULL", 702LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *((_QWORD *)SessionData + 2332);
  if ( v3 != PsGetCurrentProcess(v1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 703;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSessionData->GetEProcessCSRSS() == PsGetCurrentProcess()",
      703LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionData);
  DXGSESSIONDATA::RemoveAllAdaptersFromSession(SessionData);
  *((_QWORD *)SessionData + 2333) = 0LL;
}
