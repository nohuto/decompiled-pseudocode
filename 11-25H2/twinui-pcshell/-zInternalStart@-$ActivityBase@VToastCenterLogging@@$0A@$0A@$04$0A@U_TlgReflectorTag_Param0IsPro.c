/*
 * XREFs of ?zInternalStart@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017780
 * Callers:
 *     ?StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180015624 (-StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180015EA0 (-StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x1800165A8 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180016CD8 (-StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXPEBG@Z @ 0x180032B78 (-StartActivity@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180049788 (-StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801E5FB4 (-StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z @ 0x1801F14EC (-StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801FA63C (-StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18020BFF4 (-StartActivity@EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802A7B90 (-StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802BE89C (-StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802C6A0C (-StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180375F88 (-StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x180376014 (-StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001783C (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall wil::ActivityBase<ToastCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rdi

  v1 = *(RTL_SRWLOCK **)(a1 + 280);
  if ( v1 )
  {
    v3 = v1 + 33;
    AcquireSRWLockExclusive(v3);
  }
  else
  {
    v3 = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 272);
  if ( *(_DWORD *)ToastCenterLogging::Provider() > 5u )
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  else
    *(_OWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)v4 = 1;
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
