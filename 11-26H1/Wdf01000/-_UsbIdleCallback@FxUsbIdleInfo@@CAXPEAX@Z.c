/*
 * XREFs of ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x140072E90
 * Callers:
 *     <none>
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1400475A8 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 */

void __fastcall FxUsbIdleInfo::_UsbIdleCallback(FxPkgPnp *Context)
{
  unsigned __int8 v2; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbIdleInfo *m_UsbIdle; // rbx
  _FX_DRIVER_GLOBALS *v5; // rcx
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  event.m_Event.m_DbgFlagIsInitialized = 1;
  m_Globals = Context->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xBu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
  m_UsbIdle = Context->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  m_UsbIdle->m_IdleCallbackEvent = &event;
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCallback, v2);
  FxCREvent::EnterCRAndWaitAndLeave(&event);
  m_UsbIdle->m_IdleCallbackEvent = 0LL;
  v5 = Context->m_Globals;
  if ( v5->FxVerboseOn )
    WPP_IFR_SF_(v5, 5u, 0xCu, 0xCu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
}
