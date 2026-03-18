/*
 * XREFs of ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x140272EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140220910 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140272CCC (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall CDispBrokerRotationMgr::xxxAutoRotateScreen(CDispBrokerRotationMgr *this)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v3; // [rsp+30h] [rbp-38h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // [rsp+38h] [rbp-30h] BYREF
  GUID ActivityId; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(v3) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x12u, 0, &v4, (unsigned __int8 *)&v3);
  CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(this, v4);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v3);
  return 0LL;
}
