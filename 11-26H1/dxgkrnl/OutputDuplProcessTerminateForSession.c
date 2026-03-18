/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1402E7184
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402C6C90 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1402E6BD0 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void OutputDuplProcessTerminateForSession()
{
  DXGGLOBAL *Global; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v5; // rcx
  OUTPUTDUPL_SESSION_MGR *v6; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v8; // rax
  const wchar_t *v9; // r9

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global, v1, v2, v3);
  if ( SessionData )
  {
    v6 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)SessionData + 1);
    if ( v6 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
      OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v6, CurrentProcess);
      return;
    }
    WdLogSingleEntry0(2LL);
    v8 = 3134LL;
    v9 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v8 = 3127LL;
    v9 = L"DXGSESSIONDATA is NULL";
  }
  WdLogGlobalForLineNumber = v8;
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
}
