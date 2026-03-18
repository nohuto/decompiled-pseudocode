/*
 * XREFs of ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x140220910
 * Callers:
 *     RemoteRedrawScreen @ 0x14012515C (RemoteRedrawScreen.c)
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 *     NtUserRemoteConnect @ 0x1401FB800 (NtUserRemoteConnect.c)
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 *     ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x140272EF0 (-xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x140273220 (-xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z.c)
 *     xxxRemoteConsoleShadowStop @ 0x1402B91E4 (xxxRemoteConsoleShadowStop.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextScope::~CDisplayScenarioContextScope(
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextDissociate(this + 1);
}
