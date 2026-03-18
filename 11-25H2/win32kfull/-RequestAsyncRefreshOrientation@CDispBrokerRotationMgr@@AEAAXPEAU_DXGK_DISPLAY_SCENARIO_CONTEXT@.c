/*
 * XREFs of ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140272CCC
 * Callers:
 *     ?xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z @ 0x140272EF0 (-xxxAutoRotateScreen@CDispBrokerRotationMgr@@UEAAJK@Z.c)
 *     ?xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ @ 0x140272F90 (-xxxRefreshDisplayOrientation@CDispBrokerRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z @ 0x140273220 (-xxxSetAutoRotationStateInternal@CDispBrokerRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     ?QueryAutoRotationState@CRotationMgr@@QEAA?AW4tagAR_STATE@@XZ @ 0x140266D38 (-QueryAutoRotationState@CRotationMgr@@QEAA-AW4tagAR_STATE@@XZ.c)
 *     ?GetActivePpiPreference@CRotationMgr@@SA?AW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1402728EC (-GetActivePpiPreference@CRotationMgr@@SA-AW4ORIENTATION_PREFERENCE@@PEAK@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1402735C0 (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CDispBrokerRotationMgr::RequestAsyncRefreshOrientation(
        CDispBrokerRotationMgr *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  unsigned int AutoRotationState; // ebx
  __int64 v5; // rdx
  unsigned int ActivePpiPreference; // eax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  AutoRotationState = 0;
  if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline(this) )
    AutoRotationState = CRotationMgr::QueryAutoRotationState(this, v5);
  v7 = 0;
  ActivePpiPreference = CRotationMgr::GetActivePpiPreference(&v7, v5);
  DispBrokerAsyncRefreshOrientation(AutoRotationState, v7, ActivePpiPreference, a2);
}
