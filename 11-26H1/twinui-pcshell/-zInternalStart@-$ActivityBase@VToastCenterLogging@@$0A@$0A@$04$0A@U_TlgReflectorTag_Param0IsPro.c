/*
 * XREFs of ?zInternalStart@?$ActivityBase@VToastCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001D63C
 * Callers:
 *     ?StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x180019BCC (-StartActivity@EM_NewNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001B9D4 (-StartActivity@EM_HideActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001BA70 (-StartActivity@EM_ViewShownActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z @ 0x18001BF64 (-StartActivity@EM_RaiseApplicationEventActivity@ToastCenterTelemetry@@QEAAXPEBG_N@Z.c)
 *     ?StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001C3F8 (-StartActivity@EM_LaunchActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001CA60 (-StartActivity@EM_PositionViewActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXPEBG@Z @ 0x18001CBA8 (-StartActivity@EM_EventQueuedActivity@ToastCenterTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18001DF0C (-StartActivity@EM_ReturnFocusActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z @ 0x1801E7484 (-StartActivity@EM_ShowActivity@ToastCenterTelemetry@@QEAAX_N@Z.c)
 *     ?StartActivity@EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1801FF374 (-StartActivity@EM_ViewHiddenActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802A0320 (-StartActivity@EM_ViewUncloakingActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802B5A8C (-StartActivity@EM_ViewDestroyedActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x1802BD56C (-StartActivity@EM_DisplaySettingsChangeActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ @ 0x18037DCF8 (-StartActivity@EM_CriticalNotificationActivity@ToastCenterTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ @ 0x18037DD94 (-StartActivity@EM_DisplayContextChanged@ToastCenterTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001D6FC (-Provider@ToastCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
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
