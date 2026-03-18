/*
 * XREFs of ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x1400F9570 (-xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ.c)
 *     ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x140299FE0 (-xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x14029A110 (-xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x1400F9948 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1400F9A0C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1400F9AB4 (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 */

void __fastcall CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(
        CDispBrokerRotationMgr *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned int AutoRotationState; // ebx
  unsigned int ActivePpiPreference; // eax
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  AutoRotationState = 0;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
    AutoRotationState = CRotationMgr::QueryAutoRotationState(this);
  v6 = 0;
  ActivePpiPreference = CRotationMgr::GetActivePpiPreference(&v6);
  DispBrokerAsyncRefreshOrientation(AutoRotationState, v6, ActivePpiPreference, a2);
}
